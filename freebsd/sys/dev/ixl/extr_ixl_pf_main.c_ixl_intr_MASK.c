
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixl_vsi {int ctx; struct ixl_rx_queue* rx_queues; } ;
struct ixl_rx_queue {int irqs; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {scalar_t__ msix; struct ixl_vsi vsi; struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ,int) ;

int
FUNC_5(void *VAR_10)
{
 struct ixl_pf *VAR_11 = VAR_10;
 struct i40e_hw *VAR_12 = &VAR_11->hw;
 struct ixl_vsi *VAR_13 = &VAR_11->vsi;
 struct ixl_rx_queue *VAR_14 = VAR_13->rx_queues;
        u32 VAR_15;


 ++VAR_14->irqs;
 VAR_15 = FUNC_3(VAR_12, VAR_5);
 if (VAR_15 & VAR_6)
  FUNC_0(VAR_13->ctx);


 FUNC_2(VAR_12);

 if (VAR_15 & VAR_7)
  return (VAR_1);
 else
  return (VAR_0);
}
