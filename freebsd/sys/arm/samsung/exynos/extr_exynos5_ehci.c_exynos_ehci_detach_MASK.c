
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * bdev; } ;
struct TYPE_5__ {int sc_flags; TYPE_1__ sc_bus; int * sc_intr_hdl; scalar_t__ sc_io_hdl; scalar_t__ sc_io_tag; } ;
struct exynos_ehci_softc {scalar_t__* res; TYPE_2__ base; } ;
typedef TYPE_2__ ehci_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 struct exynos_ehci_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 struct exynos_ehci_softc *VAR_4;
 ehci_softc_t *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_3);
 VAR_5 = &VAR_4->base;

 if (VAR_5->sc_flags & VAR_0)
  return (0);




 if (VAR_5->sc_flags & VAR_0) {
  FUNC_7(VAR_5);
  VAR_5->sc_flags &= ~VAR_0;
 }





 if (VAR_5->sc_io_tag && VAR_5->sc_io_hdl)
  FUNC_1(VAR_5->sc_io_tag, VAR_5->sc_io_hdl,
      VAR_1, 0);

 if (VAR_4->res[3] && VAR_5->sc_intr_hdl) {
  VAR_6 = FUNC_2(VAR_3, VAR_4->res[3],
      VAR_5->sc_intr_hdl);
  if (VAR_6) {
   FUNC_6(VAR_3, "Could not tear down irq,"
       " %d\n", VAR_6);
   return (VAR_6);
  }
  VAR_5->sc_intr_hdl = ((void*)0);
 }

 if (VAR_5->sc_bus.bdev) {
  FUNC_3(VAR_3, VAR_5->sc_bus.bdev);
  VAR_5->sc_bus.bdev = ((void*)0);
 }


 FUNC_4(VAR_3);

 FUNC_0(VAR_3, VAR_2, VAR_4->res);

 return (0);
}
