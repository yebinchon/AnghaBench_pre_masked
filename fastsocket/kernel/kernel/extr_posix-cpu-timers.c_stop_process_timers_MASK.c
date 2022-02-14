
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_group_cputimer {int lock; scalar_t__ running; } ;
struct task_struct {TYPE_1__* signal; } ;
struct TYPE_2__ {struct thread_group_cputimer cputimer; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0)
{
 struct thread_group_cputimer *VAR_1 = &VAR_0->signal->cputimer;
 unsigned long VAR_2;

 if (!VAR_1->running)
  return;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_1->running = 0;
 FUNC_1(&VAR_1->lock, VAR_2);
}
