
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct task_struct* td_lkpi_task; } ;
struct task_struct {void* task_data; int * task_fn; } ;
typedef int linux_task_fn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;

struct task_struct *
FUNC_6(struct thread *VAR_2, linux_task_fn_t *VAR_3, void *VAR_4)
{
 struct task_struct *VAR_5;

 FUNC_1(VAR_2);

 VAR_5 = VAR_2->td_lkpi_task;
 VAR_5->task_fn = VAR_3;
 VAR_5->task_data = VAR_4;

 FUNC_4(VAR_2);

 FUNC_3(VAR_2, FUNC_0(VAR_1));

 FUNC_2(VAR_2, VAR_0);
 FUNC_5(VAR_2);

 return (VAR_5);
}
