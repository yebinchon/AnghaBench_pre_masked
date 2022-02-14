
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sum_exec_runtime; } ;
struct task_struct {struct signal_struct* signal; int cputime_expires; TYPE_1__ se; int stime; int utime; int exit_state; } ;
struct task_cputime {int sum_exec_runtime; int stime; int utime; } ;
struct signal_struct {TYPE_2__* rlim; int cputime_expires; } ;
struct TYPE_4__ {scalar_t__ rlim_cur; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct task_cputime*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*,struct task_cputime*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(struct task_struct *VAR_2)
{
 struct signal_struct *VAR_3;


 if (FUNC_3(VAR_2->exit_state))
  return 0;

 if (!FUNC_1(&VAR_2->cputime_expires)) {
  struct task_cputime VAR_4 = {
   .utime = VAR_2->utime,
   .stime = VAR_2->stime,
   .sum_exec_runtime = VAR_2->se.sum_exec_runtime
  };

  if (FUNC_0(&VAR_4, &VAR_2->cputime_expires))
   return 1;
 }

 VAR_3 = VAR_2->signal;
 if (!FUNC_1(&VAR_3->cputime_expires)) {
  struct task_cputime VAR_5;

  FUNC_2(VAR_2, &VAR_5);
  if (FUNC_0(&VAR_5, &VAR_3->cputime_expires))
   return 1;
 }

 return VAR_3->rlim[VAR_0].rlim_cur != VAR_1;
}
