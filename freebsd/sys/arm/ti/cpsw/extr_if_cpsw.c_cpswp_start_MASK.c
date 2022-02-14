
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifnet {int if_drv_flags; struct cpswp_softc* if_softc; } ;
struct cpswp_softc {TYPE_2__* swsc; } ;
struct TYPE_5__ {scalar_t__ running; } ;
struct TYPE_6__ {TYPE_1__ tx; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct cpswp_softc*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_1)
{
 struct cpswp_softc *VAR_2;

 VAR_2 = VAR_1->if_softc;
 if ((VAR_1->if_drv_flags & VAR_0) == 0 ||
     VAR_2->swsc->tx.running == 0) {
  return;
 }
 FUNC_0(VAR_2->swsc);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2->swsc);
 FUNC_1(VAR_2->swsc);
}
