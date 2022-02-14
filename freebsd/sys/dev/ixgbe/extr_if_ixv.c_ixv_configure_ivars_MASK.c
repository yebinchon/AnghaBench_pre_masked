
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix_rx_queue {int msix; } ;
struct adapter {scalar_t__ num_rx_queues; scalar_t__ num_tx_queues; int vector; int hw; struct ix_rx_queue* rx_queues; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct adapter*,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct adapter *VAR_1)
{
 struct ix_rx_queue *VAR_2 = VAR_1->rx_queues;

 FUNC_2(VAR_1->num_rx_queues == VAR_1->num_tx_queues);

 for (int VAR_3 = 0; VAR_3 < VAR_1->num_rx_queues; VAR_3++, VAR_2++) {

  FUNC_3(VAR_1, VAR_3, VAR_2->msix, 0);

  FUNC_3(VAR_1, VAR_3, VAR_2->msix, 1);

  FUNC_1(&VAR_1->hw, FUNC_0(VAR_2->msix),
      VAR_0);
 }


 FUNC_3(VAR_1, 1, VAR_1->vector, -1);
}
