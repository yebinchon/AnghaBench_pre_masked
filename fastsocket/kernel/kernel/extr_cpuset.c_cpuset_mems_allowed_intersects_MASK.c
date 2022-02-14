
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mems_allowed; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(const struct task_struct *VAR_0,
       const struct task_struct *VAR_1)
{
 return FUNC_0(VAR_0->mems_allowed, VAR_1->mems_allowed);
}
