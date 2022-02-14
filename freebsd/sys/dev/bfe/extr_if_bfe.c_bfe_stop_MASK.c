
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct bfe_softc {scalar_t__ bfe_watchdog_timer; int bfe_stat_co; int bfe_flags; struct ifnet* bfe_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfe_softc*) ;
 int FUNC_2 (struct bfe_softc*) ;
 int FUNC_3 (struct bfe_softc*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bfe_softc *VAR_3)
{
 struct ifnet *VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = VAR_3->bfe_ifp;
 VAR_4->if_drv_flags &= ~(VAR_2 | VAR_1);
 VAR_3->bfe_flags &= ~VAR_0;
 FUNC_4(&VAR_3->bfe_stat_co);
 VAR_3->bfe_watchdog_timer = 0;

 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3);
}
