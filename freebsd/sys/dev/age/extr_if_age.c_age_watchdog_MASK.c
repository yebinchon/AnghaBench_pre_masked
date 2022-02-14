
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_snd; int if_drv_flags; } ;
struct TYPE_2__ {scalar_t__ age_tx_cnt; } ;
struct age_softc {scalar_t__ age_watchdog_timer; int age_flags; struct ifnet* age_ifp; TYPE_1__ age_cdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct age_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct age_softc*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct ifnet*,char*) ;

__attribute__((used)) static void
FUNC_6(struct age_softc *VAR_3)
{
 struct ifnet *VAR_4;

 FUNC_0(VAR_3);

 if (VAR_3->age_watchdog_timer == 0 || --VAR_3->age_watchdog_timer)
  return;

 VAR_4 = VAR_3->age_ifp;
 if ((VAR_3->age_flags & VAR_0) == 0) {
  FUNC_5(VAR_3->age_ifp, "watchdog timeout (missed link)\n");
  FUNC_4(VAR_4, VAR_1, 1);
  VAR_4->if_drv_flags &= ~VAR_2;
  FUNC_2(VAR_3);
  return;
 }
 if (VAR_3->age_cdata.age_tx_cnt == 0) {
  FUNC_5(VAR_3->age_ifp,
      "watchdog timeout (missed Tx interrupts) -- recovering\n");
  if (!FUNC_1(&VAR_4->if_snd))
   FUNC_3(VAR_4);
  return;
 }
 FUNC_5(VAR_3->age_ifp, "watchdog timeout\n");
 FUNC_4(VAR_4, VAR_1, 1);
 VAR_4->if_drv_flags &= ~VAR_2;
 FUNC_2(VAR_3);
 if (!FUNC_1(&VAR_4->if_snd))
  FUNC_3(VAR_4);
}
