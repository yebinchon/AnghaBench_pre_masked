
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_ring {int me; } ;
struct rx_ring {int me; } ;
struct ix_tx_queue {int msix; struct tx_ring txr; } ;
struct ix_rx_queue {int msix; struct rx_ring rxr; } ;
struct adapter {int num_rx_queues; int num_tx_queues; int vector; int hw; scalar_t__ dmac; struct ix_tx_queue* tx_queues; struct ix_rx_queue* rx_queues; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct adapter*,int,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_1)
{
 struct ix_rx_queue *VAR_2 = VAR_1->rx_queues;
 struct ix_tx_queue *VAR_3 = VAR_1->tx_queues;
 u32 VAR_4;

 if (VAR_0 > 0)
  VAR_4 = (4000000 / VAR_0) & 0x0FF8;
 else {




  VAR_1->dmac = 0;
  VAR_4 = 0;
 }

 for (int VAR_5 = 0; VAR_5 < VAR_1->num_rx_queues; VAR_5++, VAR_2++) {
  struct rx_ring *VAR_6 = &VAR_2->rxr;


  FUNC_2(VAR_1, VAR_6->me, VAR_2->msix, 0);


  FUNC_1(&VAR_1->hw, FUNC_0(VAR_2->msix), VAR_4);
 }
 for (int VAR_7 = 0; VAR_7 < VAR_1->num_tx_queues; VAR_7++, VAR_3++) {
  struct tx_ring *VAR_8 = &VAR_3->txr;


  FUNC_2(VAR_1, VAR_8->me, VAR_3->msix, 1);
 }

 FUNC_2(VAR_1, 1, VAR_1->vector, -1);
}
