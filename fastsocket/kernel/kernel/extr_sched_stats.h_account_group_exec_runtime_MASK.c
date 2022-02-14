
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long sum_exec_runtime; } ;
struct thread_group_cputimer {int lock; TYPE_1__ cputime; int running; } ;
struct task_struct {struct signal_struct* signal; } ;
struct signal_struct {struct thread_group_cputimer cputimer; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(struct task_struct *VAR_0,
           unsigned long long VAR_1)
{
 struct thread_group_cputimer *VAR_2;
 struct signal_struct *VAR_3;

 VAR_3 = VAR_0->signal;

 FUNC_0();
 if (FUNC_3(!VAR_3))
  return;

 VAR_2 = &VAR_3->cputimer;

 if (!VAR_2->running)
  return;

 FUNC_1(&VAR_2->lock);
 VAR_2->cputime.sum_exec_runtime += VAR_1;
 FUNC_2(&VAR_2->lock);
}
