
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mempolicy; } ;
typedef int nodemask_t ;
typedef enum mpol_rebind_step { ____Placeholder_mpol_rebind_step } mpol_rebind_step ;


 int FUNC_0 (int ,int const*,int) ;

void FUNC_1(struct task_struct *VAR_0, const nodemask_t *VAR_1,
   enum mpol_rebind_step VAR_2)
{
 FUNC_0(VAR_0->mempolicy, VAR_1, VAR_2);
}
