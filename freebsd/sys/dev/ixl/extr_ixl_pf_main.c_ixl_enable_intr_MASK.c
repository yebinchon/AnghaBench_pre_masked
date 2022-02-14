
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixl_vsi {int num_rx_queues; TYPE_1__* shared; struct ixl_rx_queue* rx_queues; struct i40e_hw* hw; } ;
struct TYPE_4__ {int me; } ;
struct ixl_rx_queue {TYPE_2__ rxr; } ;
struct i40e_hw {int dummy; } ;
struct TYPE_3__ {scalar_t__ isc_intr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct i40e_hw*,int ) ;

void
FUNC_2(struct ixl_vsi *VAR_1)
{
 struct i40e_hw *VAR_2 = VAR_1->hw;
 struct ixl_rx_queue *VAR_3 = VAR_1->rx_queues;

 if (VAR_1->shared->isc_intr == VAR_0) {
  for (int VAR_4 = 0; VAR_4 < VAR_1->num_rx_queues; VAR_4++, VAR_3++)
   FUNC_1(VAR_2, VAR_3->rxr.me);
 } else
  FUNC_0(VAR_2);
}
