
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int flags; int fw_state; scalar_t__ sc_busy_timer; scalar_t__ sc_state_timer; scalar_t__ sc_tx_timer; int rxq; int * txq; int cmdq; int sc_rftimer; int sc_wdtimer; scalar_t__ sc_blinking; int sc_ledtimer; scalar_t__ sc_softled; scalar_t__ sc_running; } ;


 int FUNC_0 (struct iwi_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwi_softc*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iwi_softc*,int *) ;
 int FUNC_4 (struct iwi_softc*,int *) ;
 int FUNC_5 (struct iwi_softc*,int *) ;
 int FUNC_6 (struct iwi_softc*) ;
 int FUNC_7 (struct iwi_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
 struct iwi_softc *VAR_6 = VAR_5;

 FUNC_1(VAR_6);

 VAR_6->sc_running = 0;

 if (VAR_6->sc_softled) {
  FUNC_2(&VAR_6->sc_ledtimer);
  VAR_6->sc_blinking = 0;
 }
 FUNC_2(&VAR_6->sc_wdtimer);
 FUNC_2(&VAR_6->sc_rftimer);

 FUNC_6(VAR_6);

 FUNC_0(VAR_6, VAR_0, VAR_4);


 FUNC_3(VAR_6, &VAR_6->cmdq);
 FUNC_5(VAR_6, &VAR_6->txq[0]);
 FUNC_5(VAR_6, &VAR_6->txq[1]);
 FUNC_5(VAR_6, &VAR_6->txq[2]);
 FUNC_5(VAR_6, &VAR_6->txq[3]);
 FUNC_4(VAR_6, &VAR_6->rxq);

 VAR_6->sc_tx_timer = 0;
 VAR_6->sc_state_timer = 0;
 VAR_6->sc_busy_timer = 0;
 VAR_6->flags &= ~(VAR_2 | VAR_1);
 VAR_6->fw_state = VAR_3;
 FUNC_7(VAR_6);
}
