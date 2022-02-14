
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ jme_tx_cnt; } ;
struct jme_softc {scalar_t__ jme_watchdog_timer; int jme_flags; struct ifnet* jme_ifp; TYPE_1__ jme_cdata; } ;
struct ifnet {int if_snd; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct jme_softc*) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,char*) ;
 int FUNC_4 (struct jme_softc*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct jme_softc*) ;

__attribute__((used)) static void
FUNC_7(struct jme_softc *VAR_3)
{
 struct ifnet *VAR_4;

 FUNC_1(VAR_3);

 if (VAR_3->jme_watchdog_timer == 0 || --VAR_3->jme_watchdog_timer)
  return;

 VAR_4 = VAR_3->jme_ifp;
 if ((VAR_3->jme_flags & VAR_2) == 0) {
  FUNC_3(VAR_3->jme_ifp, "watchdog timeout (missed link)\n");
  FUNC_2(VAR_4, VAR_0, 1);
  VAR_4->if_drv_flags &= ~VAR_1;
  FUNC_4(VAR_3);
  return;
 }
 FUNC_6(VAR_3);
 if (VAR_3->jme_cdata.jme_tx_cnt == 0) {
  FUNC_3(VAR_3->jme_ifp,
      "watchdog timeout (missed Tx interrupts) -- recovering\n");
  if (!FUNC_0(&VAR_4->if_snd))
   FUNC_5(VAR_4);
  return;
 }

 FUNC_3(VAR_3->jme_ifp, "watchdog timeout\n");
 FUNC_2(VAR_4, VAR_0, 1);
 VAR_4->if_drv_flags &= ~VAR_1;
 FUNC_4(VAR_3);
 if (!FUNC_0(&VAR_4->if_snd))
  FUNC_5(VAR_4);
}
