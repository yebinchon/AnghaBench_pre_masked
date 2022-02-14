
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

__attribute__((used)) static bool FUNC_3(struct task_struct *VAR_0)
{
 return FUNC_1(VAR_0) ||
  (FUNC_2(VAR_0) && FUNC_0(VAR_0));
}
