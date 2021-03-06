
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_cap {int prod_ida; } ;
struct cyapa_boot_regs {int stat; int boot; int error; } ;
typedef int device_t ;
typedef int boot ;
typedef int bl_exit ;
typedef int bl_deactivate ;


 int CMD_BOOT_STATUS ;
 int CMD_QUERY_CAPABILITIES ;
 int CYAPA_BOOT_BUSY ;
 int CYAPA_ERROR_BOOTLOADER ;
 int CYAPA_STAT_RUNNING ;
 int ENXIO ;
 int cyapa_read_bytes (int ,int ,void*,int) ;
 int cyapa_write_bytes (int ,int ,char*,int) ;
 int device_printf (int ,char*,...) ;
 int hz ;
 int pause (char*,int) ;
 scalar_t__ strncmp (int ,char*,int) ;

__attribute__((used)) static int
init_device(device_t dev, struct cyapa_cap *cap, int probe)
{
 static char bl_exit[] = {
  0x00, 0xff, 0xa5, 0x00, 0x01,
  0x02, 0x03, 0x04, 0x05, 0x06, 0x07 };
 static char bl_deactivate[] = {
  0x00, 0xff, 0x3b, 0x00, 0x01,
  0x02, 0x03, 0x04, 0x05, 0x06, 0x07 };
 struct cyapa_boot_regs boot;
 int error;
 int retries;


 error = cyapa_read_bytes(dev, CMD_BOOT_STATUS,
     (void *)&boot, sizeof(boot));
 if (error)
  goto done;





 retries = 20;
 while ((boot.stat & CYAPA_STAT_RUNNING) == 0 && retries > 0) {
  if (boot.boot & CYAPA_BOOT_BUSY) {

  } else if (boot.error & CYAPA_ERROR_BOOTLOADER) {

   error = cyapa_write_bytes(dev, CMD_BOOT_STATUS,
       bl_deactivate, sizeof(bl_deactivate));
   if (error)
    goto done;
  } else {

   error = cyapa_write_bytes(dev, CMD_BOOT_STATUS,
       bl_exit, sizeof(bl_exit));
   if (error)
    goto done;
  }
  pause("cyapab1", (hz * 2) / 10);
  --retries;
  error = cyapa_read_bytes(dev, CMD_BOOT_STATUS,
      (void *)&boot, sizeof(boot));
  if (error)
   goto done;
 }

 if (retries == 0) {
  device_printf(dev, "Unable to bring device out of bootstrap\n");
  error = ENXIO;
  goto done;
 }


 if (cap) {
  error = cyapa_read_bytes(dev, CMD_QUERY_CAPABILITIES,
      (void *)cap, sizeof(*cap));

  if (strncmp(cap->prod_ida, "CYTRA", 5) != 0) {
   device_printf(dev, "Product ID \"%5.5s\" mismatch\n",
       cap->prod_ida);
   error = ENXIO;
  }
 }
 error = cyapa_read_bytes(dev, CMD_BOOT_STATUS,
     (void *)&boot, sizeof(boot));

 if (probe == 0)
  device_printf(dev, "cyapa init status %02x\n", boot.stat);
 else if (probe == 2)
  device_printf(dev, "cyapa reset status %02x\n", boot.stat);

done:
 if (error)
  device_printf(dev, "Unable to initialize\n");
 return (error);
}
