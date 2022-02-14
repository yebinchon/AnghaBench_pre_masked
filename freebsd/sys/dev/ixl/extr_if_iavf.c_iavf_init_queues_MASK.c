
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {int tail; int mbuf_sz; } ;
struct ixl_vsi {int num_tx_queues; int num_rx_queues; int hw; int ctx; struct ixl_rx_queue* rx_queues; struct ixl_tx_queue* tx_queues; } ;
struct ixl_tx_queue {int dummy; } ;
struct ixl_rx_queue {struct rx_ring rxr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ixl_vsi*,struct ixl_tx_queue*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ixl_vsi *VAR_0)
{
 struct ixl_tx_queue *VAR_1 = VAR_0->tx_queues;
 struct ixl_rx_queue *VAR_2 = VAR_0->rx_queues;
 struct rx_ring *VAR_3;

 for (int VAR_4 = 0; VAR_4 < VAR_0->num_tx_queues; VAR_4++, VAR_1++)
  FUNC_1(VAR_0, VAR_1);

 for (int VAR_5 = 0; VAR_5 < VAR_0->num_rx_queues; VAR_5++, VAR_2++) {
  VAR_3 = &VAR_2->rxr;

  VAR_3->mbuf_sz = FUNC_0(VAR_0->ctx);

  FUNC_2(VAR_0->hw, VAR_3->tail, 0);
 }
}
