
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* cgroups; int cg_list; } ;
struct TYPE_2__ {int tasks; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct task_struct *VAR_2)
{
 if (VAR_1) {
  FUNC_4(&VAR_0);
  FUNC_2(VAR_2);
  if (FUNC_1(&VAR_2->cg_list))
   FUNC_0(&VAR_2->cg_list, &VAR_2->cgroups->tasks);
  FUNC_3(VAR_2);
  FUNC_5(&VAR_0);
 }
}
