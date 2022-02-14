
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wi_softc {int sc_portnum; int sc_flags; scalar_t__ sc_false_syns; scalar_t__ sc_tx_timer; int sc_watchdog; scalar_t__ sc_enabled; scalar_t__ wi_gone; } ;


 int FUNC_0 (struct wi_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct wi_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wi_softc*,int,int ,int ,int ) ;

void
FUNC_4(struct wi_softc *VAR_3, int VAR_4)
{

 FUNC_1(VAR_3);

 if (VAR_3->sc_enabled && !VAR_3->wi_gone) {
  FUNC_0(VAR_3, VAR_2, 0);
  FUNC_3(VAR_3, VAR_0 | VAR_3->sc_portnum, 0, 0, 0);
  if (VAR_4)
   VAR_3->sc_enabled = 0;
 } else if (VAR_3->wi_gone && VAR_4)
  VAR_3->sc_enabled = 0;

 FUNC_2(&VAR_3->sc_watchdog);
 VAR_3->sc_tx_timer = 0;
 VAR_3->sc_false_syns = 0;

 VAR_3->sc_flags &= ~VAR_1;
}
