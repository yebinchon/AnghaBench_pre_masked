
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bdev; int devices_max; int devices; int parent; } ;
struct xhci_softc {TYPE_1__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; int * sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
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
 char* VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int *,int,int *,int *,struct xhci_softc*,int **) ;
 int * FUNC_2 (int ,char*,int) ;
 struct xhci_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct xhci_softc*,int ,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_14 (struct xhci_softc*) ;

int
FUNC_15(device_t VAR_12)
{
 struct xhci_softc *VAR_13 = FUNC_3(VAR_12);
 int VAR_14 = 0, VAR_15 = 0;

 VAR_13->sc_bus.parent = VAR_12;
 VAR_13->sc_bus.devices = VAR_13->sc_devices;
 VAR_13->sc_bus.devices_max = VAR_10;

 VAR_13->sc_io_res = FUNC_0(VAR_12, VAR_7, &VAR_15,
     VAR_4);
 if (VAR_13->sc_io_res == ((void*)0)) {
  FUNC_4(VAR_12, "Failed to map memory\n");
  FUNC_8(VAR_12);
  return (VAR_0);
 }

 VAR_13->sc_io_tag = FUNC_10(VAR_13->sc_io_res);
 VAR_13->sc_io_hdl = FUNC_9(VAR_13->sc_io_res);
 VAR_13->sc_io_size = FUNC_11(VAR_13->sc_io_res);

 VAR_13->sc_irq_res = FUNC_0(VAR_12, VAR_6, &VAR_15,
     VAR_5 | VAR_4);
 if (VAR_13->sc_irq_res == ((void*)0)) {
  FUNC_4(VAR_12, "Failed to allocate IRQ\n");
  FUNC_8(VAR_12);
  return (VAR_0);
 }

 VAR_13->sc_bus.bdev = FUNC_2(VAR_12, "usbus", -1);
 if (VAR_13->sc_bus.bdev == ((void*)0)) {
  FUNC_4(VAR_12, "Failed to add USB device\n");
  FUNC_8(VAR_12);
  return (VAR_0);
 }

 FUNC_7(VAR_13->sc_bus.bdev, &VAR_13->sc_bus);

 FUNC_12(VAR_13->sc_vendor, VAR_9);
 FUNC_6(VAR_13->sc_bus.bdev, VAR_8);

 VAR_14 = FUNC_1(VAR_12, VAR_13->sc_irq_res, VAR_2 | VAR_1,
     ((void*)0), (driver_intr_t *)VAR_11, VAR_13, &VAR_13->sc_intr_hdl);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12, "Failed to setup error IRQ, %d\n", VAR_14);
  VAR_13->sc_intr_hdl = ((void*)0);
  FUNC_8(VAR_12);
  return (VAR_14);
 }

 VAR_14 = FUNC_13(VAR_13, VAR_12, VAR_3);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12, "Failed to init XHCI, with error %d\n", VAR_14);
  FUNC_8(VAR_12);
  return (VAR_0);
 }

 VAR_14 = FUNC_14(VAR_13);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12, "Failed to start XHCI controller, with error %d\n", VAR_14);
  FUNC_8(VAR_12);
  return (VAR_0);
 }

 VAR_14 = FUNC_5(VAR_13->sc_bus.bdev);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12, "Failed to initialize USB, with error %d\n", VAR_14);
  FUNC_8(VAR_12);
  return (VAR_0);
 }

 return (0);
}
