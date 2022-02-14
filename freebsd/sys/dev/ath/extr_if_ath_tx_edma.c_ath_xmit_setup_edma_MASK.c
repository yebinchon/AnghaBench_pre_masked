
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xmit_drain; int xmit_handoff; int xmit_dma_restart; int xmit_attach_comp_func; int xmit_teardown; int xmit_setup; } ;
struct ath_softc {TYPE_1__ sc_tx; int sc_tx_nmaps; int sc_dev; int sc_tx_statuslen; int sc_tx_desclen; int sc_ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,char*,int ) ;

void
FUNC_4(struct ath_softc *VAR_7)
{


 (void) FUNC_1(VAR_7->sc_ah, &VAR_7->sc_tx_desclen);
 (void) FUNC_2(VAR_7->sc_ah, &VAR_7->sc_tx_statuslen);
 (void) FUNC_0(VAR_7->sc_ah, &VAR_7->sc_tx_nmaps);

 if (VAR_6) {
  FUNC_3(VAR_7->sc_dev, "TX descriptor length: %d\n",
      VAR_7->sc_tx_desclen);
  FUNC_3(VAR_7->sc_dev, "TX status length: %d\n",
      VAR_7->sc_tx_statuslen);
  FUNC_3(VAR_7->sc_dev, "TX buffers per descriptor: %d\n",
      VAR_7->sc_tx_nmaps);
 }

 VAR_7->sc_tx.xmit_setup = VAR_2;
 VAR_7->sc_tx.xmit_teardown = VAR_3;
 VAR_7->sc_tx.xmit_attach_comp_func = VAR_0;

 VAR_7->sc_tx.xmit_dma_restart = VAR_1;
 VAR_7->sc_tx.xmit_handoff = VAR_5;
 VAR_7->sc_tx.xmit_drain = VAR_4;
}
