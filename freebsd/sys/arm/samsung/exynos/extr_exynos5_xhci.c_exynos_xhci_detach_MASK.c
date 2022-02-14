
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sc_intr_hdl; } ;
struct exynos_xhci_softc {TYPE_1__ base; scalar_t__* res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 struct exynos_xhci_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct exynos_xhci_softc *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;


 FUNC_2(VAR_1);

 FUNC_5(&VAR_2->base);

 if (VAR_2->res[2] && VAR_2->base.sc_intr_hdl) {
  VAR_3 = FUNC_1(VAR_1, VAR_2->res[2],
      VAR_2->base.sc_intr_hdl);
  if (VAR_3) {
   FUNC_4(VAR_1, "Could not tear down IRQ,"
       " %d\n", VAR_3);
   return (VAR_3);
  }
 }

 FUNC_0(VAR_1, VAR_0, VAR_2->res);

 FUNC_6(&VAR_2->base);

 return (0);
}
