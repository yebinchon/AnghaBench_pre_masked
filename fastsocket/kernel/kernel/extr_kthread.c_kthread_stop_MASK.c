
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int exit_code; int * vfork_done; } ;
struct kthread {int should_stop; int exited; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 struct kthread* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct task_struct*) ;

int FUNC_8(struct task_struct *VAR_0)
{
 struct kthread *VAR_1;
 int VAR_2;

 FUNC_4(VAR_0);
 FUNC_1(VAR_0);

 VAR_1 = FUNC_3(VAR_0);
 FUNC_0();
 if (VAR_0->vfork_done != ((void*)0)) {
  VAR_1->should_stop = 1;
  FUNC_7(VAR_0);
  FUNC_6(&VAR_1->exited);
 }
 VAR_2 = VAR_0->exit_code;

 FUNC_2(VAR_0);
 FUNC_5(VAR_2);

 return VAR_2;
}
