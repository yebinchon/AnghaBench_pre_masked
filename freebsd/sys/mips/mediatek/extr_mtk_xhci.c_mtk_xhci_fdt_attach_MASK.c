
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bdev; int devices_max; int devices; int parent; } ;
struct xhci_softc {TYPE_1__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
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
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int *,int,int *,int *,struct xhci_softc*,int **) ;
 int FUNC_2 (int ,char*,int) ;
 struct xhci_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct xhci_softc*) ;
 int FUNC_15 (struct xhci_softc*,int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (struct xhci_softc*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_10)
{
 struct xhci_softc *VAR_11 = FUNC_3(VAR_10);
 int VAR_12;
 int VAR_13;


 VAR_11->sc_bus.parent = VAR_10;
 VAR_11->sc_bus.devices = VAR_11->sc_devices;
 VAR_11->sc_bus.devices_max = VAR_8;

 VAR_13 = 0;
 VAR_11->sc_io_res = FUNC_0(VAR_10, VAR_6, &VAR_13,
     VAR_3);
 if (!VAR_11->sc_io_res) {
  FUNC_4(VAR_10, "Could not map memory\n");
  goto error;
 }
 VAR_11->sc_io_tag = FUNC_11(VAR_11->sc_io_res);
 VAR_11->sc_io_hdl = FUNC_10(VAR_11->sc_io_res);
 VAR_11->sc_io_size = FUNC_12(VAR_11->sc_io_res);

 FUNC_9(VAR_10);

 VAR_13 = 0;
 VAR_11->sc_irq_res = FUNC_0(VAR_10, VAR_5, &VAR_13,
     VAR_4 | VAR_3);
 if (VAR_11->sc_irq_res == ((void*)0)) {
  FUNC_4(VAR_10, "Could not allocate irq\n");
  goto error;
 }

 VAR_11->sc_bus.bdev = FUNC_2(VAR_10, "usbus", -1);
 if (!(VAR_11->sc_bus.bdev)) {
  FUNC_4(VAR_10, "Could not add USB device\n");
  goto error;
 }
 FUNC_7(VAR_11->sc_bus.bdev, &VAR_11->sc_bus);
 FUNC_6(VAR_11->sc_bus.bdev, VAR_7);

 FUNC_13(VAR_11->sc_vendor, "Mediatek");

 VAR_12 = FUNC_1(VAR_10, VAR_11->sc_irq_res, VAR_2 | VAR_1,
     ((void*)0), (driver_intr_t *)VAR_9, VAR_11, &VAR_11->sc_intr_hdl);
 if (VAR_12) {
  FUNC_4(VAR_10, "Could not setup irq, %d\n", VAR_12);
  VAR_11->sc_intr_hdl = ((void*)0);
  goto error;
 }

 VAR_12 = FUNC_15(VAR_11, VAR_10, 1);
 if (VAR_12 == 0)
  VAR_12 = FUNC_14(VAR_11);
 if (VAR_12 == 0)
  VAR_12 = FUNC_16(VAR_11);
 if (VAR_12 == 0)
  VAR_12 = FUNC_5(VAR_11->sc_bus.bdev);
 if (VAR_12) {
  FUNC_4(VAR_10, "USB init failed err=%d\n", VAR_12);
  goto error;
 }
 return (0);

error:
 FUNC_8(VAR_10);
 return (VAR_0);
}
