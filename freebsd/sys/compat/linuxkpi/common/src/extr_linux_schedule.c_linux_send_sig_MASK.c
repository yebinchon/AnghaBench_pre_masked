
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct task_struct {struct thread* task_thread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct thread*,int) ;

void
FUNC_3(int VAR_0, struct task_struct *VAR_1)
{
 struct thread *VAR_2;

 VAR_2 = VAR_1->task_thread;
 FUNC_0(VAR_2->td_proc);
 FUNC_2(VAR_2, VAR_0);
 FUNC_1(VAR_2->td_proc);
}
