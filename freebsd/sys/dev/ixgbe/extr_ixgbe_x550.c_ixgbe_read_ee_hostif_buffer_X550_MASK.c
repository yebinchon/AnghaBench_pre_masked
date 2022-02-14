
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int const) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int const) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; } ;
struct TYPE_5__ {int checksum; int buf_lenl; scalar_t__ buf_lenh; int cmd; } ;
struct TYPE_6__ {TYPE_1__ req; } ;
struct ixgbe_hic_read_shadow_ram {scalar_t__ pad3; scalar_t__ pad2; int length; int address; TYPE_2__ hdr; } ;
typedef scalar_t__ s32 ;
typedef int buffer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int*,int,int ) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int const) ;
 int FUNC_7 (struct ixgbe_hw*,int const) ;

s32 FUNC_8(struct ixgbe_hw *VAR_9,
         u16 VAR_10, u16 VAR_11, u16 *VAR_12)
{
 const u32 VAR_13 = VAR_7 | VAR_6;
 struct ixgbe_hic_read_shadow_ram VAR_14;
 u32 VAR_15 = 0;
 u16 VAR_16;
 s32 VAR_17;
 u32 VAR_18;

 FUNC_0("ixgbe_read_ee_hostif_buffer_X550");


 VAR_17 = VAR_9->mac.ops.acquire_swfw_sync(VAR_9, VAR_13);
 if (VAR_17) {
  FUNC_1("EEPROM read buffer - semaphore failed\n");
  return VAR_17;
 }

 while (VAR_11) {
  if (VAR_11 > VAR_1 / 2)
   VAR_16 = VAR_1 / 2;
  else
   VAR_16 = VAR_11;

  VAR_14.hdr.req.cmd = VAR_3;
  VAR_14.hdr.req.buf_lenh = 0;
  VAR_14.hdr.req.buf_lenl = VAR_4;
  VAR_14.hdr.req.checksum = VAR_0;


  VAR_14.address = FUNC_3((VAR_10 + VAR_15) * 2);
  VAR_14.length = FUNC_2(VAR_16 * 2);
  VAR_14.pad2 = 0;
  VAR_14.pad3 = 0;

  VAR_17 = FUNC_5(VAR_9, (u32 *)&VAR_14, sizeof(VAR_14),
         VAR_8);

  if (VAR_17) {
   FUNC_1("Host interface command failed\n");
   goto out;
  }

  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
   u32 VAR_19 = VAR_5 + (VAR_2 << 2) +
      2 * VAR_18;
   u32 VAR_20 = FUNC_4(VAR_9, VAR_19);

   VAR_12[VAR_15] = (u16)(VAR_20 & 0xffff);
   VAR_15++;
   VAR_18++;
   if (VAR_18 < VAR_16) {
    VAR_20 >>= 16;
    VAR_12[VAR_15] = (u16)(VAR_20 & 0xffff);
    VAR_15++;
   }
  }
  VAR_11 -= VAR_16;
 }

out:
 VAR_9->mac.ops.release_swfw_sync(VAR_9, VAR_13);
 return VAR_17;
}
