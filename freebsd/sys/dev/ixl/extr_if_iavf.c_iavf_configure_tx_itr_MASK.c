
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {int latency; int itr; } ;
struct ixl_vsi {int num_tx_queues; int tx_itr_setting; struct ixl_tx_queue* tx_queues; } ;
struct ixl_tx_queue {struct tx_ring txr; } ;
struct i40e_hw {int dummy; } ;
struct iavf_sc {int tx_itr; struct ixl_vsi vsi; struct i40e_hw hw; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct iavf_sc *VAR_2)
{
 struct i40e_hw *VAR_3 = &VAR_2->hw;
 struct ixl_vsi *VAR_4 = &VAR_2->vsi;
 struct ixl_tx_queue *VAR_5 = VAR_4->tx_queues;

 VAR_4->tx_itr_setting = VAR_2->tx_itr;

 for (int VAR_6 = 0; VAR_6 < VAR_4->num_tx_queues; VAR_6++, VAR_5++) {
  struct tx_ring *VAR_7 = &VAR_5->txr;

  FUNC_1(VAR_3, FUNC_0(VAR_1, VAR_6),
      VAR_4->tx_itr_setting);
  VAR_7->itr = VAR_4->tx_itr_setting;
  VAR_7->latency = VAR_0;
 }
}
