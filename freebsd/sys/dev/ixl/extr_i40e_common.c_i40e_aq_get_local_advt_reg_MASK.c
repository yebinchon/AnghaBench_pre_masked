
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_an_advt_reg {int local_an_reg0; int local_an_reg1; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_2,
    u64 *VAR_3,
    struct i40e_asq_cmd_details *VAR_4)
{
 struct i40e_aq_desc VAR_5;
 struct i40e_aqc_an_advt_reg *VAR_6 =
  (struct i40e_aqc_an_advt_reg *)&VAR_5.params.raw;
 enum i40e_status_code VAR_7;

 FUNC_3(&VAR_5,
       VAR_1);

 VAR_7 = FUNC_2(VAR_2, &VAR_5, ((void*)0), 0, VAR_4);

 if (VAR_7 != VAR_0)
  goto aq_get_local_advt_reg_exit;

 *VAR_3 = (u64)(FUNC_0(VAR_6->local_an_reg1)) << 32;
 *VAR_3 |= FUNC_1(VAR_6->local_an_reg0);

aq_get_local_advt_reg_exit:
 return VAR_7;
}
