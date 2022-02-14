
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_virt_mem {int * va; } ;
struct i40e_hw {int dummy; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int) ;

i40e_status
FUNC_1(struct i40e_hw *VAR_3, struct i40e_virt_mem *VAR_4, u32 VAR_5)
{
 VAR_4->va = FUNC_0(VAR_5, VAR_0, VAR_1 | VAR_2);
 return(VAR_4->va == ((void*)0));
}
