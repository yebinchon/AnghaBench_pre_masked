
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixl_vsi {int num_rx_queues; TYPE_1__* shared; struct ixl_rx_queue* rx_queues; struct i40e_hw* hw; } ;
struct ixl_rx_queue {scalar_t__ msix; } ;
struct ixl_pf {struct ixl_vsi vsi; } ;
struct i40e_hw {int dummy; } ;
typedef int if_ctx_t ;
struct TYPE_2__ {scalar_t__ isc_intr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ixl_pf* FUNC_0 (int ) ;
 int FUNC_1 (struct i40e_hw*,scalar_t__) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_2)
{
 struct ixl_pf *VAR_3 = FUNC_0(VAR_2);
 struct ixl_vsi *VAR_4 = &VAR_3->vsi;
 struct i40e_hw *VAR_5 = VAR_4->hw;
 struct ixl_rx_queue *VAR_6 = VAR_4->rx_queues;

 if (VAR_4->shared->isc_intr == VAR_1) {
  for (int VAR_7 = 0; VAR_7 < VAR_4->num_rx_queues; VAR_7++, VAR_6++)
   FUNC_1(VAR_5, VAR_6->msix - 1);
 } else {


  FUNC_2(VAR_5, VAR_0, 0x7FF);
 }
}
