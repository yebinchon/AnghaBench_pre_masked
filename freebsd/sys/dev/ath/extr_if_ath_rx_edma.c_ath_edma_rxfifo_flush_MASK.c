
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_debug; struct ath_rx_edma* sc_rxedma; } ;
struct ath_rx_edma {int m_fifolen; scalar_t__ m_fifo_depth; scalar_t__ m_fifo_tail; scalar_t__ m_fifo_head; int * m_rxpending; struct ath_buf** m_fifo; } ;
struct ath_buf {int dummy; } ;
typedef size_t HAL_RX_QUEUE ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath_softc*,struct ath_buf*) ;
 int FUNC_2 (struct ath_softc*,struct ath_buf*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct ath_softc *VAR_2, HAL_RX_QUEUE VAR_3)
{
 struct ath_rx_edma *VAR_4 = &VAR_2->sc_rxedma[VAR_3];
 int VAR_5;

 FUNC_0(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_4->m_fifolen; VAR_5++) {
  if (VAR_4->m_fifo[VAR_5] != ((void*)0)) {






   FUNC_1(VAR_2, VAR_4->m_fifo[VAR_5]);
   VAR_4->m_fifo[VAR_5] = ((void*)0);
   VAR_4->m_fifo_depth--;
  }
 }

 if (VAR_4->m_rxpending != ((void*)0)) {
  FUNC_3(VAR_4->m_rxpending);
  VAR_4->m_rxpending = ((void*)0);
 }
 VAR_4->m_fifo_head = VAR_4->m_fifo_tail = VAR_4->m_fifo_depth = 0;

 return (0);
}
