
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_configure_switching_comp_ets_bw_limit_data {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (struct i40e_hw*,int ,void*,int,int ,struct i40e_asq_cmd_details*) ;
 int VAR_0 ;

enum i40e_status_code FUNC_1(
 struct i40e_hw *VAR_1, u16 VAR_2,
 struct i40e_aqc_configure_switching_comp_ets_bw_limit_data *VAR_3,
 struct i40e_asq_cmd_details *VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, (void *)VAR_3, sizeof(*VAR_3),
       VAR_0,
       VAR_4);
}
