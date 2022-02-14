
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_cputime {int dummy; } ;
struct thread_group_cputimer {int running; int lock; struct task_cputime cputime; } ;
struct task_struct {TYPE_1__* signal; } ;
struct TYPE_2__ {struct thread_group_cputimer cputimer; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct task_struct*,struct task_cputime*) ;
 int FUNC_3 (struct task_cputime*,struct task_cputime*) ;

void FUNC_4(struct task_struct *VAR_0, struct task_cputime *VAR_1)
{
 struct thread_group_cputimer *VAR_2 = &VAR_0->signal->cputimer;
 struct task_cputime VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_2->lock, VAR_4);
 if (!VAR_2->running) {
  VAR_2->running = 1;






  FUNC_2(VAR_0, &VAR_3);
  FUNC_3(&VAR_2->cputime, &VAR_3);
 }
 *VAR_1 = VAR_2->cputime;
 FUNC_1(&VAR_2->lock, VAR_4);
}
