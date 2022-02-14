
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_tx_edma_fifo {int m_fifo; } ;
struct ath_softc {struct ath_tx_edma_fifo* sc_txedma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ath_softc *VAR_1, int VAR_2)
{
 struct ath_tx_edma_fifo *VAR_3 = &VAR_1->sc_txedma[VAR_2];


 FUNC_0(VAR_3->m_fifo, VAR_0);
 return (0);
}
