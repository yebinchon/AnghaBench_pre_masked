
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct tx_ring {int tail; } ;
struct ix_tx_queue {struct tx_ring txr; } ;
struct adapter {int hw; struct ix_tx_queue* tx_queues; } ;
typedef int qidx_t ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, uint16_t VAR_1, qidx_t VAR_2)
{
 struct adapter *VAR_3 = VAR_0;
 struct ix_tx_queue *VAR_4 = &VAR_3->tx_queues[VAR_1];
 struct tx_ring *VAR_5 = &VAR_4->txr;

 FUNC_0(&VAR_3->hw, VAR_5->tail, VAR_2);
}
