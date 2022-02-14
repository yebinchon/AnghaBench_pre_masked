
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct ixl_vsi {struct ixl_tx_queue* tx_queues; struct i40e_hw* hw; } ;
struct ixl_tx_queue {scalar_t__ msix; } ;
struct ixl_pf {struct ixl_vsi vsi; } ;
struct i40e_hw {int dummy; } ;
typedef int if_ctx_t ;


 struct ixl_pf* FUNC_0 (int ) ;
 int FUNC_1 (struct i40e_hw*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_0, uint16_t VAR_1)
{
 struct ixl_pf *VAR_2 = FUNC_0(VAR_0);
 struct ixl_vsi *VAR_3 = &VAR_2->vsi;
 struct i40e_hw *VAR_4 = VAR_3->hw;
 struct ixl_tx_queue *VAR_5 = &VAR_3->tx_queues[VAR_1];

 FUNC_1(VAR_4, VAR_5->msix - 1);
 return (0);
}
