
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {struct em_tx_queue* tx_rsq; } ;
struct em_tx_queue {struct tx_ring txr; } ;
struct em_rx_queue {struct tx_ring txr; } ;
struct adapter {int tx_num_queues; struct em_tx_queue* mta; struct em_tx_queue* rx_queues; struct em_tx_queue* tx_queues; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct em_tx_queue*,int ) ;
 struct adapter* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_1)
{
 struct adapter *VAR_2 = FUNC_2(VAR_1);
 struct em_tx_queue *VAR_3 = VAR_2->tx_queues;
 struct em_rx_queue *VAR_4 = VAR_2->rx_queues;

 if (VAR_3 != ((void*)0)) {
  for (int VAR_5 = 0; VAR_5 < VAR_2->tx_num_queues; VAR_5++, VAR_3++) {
   struct tx_ring *VAR_6 = &VAR_3->txr;
   if (VAR_6->tx_rsq == ((void*)0))
    break;

   FUNC_1(VAR_6->tx_rsq, VAR_0);
   VAR_6->tx_rsq = ((void*)0);
  }
  FUNC_1(VAR_2->tx_queues, VAR_0);
  VAR_2->tx_queues = ((void*)0);
 }

 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_2->rx_queues, VAR_0);
  VAR_2->rx_queues = ((void*)0);
 }

 FUNC_0(VAR_2);

 if (VAR_2->mta != ((void*)0)) {
  FUNC_1(VAR_2->mta, VAR_0);
 }
}
