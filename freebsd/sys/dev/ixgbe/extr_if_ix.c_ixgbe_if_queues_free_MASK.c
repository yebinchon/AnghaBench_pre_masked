
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {struct ix_tx_queue* tx_rsq; } ;
struct ix_tx_queue {struct tx_ring txr; } ;
struct ix_rx_queue {struct tx_ring txr; } ;
struct adapter {int num_tx_queues; struct ix_tx_queue* rx_queues; struct ix_tx_queue* tx_queues; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (struct ix_tx_queue*,int ) ;
 struct adapter* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_1)
{
 struct adapter *VAR_2 = FUNC_1(VAR_1);
 struct ix_tx_queue *VAR_3 = VAR_2->tx_queues;
 struct ix_rx_queue *VAR_4 = VAR_2->rx_queues;
 int VAR_5;

 if (VAR_3 != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_2->num_tx_queues; VAR_5++, VAR_3++) {
   struct tx_ring *VAR_6 = &VAR_3->txr;
   if (VAR_6->tx_rsq == ((void*)0))
    break;

   FUNC_0(VAR_6->tx_rsq, VAR_0);
   VAR_6->tx_rsq = ((void*)0);
  }

  FUNC_0(VAR_2->tx_queues, VAR_0);
  VAR_2->tx_queues = ((void*)0);
 }
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_2->rx_queues, VAR_0);
  VAR_2->rx_queues = ((void*)0);
 }
}
