
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * bdev; int bus_mtx; } ;
struct xhci_softc {int sc_ctlstep; TYPE_1__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; int * sc_msix_res; int sc_callout; int * sc_io_res; int sc_imod_default; int * sc_port_route; int sc_io_size; int sc_io_hdl; int sc_io_tag; } ;
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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int,int *) ;
 int FUNC_4 (int ,int *,int,int *,int *,struct xhci_softc*,int **) ;
 int * FUNC_5 (int ,char*,int) ;
 struct xhci_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_10 (int ,int*) ;
 scalar_t__ FUNC_11 (int ,int*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,char*,int) ;
 int FUNC_22 (int *,int *,int ) ;
 int FUNC_23 (struct xhci_softc*) ;
 scalar_t__ FUNC_24 (struct xhci_softc*,int ,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_25 (struct xhci_softc*) ;
 int FUNC_26 (int ) ;
 int VAR_13 ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct xhci_softc*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_29 () ;

__attribute__((used)) static int
FUNC_30(device_t VAR_16)
{
 struct xhci_softc *VAR_17 = FUNC_6(VAR_16);
 int VAR_18, VAR_19, VAR_20, VAR_21;
 uint8_t VAR_22 = 1;
 uint8_t VAR_23 = 0;

 VAR_21 = VAR_4;
 VAR_17->sc_io_res = FUNC_2(VAR_16, VAR_8, &VAR_21,
     VAR_5);
 if (!VAR_17->sc_io_res) {
  FUNC_7(VAR_16, "Could not map memory\n");
  return (VAR_0);
 }
 VAR_17->sc_io_tag = FUNC_18(VAR_17->sc_io_res);
 VAR_17->sc_io_hdl = FUNC_17(VAR_17->sc_io_res);
 VAR_17->sc_io_size = FUNC_20(VAR_17->sc_io_res);

 switch (FUNC_13(VAR_16)) {
 case 0x01941033:
 case 0x00141912:

  VAR_23 = 1;
  break;
 case 0x10001b73:

  VAR_22 = 0;
  break;
 case 0x0f358086:
 case 0x9c318086:
 case 0x1e318086:
 case 0x8c318086:
 case 0x8cb18086:
 case 0x9cb18086:




  VAR_17->sc_port_route = &VAR_13;
  VAR_17->sc_imod_default = VAR_9;
  VAR_17->sc_ctlstep = 1;
  break;
 }

 if (FUNC_24(VAR_17, VAR_16, VAR_23)) {
  FUNC_7(VAR_16, "Could not initialize softc\n");
  FUNC_3(VAR_16, VAR_8, VAR_4,
      VAR_17->sc_io_res);
  return (VAR_1);
 }

 FUNC_12(VAR_16);

 FUNC_22(&VAR_17->sc_callout, &VAR_17->sc_bus.bus_mtx, 0);

 VAR_21 = 0;
 if (VAR_15 && (VAR_20 = FUNC_15(VAR_16)) >= 0) {
  VAR_17->sc_msix_res = FUNC_2(VAR_16, VAR_8,
      &VAR_20, VAR_5);
  if (VAR_17->sc_msix_res == ((void*)0)) {

   FUNC_7(VAR_16,
       "Unable to map MSI-X table \n");
  } else {
   VAR_18 = 1;
   if (FUNC_11(VAR_16, &VAR_18) == 0) {
    if (VAR_10)
     FUNC_7(VAR_16, "MSI-X enabled\n");
    VAR_21 = 1;
   } else {
    FUNC_3(VAR_16, VAR_8,
        VAR_20, VAR_17->sc_msix_res);
    VAR_17->sc_msix_res = ((void*)0);
   }
  }
 }
 if (VAR_21 == 0 && VAR_14 && VAR_22) {
  VAR_18 = 1;
  if (FUNC_10(VAR_16, &VAR_18) == 0) {
   if (VAR_10)
    FUNC_7(VAR_16, "MSI enabled\n");
   VAR_21 = 1;
  }
 }
 VAR_17->sc_irq_res = FUNC_2(VAR_16, VAR_7, &VAR_21,
     VAR_5 | (VAR_21 != 0 ? 0 : VAR_6));
 if (VAR_17->sc_irq_res == ((void*)0)) {
  FUNC_16(VAR_16);
  FUNC_7(VAR_16, "Could not allocate IRQ\n");

 }
 VAR_17->sc_bus.bdev = FUNC_5(VAR_16, "usbus", -1);
 if (VAR_17->sc_bus.bdev == ((void*)0)) {
  FUNC_7(VAR_16, "Could not add USB device\n");
  goto error;
 }
 FUNC_9(VAR_17->sc_bus.bdev, &VAR_17->sc_bus);

 FUNC_21(VAR_17->sc_vendor, "0x%04x", FUNC_14(VAR_16));

 if (VAR_17->sc_irq_res != ((void*)0)) {
  VAR_19 = FUNC_4(VAR_16, VAR_17->sc_irq_res, VAR_3 | VAR_2,
      ((void*)0), (driver_intr_t *)VAR_12, VAR_17, &VAR_17->sc_intr_hdl);
  if (VAR_19 != 0) {
   FUNC_3(VAR_16, VAR_7,
       FUNC_19(VAR_17->sc_irq_res), VAR_17->sc_irq_res);
   VAR_17->sc_irq_res = ((void*)0);
   FUNC_16(VAR_16);
   FUNC_7(VAR_16, "Could not setup IRQ, err=%d\n", VAR_19);
   VAR_17->sc_intr_hdl = ((void*)0);
  }
 }
 if (VAR_17->sc_irq_res == ((void*)0) || VAR_17->sc_intr_hdl == ((void*)0)) {
  if (FUNC_29() != 0) {
   FUNC_7(VAR_16, "Interrupt polling at %dHz\n", VAR_11);
   FUNC_0(&VAR_17->sc_bus);
   FUNC_25(VAR_17);
   FUNC_1(&VAR_17->sc_bus);
  } else
   goto error;
 }

 FUNC_27(VAR_16);

 VAR_19 = FUNC_23(VAR_17);

 if (VAR_19 == 0)
  VAR_19 = FUNC_28(VAR_17);

 if (VAR_19 == 0)
  VAR_19 = FUNC_8(VAR_17->sc_bus.bdev);

 if (VAR_19) {
  FUNC_7(VAR_16, "XHCI halt/start/probe failed err=%d\n", VAR_19);
  goto error;
 }
 return (0);

error:
 FUNC_26(VAR_16);
 return (VAR_1);
}
