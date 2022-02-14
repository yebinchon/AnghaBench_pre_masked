
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixl_vsi {int media; } ;
struct TYPE_2__ {scalar_t__ hmc_obj; } ;
struct i40e_hw {TYPE_1__ hmc; } ;
struct ixl_pf {int qmgr; scalar_t__ iw_enabled; int dev; struct i40e_hw hw; struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct i40e_hw*,int) ;
 struct ixl_pf* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct i40e_hw*) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (struct ixl_vsi*) ;
 int FUNC_9 (struct ixl_pf*) ;
 int FUNC_10 (struct ixl_pf*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(if_ctx_t VAR_2)
{
 struct ixl_pf *VAR_3 = FUNC_5(VAR_2);
 struct ixl_vsi *VAR_4 = &VAR_3->vsi;
 struct i40e_hw *VAR_5 = &VAR_3->hw;
 device_t VAR_6 = VAR_3->dev;
 enum i40e_status_code VAR_7;




 FUNC_0(VAR_6, "begin");
 FUNC_6(VAR_4->media);


 if (VAR_5->hmc.hmc_obj) {
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7)
   FUNC_1(VAR_6,
       "i40e_shutdown_lan_hmc() failed with status %s\n",
       FUNC_4(VAR_5, VAR_7));
 }


 FUNC_7(VAR_5);
 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  FUNC_1(VAR_6,
      "i40e_shutdown_adminq() failed with status %s\n",
      FUNC_4(VAR_5, VAR_7));

 FUNC_11(&VAR_3->qmgr);
 FUNC_9(VAR_3);
 FUNC_8(VAR_4);
 FUNC_0(VAR_6, "end");
 return (0);
}
