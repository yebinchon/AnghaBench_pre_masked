
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sum_exec_runtime; } ;
struct task_struct {TYPE_1__ se; int stime; int utime; struct signal_struct* signal; int sighand; } ;
struct task_cputime {int sum_exec_runtime; void* stime; void* utime; } ;
struct signal_struct {scalar_t__ sum_sched_runtime; int stime; int utime; } ;
struct sighand_struct {int dummy; } ;


 struct task_cputime VAR_0 ;
 void* FUNC_0 (void*,int ) ;
 struct task_struct* FUNC_1 (struct task_struct*) ;
 struct sighand_struct* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct task_struct *VAR_1, struct task_cputime *VAR_2)
{
 struct sighand_struct *VAR_3;
 struct signal_struct *VAR_4;
 struct task_struct *VAR_5;

 *VAR_2 = VAR_0;

 FUNC_3();
 VAR_3 = FUNC_2(VAR_1->sighand);
 if (!VAR_3)
  goto out;

 VAR_4 = VAR_1->signal;

 VAR_5 = VAR_1;
 do {
  VAR_2->utime = FUNC_0(VAR_2->utime, VAR_5->utime);
  VAR_2->stime = FUNC_0(VAR_2->stime, VAR_5->stime);
  VAR_2->sum_exec_runtime += VAR_5->se.sum_exec_runtime;

  VAR_5 = FUNC_1(VAR_5);
 } while (VAR_5 != VAR_1);

 VAR_2->utime = FUNC_0(VAR_2->utime, VAR_4->utime);
 VAR_2->stime = FUNC_0(VAR_2->stime, VAR_4->stime);
 VAR_2->sum_exec_runtime += VAR_4->sum_sched_runtime;
out:
 FUNC_4();
}
