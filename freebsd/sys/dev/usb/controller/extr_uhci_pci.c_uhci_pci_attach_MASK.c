
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dma_bits; int bdev; int usbrev; int devices_max; int devices; void* parent; } ;
struct TYPE_8__ {TYPE_2__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; int sc_io_hdl; int sc_io_tag; void* sc_io_res; int sc_io_size; void* sc_dev; int sc_devices; } ;
typedef TYPE_1__ uhci_softc_t ;
typedef int driver_intr_t ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (void*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_1 (void*,int ,int*,int) ;
 int FUNC_2 (void*,int *,int,int *,TYPE_1__*,TYPE_1__*,...) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (void*,char*,int) ;
 TYPE_1__* FUNC_5 (void*) ;
 int FUNC_6 (void*,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*,int ,int) ;
 int FUNC_14 (void*,int ,int,int) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (TYPE_1__*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_20 (void*) ;
 int FUNC_21 (void*) ;
 scalar_t__ FUNC_22 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_21)
{
 uhci_softc_t *VAR_22 = FUNC_5(VAR_21);
 int VAR_23;
 int VAR_24;


 VAR_22->sc_bus.parent = VAR_21;
 VAR_22->sc_bus.devices = VAR_22->sc_devices;
 VAR_22->sc_bus.devices_max = VAR_14;
 VAR_22->sc_bus.dma_bits = 32;


 if (FUNC_22(&VAR_22->sc_bus, FUNC_0(VAR_21),
     &VAR_20)) {
  return VAR_0;
 }
 VAR_22->sc_dev = VAR_21;

 FUNC_10(VAR_21);

 VAR_23 = VAR_6;
 VAR_22->sc_io_res = FUNC_1(VAR_21, VAR_11, &VAR_23,
     VAR_9);
 if (!VAR_22->sc_io_res) {
  FUNC_6(VAR_21, "Could not map ports\n");
  goto error;
 }
 VAR_22->sc_io_tag = FUNC_16(VAR_22->sc_io_res);
 VAR_22->sc_io_hdl = FUNC_15(VAR_22->sc_io_res);
 VAR_22->sc_io_size = FUNC_17(VAR_22->sc_io_res);


 FUNC_3(VAR_22->sc_io_tag, VAR_22->sc_io_hdl, VAR_13, 0);

 VAR_23 = 0;
 VAR_22->sc_irq_res = FUNC_1(VAR_21, VAR_12, &VAR_23,
     VAR_10 | VAR_9);
 if (VAR_22->sc_irq_res == ((void*)0)) {
  FUNC_6(VAR_21, "Could not allocate irq\n");
  goto error;
 }
 VAR_22->sc_bus.bdev = FUNC_4(VAR_21, "usbus", -1);
 if (!VAR_22->sc_bus.bdev) {
  FUNC_6(VAR_21, "Could not add USB device\n");
  goto error;
 }
 FUNC_9(VAR_22->sc_bus.bdev, &VAR_22->sc_bus);





 FUNC_8(VAR_22->sc_bus.bdev, FUNC_21(VAR_21));
 switch (FUNC_12(VAR_21)) {
 case 131:
  FUNC_18(VAR_22->sc_vendor, "Intel");
  break;
 case 132:
  FUNC_18(VAR_22->sc_vendor, "HP");
  break;
 case 130:
  FUNC_18(VAR_22->sc_vendor, "VIA");
  break;
 default:
  if (VAR_18) {
   FUNC_6(VAR_21, "(New UHCI DeviceId=0x%08x)\n",
       FUNC_11(VAR_21));
  }
  FUNC_18(VAR_22->sc_vendor, "(0x%04x)", FUNC_12(VAR_21));
 }

 switch (FUNC_13(VAR_21, VAR_7, 1) & VAR_8) {
 case 128:
  VAR_22->sc_bus.usbrev = VAR_17;
  break;
 case 129:
  VAR_22->sc_bus.usbrev = VAR_15;
  break;
 default:

  FUNC_6(VAR_21, "USB revision is unknown. Assuming v1.1.\n");
  VAR_22->sc_bus.usbrev = VAR_16;
  break;
 }





 VAR_24 = FUNC_2(VAR_21, VAR_22->sc_irq_res, VAR_3 | VAR_2,
     (driver_intr_t *)VAR_19, VAR_22, &VAR_22->sc_intr_hdl);


 if (VAR_24) {
  FUNC_6(VAR_21, "Could not setup irq, %d\n", VAR_24);
  VAR_22->sc_intr_hdl = ((void*)0);
  goto error;
 }
 FUNC_14(VAR_21, VAR_4, VAR_5, 2);

 VAR_24 = FUNC_19(VAR_22);
 if (!VAR_24) {
  VAR_24 = FUNC_7(VAR_22->sc_bus.bdev);
 }
 if (VAR_24) {
  FUNC_6(VAR_21, "USB init failed\n");
  goto error;
 }
 return (0);

error:
 FUNC_20(VAR_21);
 return (VAR_1);
}
