
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int usage; int exit_state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct task_struct* VAR_0 ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;

void FUNC_6(struct task_struct *VAR_1)
{
 FUNC_0(!VAR_1->exit_state);
 FUNC_0(FUNC_1(&VAR_1->usage));
 FUNC_0(VAR_1 == VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 if (!FUNC_5(VAR_1))
  FUNC_4(VAR_1);
}
