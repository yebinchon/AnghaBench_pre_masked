
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct TYPE_8__ {TYPE_2__ sc_bus; int sc_flags; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef int device_t ;


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
 int FUNC_0 (int ) ;
 int VAR_14 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int *,int,int *,TYPE_1__*,TYPE_1__*,...) ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (void*) ;
 int FUNC_22 (void*) ;
 int FUNC_23 (int ,char*,...) ;
 scalar_t__ FUNC_24 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_25(device_t VAR_17)
{
 ehci_softc_t *VAR_18 = FUNC_4(VAR_17);
 int VAR_19;
 int VAR_20;


 VAR_18->sc_bus.parent = VAR_17;
 VAR_18->sc_bus.devices = VAR_18->sc_devices;
 VAR_18->sc_bus.devices_max = VAR_0;
 VAR_18->sc_bus.dma_bits = 32;


 if (FUNC_24(&VAR_18->sc_bus,
     FUNC_0(VAR_17), &VAR_16)) {
  return (VAR_3);
 }

 FUNC_15(VAR_17);

 switch (FUNC_19(VAR_17, VAR_8, 1) & VAR_9) {
 case 128:
 case 131:
 case 130:






  FUNC_5(VAR_17, "pre-2.0 USB revision (ignored)\n");

 case 129:
  break;
 default:

  FUNC_5(VAR_17, "USB revision is unknown. Assuming v2.0.\n");
  break;
 }

 VAR_20 = VAR_7;
 VAR_18->sc_io_res = FUNC_1(VAR_17, VAR_13, &VAR_20,
     VAR_10);
 if (!VAR_18->sc_io_res) {
  FUNC_5(VAR_17, "Could not map memory\n");
  goto error;
 }
 VAR_18->sc_io_tag = FUNC_21(VAR_18->sc_io_res);
 VAR_18->sc_io_hdl = FUNC_20(VAR_18->sc_io_res);
 VAR_18->sc_io_size = FUNC_22(VAR_18->sc_io_res);

 VAR_20 = 0;
 VAR_18->sc_irq_res = FUNC_1(VAR_17, VAR_12, &VAR_20,
     VAR_11 | VAR_10);
 if (VAR_18->sc_irq_res == ((void*)0)) {
  FUNC_5(VAR_17, "Could not allocate irq\n");
  goto error;
 }
 VAR_18->sc_bus.bdev = FUNC_3(VAR_17, "usbus", -1);
 if (!VAR_18->sc_bus.bdev) {
  FUNC_5(VAR_17, "Could not add USB device\n");
  goto error;
 }
 FUNC_8(VAR_18->sc_bus.bdev, &VAR_18->sc_bus);





 FUNC_7(VAR_18->sc_bus.bdev, FUNC_12(VAR_17));
 switch (FUNC_18(VAR_17)) {
 case 144:
  FUNC_23(VAR_18->sc_vendor, "AcerLabs");
  break;
 case 143:
  FUNC_23(VAR_18->sc_vendor, "AMD");
  break;
 case 142:
  FUNC_23(VAR_18->sc_vendor, "Apple");
  break;
 case 141:
  FUNC_23(VAR_18->sc_vendor, "ATI");
  break;
 case 140:
  FUNC_23(VAR_18->sc_vendor, "CMDTECH");
  break;
 case 139:
  FUNC_23(VAR_18->sc_vendor, "Intel");
  break;
 case 138:
  FUNC_23(VAR_18->sc_vendor, "NEC");
  break;
 case 135:
  FUNC_23(VAR_18->sc_vendor, "OPTi");
  break;
 case 134:
  FUNC_23(VAR_18->sc_vendor, "Philips");
  break;
 case 133:
  FUNC_23(VAR_18->sc_vendor, "SiS");
  break;
 case 137:
 case 136:
  FUNC_23(VAR_18->sc_vendor, "nVidia");
  break;
 case 132:
  FUNC_23(VAR_18->sc_vendor, "VIA");
  break;
 default:
  if (VAR_14)
   FUNC_5(VAR_17, "(New EHCI DeviceId=0x%08x)\n",
       FUNC_17(VAR_17));
  FUNC_23(VAR_18->sc_vendor, "(0x%04x)", FUNC_18(VAR_17));
 }





 VAR_19 = FUNC_2(VAR_17, VAR_18->sc_irq_res, VAR_6 | VAR_5,
     (driver_intr_t *)VAR_15, VAR_18, &VAR_18->sc_intr_hdl);

 if (VAR_19) {
  FUNC_5(VAR_17, "Could not setup irq, %d\n", VAR_19);
  VAR_18->sc_intr_hdl = ((void*)0);
  goto error;
 }
 FUNC_13(VAR_17);



 switch (FUNC_18(VAR_17)) {
 case 141:

  switch (FUNC_16(VAR_17)) {
  case 0x4386:
   FUNC_10(VAR_17, 0);
   break;
  case 0x4396:
   FUNC_10(VAR_17, 1);
   break;
  default:
   break;
  }
  break;

 case 132:
  FUNC_14(VAR_17);
  break;

 default:
  break;
 }


 switch (FUNC_18(VAR_17)) {
 case 141:
 case 132:
  VAR_18->sc_flags |= VAR_2;
  if (VAR_14)
   FUNC_5(VAR_17,
       "Dropped interrupts workaround enabled\n");
  break;
 default:
  break;
 }


 switch (FUNC_18(VAR_17)) {
 case 137:
 case 136:
  VAR_18->sc_flags |= VAR_1;
  if (VAR_14)
   FUNC_5(VAR_17,
       "Doorbell workaround enabled\n");
  break;
 default:
  break;
 }

 VAR_19 = FUNC_9(VAR_18);
 if (!VAR_19) {
  VAR_19 = FUNC_6(VAR_18->sc_bus.bdev);
 }
 if (VAR_19) {
  FUNC_5(VAR_17, "USB init failed err=%d\n", VAR_19);
  goto error;
 }
 return (0);

error:
 FUNC_11(VAR_17);
 return (VAR_4);
}
