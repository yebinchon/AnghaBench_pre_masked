
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int asq_last_status; int fw_maj_ver; int fw_min_ver; } ;
struct TYPE_3__ {int num_rx_qp; int num_tx_qp; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ func_caps; } ;
struct ixl_pf {int msix; int state; int dev; struct i40e_hw hw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct i40e_hw*,int ,int *) ;
 int FUNC_3 (struct i40e_hw*,int ,int *) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (struct i40e_hw*,int ) ;
 int FUNC_7 (struct i40e_hw*) ;
 int FUNC_8 (struct i40e_hw*,int ,int ,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct i40e_hw*) ;
 int FUNC_11 (struct i40e_hw*,int *,int) ;
 int FUNC_12 (struct ixl_pf*) ;
 int FUNC_13 (struct i40e_hw*) ;
 int FUNC_14 (struct ixl_pf*) ;
 int FUNC_15 (struct ixl_pf*) ;
 int FUNC_16 (struct ixl_pf*) ;
 int FUNC_17 (struct i40e_hw*,int ) ;
 int VAR_8 ;
 int FUNC_18 (struct i40e_hw*,int ,int ) ;

int
FUNC_19(struct ixl_pf *VAR_9)
{
 struct i40e_hw *VAR_10 = &VAR_9->hw;
 device_t VAR_11 = VAR_9->dev;
 u32 VAR_12;
 int VAR_13 = 0;


 FUNC_4(VAR_10);
 VAR_13 = FUNC_10(VAR_10);
 if (VAR_13) {
  FUNC_1(VAR_11, "init: PF reset failure\n");
  VAR_13 = VAR_0;
  goto err_out;
 }

 VAR_13 = FUNC_7(VAR_10);
 if (VAR_13) {
  FUNC_1(VAR_11, "init: Admin queue init failure;"
      " status code %d\n", VAR_13);
  VAR_13 = VAR_0;
  goto err_out;
 }

 FUNC_5(VAR_10);
 FUNC_15(VAR_9);


 FUNC_0(&VAR_9->state, VAR_5);
 FUNC_0(&VAR_9->state, VAR_6);

 VAR_12 = FUNC_17(VAR_10, VAR_2);
 VAR_12 |= VAR_4;
 FUNC_18(VAR_10, VAR_2, VAR_12);

 err_out:
  return (VAR_13);
}
