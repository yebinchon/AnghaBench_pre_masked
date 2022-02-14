
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aq_desc {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_1 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_1,
 struct i40e_asq_cmd_details *VAR_2)
{
 struct i40e_aq_desc VAR_3;
 enum i40e_status_code VAR_4;

 FUNC_1(&VAR_3,
       VAR_0);

 VAR_4 = FUNC_0(VAR_1, &VAR_3, ((void*)0), 0, VAR_2);

 return VAR_4;
}
