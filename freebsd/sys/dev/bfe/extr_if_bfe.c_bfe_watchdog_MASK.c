
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_snd; int if_drv_flags; } ;
struct bfe_softc {scalar_t__ bfe_watchdog_timer; int bfe_dev; struct ifnet* bfe_ifp; } ;


 int FUNC_0 (struct bfe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bfe_softc*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfe_softc *VAR_2)
{
 struct ifnet *VAR_3;

 FUNC_0(VAR_2);

 if (VAR_2->bfe_watchdog_timer == 0 || --VAR_2->bfe_watchdog_timer)
  return;

 VAR_3 = VAR_2->bfe_ifp;

 FUNC_4(VAR_2->bfe_dev, "watchdog timeout -- resetting\n");

 FUNC_5(VAR_3, VAR_0, 1);
 VAR_3->if_drv_flags &= ~VAR_1;
 FUNC_2(VAR_2);

 if (!FUNC_1(&VAR_3->if_snd))
  FUNC_3(VAR_3);
}
