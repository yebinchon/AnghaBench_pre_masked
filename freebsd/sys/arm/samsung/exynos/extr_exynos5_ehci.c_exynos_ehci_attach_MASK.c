
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dma_bits; int * bdev; int devices_max; int devices; void* parent; } ;
struct TYPE_6__ {int sc_intr_hdl; TYPE_2__ sc_bus; int sc_flags; int sc_vendor; int sc_io_hdl; int sc_io_size; void* sc_io_tag; int sc_devices; } ;
struct exynos_ehci_softc {int * res; void* sysreg_bsh; void* sysreg_bst; void* host_bsh; void* host_bst; TYPE_1__ base; void* dev; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef void* device_t ;
typedef void* bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,int ,int *) ;
 int FUNC_2 (void*,int ,int,int *,int *,TYPE_1__*,int *) ;
 int FUNC_3 (void*,void*,int,int ,int *) ;
 int FUNC_4 (void*,int ,int ) ;
 int * FUNC_5 (void*,char*,int) ;
 int FUNC_6 (void*,int *) ;
 struct exynos_ehci_softc* FUNC_7 (void*) ;
 int FUNC_8 (void*,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (struct exynos_ehci_softc*) ;
 void* FUNC_13 (int ) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,int) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_8)
{
 struct exynos_ehci_softc *VAR_9;
 ehci_softc_t *VAR_10;
 bus_space_handle_t VAR_11;
 int VAR_12;

 VAR_9 = FUNC_7(VAR_8);
 VAR_9->dev = VAR_8;
 VAR_10 = &VAR_9->base;
 VAR_10->sc_bus.parent = VAR_8;
 VAR_10->sc_bus.devices = VAR_10->sc_devices;
 VAR_10->sc_bus.devices_max = VAR_0;
 VAR_10->sc_bus.dma_bits = 32;

 if (FUNC_1(VAR_8, VAR_7, VAR_9->res)) {
  FUNC_8(VAR_8, "could not allocate resources\n");
  return (VAR_2);
 }


 VAR_10->sc_io_tag = FUNC_14(VAR_9->res[0]);
 VAR_11 = FUNC_13(VAR_9->res[0]);
 VAR_10->sc_io_size = FUNC_15(VAR_9->res[0]);


 VAR_9->host_bst = FUNC_14(VAR_9->res[1]);
 VAR_9->host_bsh = FUNC_13(VAR_9->res[1]);


 VAR_9->sysreg_bst = FUNC_14(VAR_9->res[2]);
 VAR_9->sysreg_bsh = FUNC_13(VAR_9->res[2]);


 if (FUNC_17(&VAR_10->sc_bus, FUNC_0(VAR_8),
  &VAR_6))
  return (VAR_2);





 VAR_12 = FUNC_3(VAR_10->sc_io_tag, VAR_11, 0x0,
     VAR_10->sc_io_size, &VAR_10->sc_io_hdl);
 if (VAR_12 != 0)
  return (VAR_2);

 FUNC_12(VAR_9);


 VAR_12 = FUNC_2(VAR_8, VAR_9->res[3], VAR_4 | VAR_3,
     ((void*)0), (driver_intr_t *)VAR_5, VAR_10,
     &VAR_10->sc_intr_hdl);
 if (VAR_12) {
  FUNC_8(VAR_8, "Could not setup irq, "
      "%d\n", VAR_12);
  return (1);
 }


 VAR_10->sc_bus.bdev = FUNC_5(VAR_8, "usbus", -1);
 if (!VAR_10->sc_bus.bdev) {
  FUNC_8(VAR_8, "Could not add USB device\n");
  VAR_12 = FUNC_4(VAR_8, VAR_9->res[3],
      VAR_10->sc_intr_hdl);
  if (VAR_12)
   FUNC_8(VAR_8, "Could not tear down irq,"
       " %d\n", VAR_12);
  return (1);
 }
 FUNC_10(VAR_10->sc_bus.bdev, &VAR_10->sc_bus);

 FUNC_16(VAR_10->sc_vendor, "Samsung", sizeof(VAR_10->sc_vendor));

 VAR_12 = FUNC_11(VAR_10);
 if (!VAR_12) {
  VAR_10->sc_flags |= VAR_1;
  VAR_12 = FUNC_9(VAR_10->sc_bus.bdev);
 } else {
  FUNC_8(VAR_8, "USB init failed err=%d\n", VAR_12);

  FUNC_6(VAR_8, VAR_10->sc_bus.bdev);
  VAR_10->sc_bus.bdev = ((void*)0);

  VAR_12 = FUNC_4(VAR_8, VAR_9->res[3],
      VAR_10->sc_intr_hdl);
  if (VAR_12)
   FUNC_8(VAR_8, "Could not tear down irq,"
       " %d\n", VAR_12);
  return (1);
 }
 return (0);
}
