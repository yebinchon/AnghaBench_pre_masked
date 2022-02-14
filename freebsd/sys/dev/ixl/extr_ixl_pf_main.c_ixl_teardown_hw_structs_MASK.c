
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hmc_obj; } ;
struct i40e_hw {TYPE_1__ hmc; } ;
struct ixl_pf {int qtag; int qmgr; int dev; struct i40e_hw hw; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int device_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*,int) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (int *,int *) ;

int
FUNC_6(struct ixl_pf *VAR_0)
{
 enum i40e_status_code VAR_1 = 0;
 struct i40e_hw *VAR_2 = &VAR_0->hw;
 device_t VAR_3 = VAR_0->dev;


 if (VAR_2->hmc.hmc_obj) {
  VAR_1 = FUNC_2(VAR_2);
  if (VAR_1) {
   FUNC_0(VAR_3,
       "init: LAN HMC shutdown failure; status %s\n",
       FUNC_3(VAR_2, VAR_1));
   goto err_out;
  }
 }


 FUNC_4(VAR_2);
 VAR_1 = FUNC_1(VAR_2);
 if (VAR_1)
  FUNC_0(VAR_3,
      "init: Admin Queue shutdown failure; status %s\n",
      FUNC_3(VAR_2, VAR_1));

 FUNC_5(&VAR_0->qmgr, &VAR_0->qtag);
err_out:
 return (VAR_1);
}
