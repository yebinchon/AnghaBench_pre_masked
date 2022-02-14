
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct em_tx_queue {int eims; } ;
struct adapter {int hw; struct em_tx_queue* tx_queues; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct adapter* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_1, uint16_t VAR_2)
{
 struct adapter *VAR_3 = FUNC_1(VAR_1);
 struct em_tx_queue *VAR_4 = &VAR_3->tx_queues[VAR_2];

 FUNC_0(&VAR_3->hw, VAR_0, VAR_4->eims);
 return (0);
}
