
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sum_exec_runtime; } ;
struct TYPE_7__ {int sched_exp; } ;
struct TYPE_6__ {unsigned long timeout; } ;
struct task_struct {TYPE_3__ se; TYPE_2__ cputime_expires; TYPE_1__ rt; TYPE_4__* signal; } ;
struct rq {int dummy; } ;
struct TYPE_10__ {unsigned long rlim_cur; unsigned long rlim_max; } ;
struct TYPE_9__ {TYPE_5__* rlim; } ;


 unsigned long FUNC_0 (int ,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct rq *VAR_4, struct task_struct *VAR_5)
{
 unsigned long VAR_6, VAR_7;

 if (!VAR_5->signal)
  return;

 VAR_6 = VAR_5->signal->rlim[VAR_1].rlim_cur;
 VAR_7 = VAR_5->signal->rlim[VAR_1].rlim_max;

 if (VAR_6 != VAR_2) {
  unsigned long VAR_8;

  VAR_5->rt.timeout++;
  VAR_8 = FUNC_0(FUNC_1(VAR_6, VAR_7), VAR_3/VAR_0);
  if (VAR_5->rt.timeout > VAR_8)
   VAR_5->cputime_expires.sched_exp = VAR_5->se.sum_exec_runtime;
 }
}
