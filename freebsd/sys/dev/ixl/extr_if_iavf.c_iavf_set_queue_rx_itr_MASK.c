
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {scalar_t__ bytes; scalar_t__ itr; int me; } ;
struct ixl_vsi {scalar_t__ rx_itr_setting; struct i40e_hw* hw; } ;
struct ixl_rx_queue {struct rx_ring rxr; struct ixl_vsi* vsi; } ;
struct i40e_hw {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i40e_hw*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct ixl_rx_queue *VAR_1)
{
 struct ixl_vsi *VAR_2 = VAR_1->vsi;
 struct i40e_hw *VAR_3 = VAR_2->hw;
 struct rx_ring *VAR_4 = &VAR_1->rxr;


 if (VAR_4->bytes == 0)
  return;


 if (VAR_4->itr != VAR_2->rx_itr_setting) {
  VAR_4->itr = VAR_2->rx_itr_setting;
  FUNC_1(VAR_3, FUNC_0(VAR_0,
      VAR_1->rxr.me), VAR_4->itr);
 }
}
