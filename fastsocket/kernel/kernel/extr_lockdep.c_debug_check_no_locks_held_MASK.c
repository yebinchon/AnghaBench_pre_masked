
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ lockdep_depth; } ;


 int FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct task_struct *VAR_0)
{
 if (FUNC_1(VAR_0->lockdep_depth > 0))
  FUNC_0(VAR_0);
}
