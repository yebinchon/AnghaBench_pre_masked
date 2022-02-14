
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int media; } ;
struct i40e_hw {int dummy; } ;
struct iavf_sc {int vf_res; struct i40e_hw hw; int dev; struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct i40e_hw*,int) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (struct iavf_sc*) ;
 int FUNC_7 (struct iavf_sc*) ;
 struct iavf_sc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(if_ctx_t VAR_2)
{
 struct iavf_sc *VAR_3 = FUNC_8(VAR_2);
 struct ixl_vsi *VAR_4 = &VAR_3->vsi;
 struct i40e_hw *VAR_5 = &VAR_3->hw;
 device_t VAR_6 = VAR_3->dev;
 enum i40e_status_code VAR_7;

 FUNC_0(VAR_6, "begin");


 FUNC_9(VAR_4->media);

 FUNC_5(VAR_5);
 VAR_7 = FUNC_3(&VAR_3->hw);
 if (VAR_7 != VAR_0) {
  FUNC_1(VAR_6,
      "i40e_shutdown_adminq() failed with status %s\n",
      FUNC_4(VAR_5, VAR_7));
 }

 FUNC_2(VAR_3->vf_res, VAR_1);
 FUNC_7(VAR_3);
 FUNC_6(VAR_3);

 FUNC_0(VAR_6, "end");
 return (0);
}
