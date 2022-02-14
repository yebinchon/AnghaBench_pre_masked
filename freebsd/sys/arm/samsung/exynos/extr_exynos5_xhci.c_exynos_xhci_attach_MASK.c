
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * bdev; } ;
struct TYPE_6__ {TYPE_4__ sc_bus; int sc_vendor; int * sc_intr_hdl; int sc_io_hdl; int sc_io_size; void* sc_io_tag; } ;
struct exynos_xhci_softc {TYPE_1__ base; int * res; void* bsh; void* bst; int dev; } ;
typedef int driver_intr_t ;
typedef int device_t ;
typedef void* bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int,int *,int *,TYPE_1__*,int **) ;
 int FUNC_3 (void*,void*,int,int ,int *) ;
 int * FUNC_4 (int ,char*,int) ;
 struct exynos_xhci_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (struct exynos_xhci_softc*) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 void* FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_5)
{
 struct exynos_xhci_softc *VAR_6 = FUNC_5(VAR_5);
 bus_space_handle_t VAR_7;
 int VAR_8;

 VAR_6->dev = VAR_5;

 if (FUNC_0(VAR_5, VAR_3, VAR_6->res)) {
  FUNC_6(VAR_5, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_6->base.sc_io_tag = FUNC_12(VAR_6->res[0]);
 VAR_7 = FUNC_11(VAR_6->res[0]);
 VAR_6->base.sc_io_size = FUNC_13(VAR_6->res[0]);


 VAR_6->bst = FUNC_12(VAR_6->res[1]);
 VAR_6->bsh = FUNC_11(VAR_6->res[1]);





 VAR_8 = FUNC_3(VAR_6->base.sc_io_tag, VAR_7, 0x0,
     VAR_6->base.sc_io_size, &VAR_6->base.sc_io_hdl);
 if (VAR_8 != 0) {
  FUNC_6(VAR_5, "Subregion failed\n");
  FUNC_1(VAR_5, VAR_3, VAR_6->res);
  return (VAR_0);
 }

 if (FUNC_16(&VAR_6->base, VAR_5, 0)) {
  FUNC_6(VAR_5, "Could not initialize softc\n");
  FUNC_1(VAR_5, VAR_3, VAR_6->res);
  return (VAR_0);
 }


 VAR_8 = FUNC_2(VAR_5, VAR_6->res[2], VAR_2 | VAR_1,
     ((void*)0), (driver_intr_t *)VAR_4, &VAR_6->base,
     &VAR_6->base.sc_intr_hdl);
 if (VAR_8) {
  FUNC_6(VAR_5, "Could not setup irq, %d\n", VAR_8);
  VAR_6->base.sc_intr_hdl = ((void*)0);
  goto error;
 }


 VAR_6->base.sc_bus.bdev = FUNC_4(VAR_5, "usbus", -1);
 if (VAR_6->base.sc_bus.bdev == ((void*)0)) {
  FUNC_6(VAR_5, "Could not add USB device\n");
  goto error;
 }
 FUNC_8(VAR_6->base.sc_bus.bdev, &VAR_6->base.sc_bus);
 FUNC_14(VAR_6->base.sc_vendor, "Samsung", sizeof(VAR_6->base.sc_vendor));

 FUNC_9(VAR_6);

 VAR_8 = FUNC_15(&VAR_6->base);
 if (VAR_8 == 0) {
  FUNC_6(VAR_5, "Starting controller\n");
  VAR_8 = FUNC_17(&VAR_6->base);
 }
 if (VAR_8 == 0) {
  FUNC_6(VAR_5, "Controller started\n");
  VAR_8 = FUNC_7(VAR_6->base.sc_bus.bdev);
 }
 if (VAR_8 != 0)
  goto error;
 return (0);

error:
 FUNC_10(VAR_5);
 return (VAR_0);
}
