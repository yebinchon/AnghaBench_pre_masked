
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int stime; } ;
struct thread_group_cputimer {int lock; TYPE_2__ cputime; int running; } ;
struct task_struct {TYPE_1__* signal; int exit_state; } ;
typedef int cputime_t ;
struct TYPE_3__ {struct thread_group_cputimer cputimer; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct task_struct *VAR_0,
          cputime_t VAR_1)
{
 struct thread_group_cputimer *VAR_2;


 if (FUNC_3(VAR_0->exit_state))
  return;

 VAR_2 = &VAR_0->signal->cputimer;

 if (!VAR_2->running)
  return;

 FUNC_1(&VAR_2->lock);
 VAR_2->cputime.stime =
  FUNC_0(VAR_2->cputime.stime, VAR_1);
 FUNC_2(&VAR_2->lock);
}
