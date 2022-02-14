
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bdev; } ;
struct xhci_softc {TYPE_1__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_io_res; } ;
struct snps_dwc3_softc {int mem_res; int bsh; int bst; struct xhci_softc sc; } ;
typedef int driver_intr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int *,int,int *,int *,struct xhci_softc*,int **) ;
 int * FUNC_2 (int ,char*,int) ;
 struct snps_dwc3_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct xhci_softc*,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (struct xhci_softc*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_7)
{
 struct snps_dwc3_softc *VAR_8 = FUNC_3(VAR_7);
 struct xhci_softc *VAR_9 = &VAR_8->sc;
 int VAR_10 = 0, VAR_11 = 0;

 VAR_9->sc_io_res = VAR_8->mem_res;
 VAR_9->sc_io_tag = VAR_8->bst;
 VAR_9->sc_io_hdl = VAR_8->bsh;
 VAR_9->sc_io_size = FUNC_8(VAR_8->mem_res);

 VAR_9->sc_irq_res = FUNC_0(VAR_7, VAR_5, &VAR_11,
     VAR_4 | VAR_3);
 if (VAR_9->sc_irq_res == ((void*)0)) {
  FUNC_4(VAR_7, "Failed to allocate IRQ\n");
  return (VAR_0);
 }

 VAR_9->sc_bus.bdev = FUNC_2(VAR_7, "usbus", -1);
 if (VAR_9->sc_bus.bdev == ((void*)0)) {
  FUNC_4(VAR_7, "Failed to add USB device\n");
  return (VAR_0);
 }

 FUNC_7(VAR_9->sc_bus.bdev, &VAR_9->sc_bus);

 FUNC_9(VAR_9->sc_vendor, "Synopsys");
 FUNC_6(VAR_9->sc_bus.bdev, "Synopsys");

 VAR_10 = FUNC_1(VAR_7, VAR_9->sc_irq_res, VAR_2 | VAR_1,
     ((void*)0), (driver_intr_t *)VAR_6, VAR_9, &VAR_9->sc_intr_hdl);
 if (VAR_10 != 0) {
  FUNC_4(VAR_7, "Failed to setup IRQ, %d\n", VAR_10);
  VAR_9->sc_intr_hdl = ((void*)0);
  return (VAR_10);
 }

 VAR_10 = FUNC_10(VAR_9, VAR_7, 1);
 if (VAR_10 != 0) {
  FUNC_4(VAR_7, "Failed to init XHCI, with error %d\n", VAR_10);
  return (VAR_0);
 }

 VAR_10 = FUNC_11(VAR_9);
 if (VAR_10 != 0) {
  FUNC_4(VAR_7, "Failed to start XHCI controller, with error %d\n", VAR_10);
  return (VAR_0);
 }

 FUNC_4(*VAR_9->sc_bus.bdev, "trying to attach\n");
 VAR_10 = FUNC_5(VAR_9->sc_bus.bdev);
 if (VAR_10 != 0) {
  FUNC_4(VAR_7, "Failed to initialize USB, with error %d\n", VAR_10);
  return (VAR_0);
 }

 return (0);
}
