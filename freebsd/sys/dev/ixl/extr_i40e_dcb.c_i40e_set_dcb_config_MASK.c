
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_virt_mem {scalar_t__ va; } ;
struct i40e_dcbx_config {scalar_t__ app_mode; } ;
struct i40e_hw {struct i40e_dcbx_config local_dcbx_config; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i40e_hw*,struct i40e_virt_mem*,int ) ;
 int FUNC_1 (struct i40e_hw*,int,void*,int ,int *) ;
 int FUNC_2 (int*,int *,struct i40e_dcbx_config*) ;
 int FUNC_3 (struct i40e_hw*,struct i40e_virt_mem*) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_6)
{
 enum i40e_status_code VAR_7 = VAR_2;
 struct i40e_dcbx_config *VAR_8;
 struct i40e_virt_mem VAR_9;
 u8 VAR_10, *VAR_11;
 u16 VAR_12;


 VAR_8 = &VAR_6->local_dcbx_config;

 VAR_7 = FUNC_0(VAR_6, &VAR_9, VAR_1);
 if (VAR_7)
  return VAR_7;

 VAR_10 = VAR_3;
 if (VAR_8->app_mode == VAR_0) {
  VAR_10 |= VAR_4 <<
       VAR_5;
 }
 VAR_11 = (u8 *)VAR_9.va;
 VAR_7 = FUNC_2(VAR_11, &VAR_12, VAR_8);
 VAR_7 = FUNC_1(VAR_6, VAR_10, (void *)VAR_11, VAR_12, ((void*)0));

 FUNC_3(VAR_6, &VAR_9);
 return VAR_7;
}
