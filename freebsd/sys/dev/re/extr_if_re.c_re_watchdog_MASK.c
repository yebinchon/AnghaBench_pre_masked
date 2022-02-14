
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rl_tx_free; scalar_t__ rl_tx_desc_cnt; } ;
struct rl_softc {scalar_t__ rl_watchdog_timer; TYPE_1__ rl_ldata; struct ifnet* rl_ifp; } ;
struct ifnet {int if_snd; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rl_softc*) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,char*) ;
 int FUNC_4 (struct rl_softc*) ;
 int FUNC_5 (struct rl_softc*,int *) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct rl_softc*) ;

__attribute__((used)) static void
FUNC_8(struct rl_softc *VAR_2)
{
 struct ifnet *VAR_3;

 FUNC_1(VAR_2);

 if (VAR_2->rl_watchdog_timer == 0 || --VAR_2->rl_watchdog_timer != 0)
  return;

 VAR_3 = VAR_2->rl_ifp;
 FUNC_7(VAR_2);
 if (VAR_2->rl_ldata.rl_tx_free == VAR_2->rl_ldata.rl_tx_desc_cnt) {
  FUNC_3(VAR_3, "watchdog timeout (missed Tx interrupts) "
      "-- recovering\n");
  if (!FUNC_0(&VAR_3->if_snd))
   FUNC_6(VAR_3);
  return;
 }

 FUNC_3(VAR_3, "watchdog timeout\n");
 FUNC_2(VAR_3, VAR_0, 1);

 FUNC_5(VAR_2, ((void*)0));
 VAR_3->if_drv_flags &= ~VAR_1;
 FUNC_4(VAR_2);
 if (!FUNC_0(&VAR_3->if_snd))
  FUNC_6(VAR_3);
}
