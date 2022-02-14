
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; int sc_ic; int last_physt; int cur_bcnq_id; scalar_t__ thcal_temp; scalar_t__ fwver; scalar_t__ sc_tx_timer; int sc_watchdog_to; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtwn_softc*) ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rtwn_softc*) ;
 int FUNC_6 (struct rtwn_softc*) ;
 int FUNC_7 (struct rtwn_softc*) ;
 int FUNC_8 (struct rtwn_softc*,int *) ;

__attribute__((used)) static void
FUNC_9(struct rtwn_softc *VAR_5)
{

 FUNC_0(VAR_5);
 if (!(VAR_5->sc_flags & VAR_2)) {
  FUNC_1(VAR_5);
  return;
 }


 FUNC_3(&VAR_5->sc_watchdog_to);
 VAR_5->sc_tx_timer = 0;

 VAR_5->sc_flags &= ~(VAR_2 | VAR_1 | VAR_0);
 VAR_5->sc_flags &= ~VAR_3;
 VAR_5->fwver = 0;
 VAR_5->thcal_temp = 0;
 VAR_5->cur_bcnq_id = VAR_4;
 FUNC_2(&VAR_5->last_physt, sizeof(VAR_5->last_physt));





 FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 FUNC_7(VAR_5);
 FUNC_8(VAR_5, ((void*)0));
 FUNC_1(VAR_5);
}
