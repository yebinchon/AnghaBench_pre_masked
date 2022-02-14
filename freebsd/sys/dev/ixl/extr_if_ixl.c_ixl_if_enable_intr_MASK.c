
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixl_vsi {int num_rx_queues; struct ixl_rx_queue* rx_queues; struct i40e_hw* hw; } ;
struct TYPE_2__ {int me; } ;
struct ixl_rx_queue {TYPE_1__ rxr; } ;
struct ixl_pf {struct ixl_vsi vsi; } ;
struct i40e_hw {int dummy; } ;
typedef int if_ctx_t ;


 struct ixl_pf* FUNC_0 (int ) ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*,int ) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_0)
{
 struct ixl_pf *VAR_1 = FUNC_0(VAR_0);
 struct ixl_vsi *VAR_2 = &VAR_1->vsi;
 struct i40e_hw *VAR_3 = VAR_2->hw;
 struct ixl_rx_queue *VAR_4 = VAR_2->rx_queues;

 FUNC_1(VAR_3);

 for (int VAR_5 = 0; VAR_5 < VAR_2->num_rx_queues; VAR_5++, VAR_4++)

  FUNC_2(VAR_3, VAR_4->rxr.me);
}
