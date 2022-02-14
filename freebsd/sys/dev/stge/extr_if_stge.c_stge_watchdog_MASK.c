
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stge_softc {scalar_t__ sc_watchdog_timer; struct ifnet* sc_ifp; } ;
struct ifnet {int if_snd; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct stge_softc*) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,char*) ;
 int FUNC_4 (struct stge_softc*) ;
 int FUNC_5 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_6(struct stge_softc *VAR_2)
{
 struct ifnet *VAR_3;

 FUNC_1(VAR_2);

 if (VAR_2->sc_watchdog_timer == 0 || --VAR_2->sc_watchdog_timer)
  return;

 VAR_3 = VAR_2->sc_ifp;
 FUNC_3(VAR_2->sc_ifp, "device timeout\n");
 FUNC_2(VAR_3, VAR_0, 1);
 VAR_3->if_drv_flags &= ~VAR_1;
 FUNC_4(VAR_2);
 if (!FUNC_0(&VAR_3->if_snd))
  FUNC_5(VAR_3);
}
