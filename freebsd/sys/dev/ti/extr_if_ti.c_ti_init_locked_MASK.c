
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_softc {int ti_dev; TYPE_1__* ti_ifp; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ti_softc*) ;
 int FUNC_2 (struct ti_softc*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct ti_softc *VAR_2 = VAR_1;

 if (VAR_2->ti_ifp->if_drv_flags & VAR_0)
  return;


 FUNC_2(VAR_2);


 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2->ti_dev, "initialization failure\n");
  return;
 }
}
