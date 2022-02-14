
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dma_bits; int bdev; int devices_max; int devices; void* parent; } ;
struct TYPE_8__ {TYPE_2__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; void* sc_dev; int sc_devices; } ;
typedef TYPE_1__ ohci_softc_t ;
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
 int FUNC_0 (void*) ;
 int VAR_10 ;
 void* FUNC_1 (void*,int ,int*,int) ;
 int FUNC_2 (void*,int *,int,int *,TYPE_1__*,TYPE_1__*,...) ;
 int FUNC_3 (void*,char*,int) ;
 TYPE_1__* FUNC_4 (void*) ;
 int FUNC_5 (void*,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (void*,int) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (int ,char*,...) ;
 scalar_t__ FUNC_21 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_13)
{
 ohci_softc_t *VAR_14 = FUNC_4(VAR_13);
 int VAR_15;
 int VAR_16;


 VAR_14->sc_bus.parent = VAR_13;
 VAR_14->sc_bus.devices = VAR_14->sc_devices;
 VAR_14->sc_bus.devices_max = VAR_4;
 VAR_14->sc_bus.dma_bits = 32;


 if (FUNC_21(&VAR_14->sc_bus, FUNC_0(VAR_13),
     &VAR_12)) {
  return (VAR_0);
 }
 VAR_14->sc_dev = VAR_13;

 FUNC_12(VAR_13);





 if (FUNC_13(VAR_13) == 0x1103108e && FUNC_14(VAR_13) == 0)
  FUNC_16(VAR_13, 4);

 VAR_15 = VAR_5;
 VAR_14->sc_io_res = FUNC_1(VAR_13, VAR_9, &VAR_15,
     VAR_6);
 if (!VAR_14->sc_io_res) {
  FUNC_5(VAR_13, "Could not map memory\n");
  goto error;
 }
 VAR_14->sc_io_tag = FUNC_18(VAR_14->sc_io_res);
 VAR_14->sc_io_hdl = FUNC_17(VAR_14->sc_io_res);
 VAR_14->sc_io_size = FUNC_19(VAR_14->sc_io_res);

 VAR_15 = 0;
 VAR_14->sc_irq_res = FUNC_1(VAR_13, VAR_8, &VAR_15,
     VAR_7 | VAR_6);
 if (VAR_14->sc_irq_res == ((void*)0)) {
  FUNC_5(VAR_13, "Could not allocate irq\n");
  goto error;
 }
 VAR_14->sc_bus.bdev = FUNC_3(VAR_13, "usbus", -1);
 if (!VAR_14->sc_bus.bdev) {
  FUNC_5(VAR_13, "Could not add USB device\n");
  goto error;
 }
 FUNC_8(VAR_14->sc_bus.bdev, &VAR_14->sc_bus);





 FUNC_7(VAR_14->sc_bus.bdev, FUNC_11(VAR_13));
 switch (FUNC_15(VAR_13)) {
 case 138:
  FUNC_20(VAR_14->sc_vendor, "AcerLabs");
  break;
 case 137:
  FUNC_20(VAR_14->sc_vendor, "AMD");
  break;
 case 136:
  FUNC_20(VAR_14->sc_vendor, "Apple");
  break;
 case 135:
  FUNC_20(VAR_14->sc_vendor, "ATI");
  break;
 case 134:
  FUNC_20(VAR_14->sc_vendor, "CMDTECH");
  break;
 case 133:
  FUNC_20(VAR_14->sc_vendor, "NEC");
  break;
 case 132:
 case 131:
  FUNC_20(VAR_14->sc_vendor, "nVidia");
  break;
 case 130:
  FUNC_20(VAR_14->sc_vendor, "OPTi");
  break;
 case 129:
  FUNC_20(VAR_14->sc_vendor, "SiS");
  break;
 case 128:
  FUNC_20(VAR_14->sc_vendor, "SUN");
  break;
 default:
  if (VAR_10) {
   FUNC_5(VAR_13, "(New OHCI DeviceId=0x%08x)\n",
       FUNC_13(VAR_13));
  }
  FUNC_20(VAR_14->sc_vendor, "(0x%04x)", FUNC_15(VAR_13));
 }







 VAR_16 = FUNC_2(VAR_13, VAR_14->sc_irq_res, VAR_3 | VAR_2,
     (driver_intr_t *)VAR_11, VAR_14, &VAR_14->sc_intr_hdl);

 if (VAR_16) {
  FUNC_5(VAR_13, "Could not setup irq, %d\n", VAR_16);
  VAR_14->sc_intr_hdl = ((void*)0);
  goto error;
 }
 VAR_16 = FUNC_9(VAR_14);
 if (!VAR_16) {
  VAR_16 = FUNC_6(VAR_14->sc_bus.bdev);
 }
 if (VAR_16) {
  FUNC_5(VAR_13, "USB init failed\n");
  goto error;
 }
 return (0);

error:
 FUNC_10(VAR_13);
 return (VAR_1);
}
