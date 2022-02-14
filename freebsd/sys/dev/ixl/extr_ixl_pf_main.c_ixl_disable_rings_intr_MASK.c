
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixl_vsi {int num_rx_queues; struct ixl_rx_queue* rx_queues; struct i40e_hw* hw; } ;
struct TYPE_2__ {int me; } ;
struct ixl_rx_queue {TYPE_1__ rxr; } ;
struct i40e_hw {int dummy; } ;


 int FUNC_0 (struct i40e_hw*,int ) ;

void
FUNC_1(struct ixl_vsi *VAR_0)
{
 struct i40e_hw *VAR_1 = VAR_0->hw;
 struct ixl_rx_queue *VAR_2 = VAR_0->rx_queues;

 for (int VAR_3 = 0; VAR_3 < VAR_0->num_rx_queues; VAR_3++, VAR_2++)
  FUNC_0(VAR_1, VAR_2->rxr.me);
}
