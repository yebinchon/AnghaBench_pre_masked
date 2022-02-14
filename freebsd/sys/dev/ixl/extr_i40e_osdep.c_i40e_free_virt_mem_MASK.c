
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_virt_mem {int * va; } ;
struct i40e_hw {int dummy; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

i40e_status
FUNC_1(struct i40e_hw *VAR_1, struct i40e_virt_mem *VAR_2)
{
 FUNC_0(VAR_2->va, VAR_0);
 VAR_2->va = ((void*)0);

 return(0);
}
