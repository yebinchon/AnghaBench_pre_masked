
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_snd; int if_drv_flags; } ;
struct ale_softc {scalar_t__ ale_watchdog_timer; int ale_flags; struct ifnet* ale_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct ale_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ale_softc*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct ifnet*,char*) ;

__attribute__((used)) static void
FUNC_6(struct ale_softc *VAR_3)
{
 struct ifnet *VAR_4;

 FUNC_0(VAR_3);

 if (VAR_3->ale_watchdog_timer == 0 || --VAR_3->ale_watchdog_timer)
  return;

 VAR_4 = VAR_3->ale_ifp;
 if ((VAR_3->ale_flags & VAR_0) == 0) {
  FUNC_5(VAR_3->ale_ifp, "watchdog timeout (lost link)\n");
  FUNC_4(VAR_4, VAR_1, 1);
  VAR_4->if_drv_flags &= ~VAR_2;
  FUNC_2(VAR_3);
  return;
 }
 FUNC_5(VAR_3->ale_ifp, "watchdog timeout -- resetting\n");
 FUNC_4(VAR_4, VAR_1, 1);
 VAR_4->if_drv_flags &= ~VAR_2;
 FUNC_2(VAR_3);
 if (!FUNC_1(&VAR_4->if_snd))
  FUNC_3(VAR_4);
}
