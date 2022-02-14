
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xmit_drain; int xmit_handoff; int xmit_dma_restart; int xmit_attach_comp_func; int xmit_teardown; int xmit_setup; } ;
struct ath_softc {int sc_tx_desclen; int sc_tx_statuslen; int sc_tx_nmaps; TYPE_1__ sc_tx; } ;
struct ath_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_0(struct ath_softc *VAR_6)
{




 VAR_6->sc_tx_desclen = sizeof(struct ath_desc);
 VAR_6->sc_tx_statuslen = sizeof(struct ath_desc);
 VAR_6->sc_tx_nmaps = 1;

 VAR_6->sc_tx.xmit_setup = VAR_1;
 VAR_6->sc_tx.xmit_teardown = VAR_2;
 VAR_6->sc_tx.xmit_attach_comp_func = VAR_0;

 VAR_6->sc_tx.xmit_dma_restart = VAR_3;
 VAR_6->sc_tx.xmit_handoff = VAR_5;

 VAR_6->sc_tx.xmit_drain = VAR_4;
}
