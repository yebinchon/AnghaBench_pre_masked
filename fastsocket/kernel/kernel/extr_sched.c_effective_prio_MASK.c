
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int normal_prio; int prio; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_0)
{
 VAR_0->normal_prio = FUNC_0(VAR_0);





 if (!FUNC_1(VAR_0->prio))
  return VAR_0->normal_prio;
 return VAR_0->prio;
}
