
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_get_wake_reason_completion {int wake_reason; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_2,
    u16 *VAR_3,
    struct i40e_asq_cmd_details *VAR_4)
{
 struct i40e_aq_desc VAR_5;
 struct i40e_aqc_get_wake_reason_completion *VAR_6 =
  (struct i40e_aqc_get_wake_reason_completion *)&VAR_5.params.raw;
 enum i40e_status_code VAR_7;

 FUNC_2(&VAR_5, VAR_1);

 VAR_7 = FUNC_1(VAR_2, &VAR_5, ((void*)0), 0, VAR_4);

 if (VAR_7 == VAR_0)
  *VAR_3 = FUNC_0(VAR_6->wake_reason);

 return VAR_7;
}
