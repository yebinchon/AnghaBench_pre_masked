
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_virt_mem {scalar_t__ va; } ;
struct i40e_hw {int dummy; } ;
struct i40e_dcbx_config {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*,struct i40e_virt_mem*,int ) ;
 int FUNC_1 (struct i40e_hw*,int ,int ,void*,int ,int *,int *,int *) ;
 int FUNC_2 (struct i40e_hw*,struct i40e_virt_mem*) ;
 int FUNC_3 (int *,struct i40e_dcbx_config*) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_2, u8 VAR_3,
       u8 VAR_4,
       struct i40e_dcbx_config *VAR_5)
{
 enum i40e_status_code VAR_6 = VAR_1;
 struct i40e_virt_mem VAR_7;
 u8 *VAR_8;


 VAR_6 = FUNC_0(VAR_2, &VAR_7, VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_8 = (u8 *)VAR_7.va;
 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_3,
       (void *)VAR_8, VAR_0,
       ((void*)0), ((void*)0), ((void*)0));
 if (VAR_6)
  goto free_mem;


 VAR_6 = FUNC_3(VAR_8, VAR_5);

free_mem:
 FUNC_2(VAR_2, &VAR_7);
 return VAR_6;
}
