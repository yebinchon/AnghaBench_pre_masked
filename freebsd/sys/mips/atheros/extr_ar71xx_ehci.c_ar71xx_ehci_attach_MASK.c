
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dma_bits; int bdev; int usbrev; int devices_max; int devices; int parent; } ;
struct TYPE_8__ {int sc_flags; TYPE_2__ sc_bus; int sc_offs; int sc_vendor_get_port_speed; int sc_vendor_post_reset; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
struct ar71xx_ehci_softc {TYPE_1__ base; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int device_t ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int *,int,int *,int ,TYPE_1__*,int **) ;
 int FUNC_6 (int ,char*,int) ;
 struct ar71xx_ehci_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,TYPE_2__*) ;
 int VAR_18 ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_19 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int ,char*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_20)
{
 struct ar71xx_ehci_softc *VAR_21 = FUNC_7(VAR_20);
 ehci_softc_t *VAR_22 = &VAR_21->base;
 int VAR_23;
 int VAR_24;


 VAR_22->sc_bus.parent = VAR_20;
 VAR_22->sc_bus.devices = VAR_22->sc_devices;
 VAR_22->sc_bus.devices_max = VAR_2;
 VAR_22->sc_bus.dma_bits = 32;


 if (FUNC_17(&VAR_22->sc_bus,
     FUNC_2(VAR_20), &VAR_19)) {
  return (VAR_5);
 }

 VAR_22->sc_bus.usbrev = VAR_13;



 VAR_24 = 0;
 VAR_22->sc_io_res = FUNC_4(VAR_20, VAR_12, &VAR_24, VAR_9);
 if (!VAR_22->sc_io_res) {
  FUNC_8(VAR_20, "Could not map memory\n");
  goto error;
 }





 VAR_22->sc_io_tag = VAR_14;
 VAR_22->sc_io_hdl = FUNC_14(VAR_22->sc_io_res);
 VAR_22->sc_io_size = FUNC_15(VAR_22->sc_io_res);

 VAR_24 = 0;
 VAR_22->sc_irq_res = FUNC_4(VAR_20, VAR_11, &VAR_24,
     VAR_9 | VAR_10);
 if (VAR_22->sc_irq_res == ((void*)0)) {
  FUNC_8(VAR_20, "Could not allocate irq\n");
  goto error;
 }
 VAR_22->sc_bus.bdev = FUNC_6(VAR_20, "usbus", -1);
 if (!VAR_22->sc_bus.bdev) {
  FUNC_8(VAR_20, "Could not add USB device\n");
  goto error;
 }
 FUNC_11(VAR_22->sc_bus.bdev, &VAR_22->sc_bus);
 FUNC_10(VAR_22->sc_bus.bdev, VAR_1);

 FUNC_16(VAR_22->sc_vendor, "Atheros");

 VAR_23 = FUNC_5(VAR_20, VAR_22->sc_irq_res, VAR_8 | VAR_7,
     ((void*)0), VAR_15, VAR_22, &VAR_22->sc_intr_hdl);
 if (VAR_23) {
  FUNC_8(VAR_20, "Could not setup irq, %d\n", VAR_23);
  VAR_22->sc_intr_hdl = ((void*)0);
  goto error;
 }
 VAR_22->sc_flags = 0;
 VAR_22->sc_vendor_post_reset = VAR_16;

 switch (VAR_17) {
  case 140:
  case 139:
  case 138:
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_22->sc_flags |= VAR_4 | VAR_3;
   VAR_22->sc_vendor_get_port_speed =
       VAR_18;
   break;
  default:

   break;
 }





 VAR_22->sc_offs = FUNC_0(FUNC_1(VAR_22, VAR_0));

 (void) FUNC_13(VAR_22);

 VAR_23 = FUNC_12(VAR_22);
 if (!VAR_23) {
  VAR_23 = FUNC_9(VAR_22->sc_bus.bdev);
 }
 if (VAR_23) {
  FUNC_8(VAR_20, "USB init failed err=%d\n", VAR_23);
  goto error;
 }
 return (0);

error:
 FUNC_3(VAR_20);
 return (VAR_6);
}
