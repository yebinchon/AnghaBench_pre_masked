
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int task_ret; int exited; int kthread_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*) ;

int
FUNC_5(struct task_struct *VAR_1)
{
 int VAR_2;





 FUNC_0(VAR_0, &VAR_1->kthread_flags);
 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(&VAR_1->exited);




 VAR_2 = VAR_1->task_ret;
 FUNC_2(VAR_1);

 return (VAR_2);
}
