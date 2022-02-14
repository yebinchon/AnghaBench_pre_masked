
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int parked; int kthread_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*) ;

int
FUNC_3(struct task_struct *VAR_1)
{

 FUNC_0(VAR_0, &VAR_1->kthread_flags);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->parked);
 return (0);
}
