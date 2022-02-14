
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixl_vsi {int num_tx_queues; int num_rx_queues; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct ixl_vsi vsi; struct i40e_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int) ;

void
FUNC_6(struct ixl_pf *VAR_19)
{
 struct i40e_hw *VAR_20 = &VAR_19->hw;
 struct ixl_vsi *VAR_21 = &VAR_19->vsi;
 u32 VAR_22;
 u16 VAR_23 = 1;


 for (int VAR_24 = 0; VAR_24 < FUNC_4(VAR_21->num_rx_queues, VAR_21->num_tx_queues); VAR_24++, VAR_23++) {

  FUNC_5(VAR_20, FUNC_0(VAR_24), 0);


  VAR_22 = ((VAR_24 << VAR_1)
          & VAR_0) |
      ((VAR_14 << VAR_3)
          & VAR_2);
  FUNC_5(VAR_20, FUNC_1(VAR_24), VAR_22);

  VAR_22 = VAR_4 |
  (VAR_17 << VAR_5) |
  (VAR_23 << VAR_6) |
  (VAR_24 << VAR_7) |
  (VAR_15 << VAR_8);
  FUNC_5(VAR_20, FUNC_2(VAR_24), VAR_22);

  VAR_22 = VAR_9 |
  (VAR_18 << VAR_10) |
  (VAR_23 << VAR_11) |
  (VAR_16 << VAR_12) |
  (VAR_14 << VAR_13);
  FUNC_5(VAR_20, FUNC_3(VAR_24), VAR_22);
 }
}
