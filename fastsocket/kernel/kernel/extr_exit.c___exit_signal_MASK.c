
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sum_exec_runtime; } ;
struct task_struct {int * sighand; struct signal_struct* signal; int pending; TYPE_1__ se; int ioac; scalar_t__ nivcsw; scalar_t__ nvcsw; scalar_t__ maj_flt; scalar_t__ min_flt; int gtime; int stime; int utime; } ;
struct signal_struct {scalar_t__ notify_count; int shared_pending; int sum_sched_runtime; int ioac; int oublock; int inblock; int nivcsw; int nvcsw; int maj_flt; int min_flt; void* gtime; void* stime; void* utime; struct task_struct* curr_target; scalar_t__ group_exit_task; int count; } ;
struct sighand_struct {int siglock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sighand_struct*) ;
 int FUNC_2 (struct signal_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct task_struct*,int ) ;
 void* FUNC_7 (void*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct task_struct*) ;
 struct task_struct* FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*) ;
 int FUNC_12 (struct task_struct*) ;
 struct sighand_struct* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 scalar_t__ FUNC_17 (struct task_struct*) ;
 scalar_t__ FUNC_18 (struct task_struct*) ;
 int FUNC_19 (struct task_struct*) ;
 int FUNC_20 (struct signal_struct*) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (scalar_t__) ;

__attribute__((used)) static void FUNC_23(struct task_struct *VAR_1)
{
 struct signal_struct *VAR_2 = VAR_1->signal;
 struct sighand_struct *VAR_3;

 FUNC_0(!VAR_2);
 FUNC_0(!FUNC_5(&VAR_2->count));

 VAR_3 = FUNC_13(VAR_1->sighand);
 FUNC_14(&VAR_3->siglock);

 FUNC_11(VAR_1);
 if (FUNC_4(&VAR_2->count))
  FUNC_12(VAR_1);
 else {





  if (FUNC_21(FUNC_9(VAR_1)))
   FUNC_12(VAR_1);





  if (VAR_2->group_exit_task && FUNC_5(&VAR_2->count) == VAR_2->notify_count)
   FUNC_22(VAR_2->group_exit_task);

  if (VAR_1 == VAR_2->curr_target)
   VAR_2->curr_target = FUNC_10(VAR_1);
  VAR_2->utime = FUNC_7(VAR_2->utime, VAR_1->utime);
  VAR_2->stime = FUNC_7(VAR_2->stime, VAR_1->stime);
  VAR_2->gtime = FUNC_7(VAR_2->gtime, VAR_1->gtime);
  VAR_2->min_flt += VAR_1->min_flt;
  VAR_2->maj_flt += VAR_1->maj_flt;
  VAR_2->nvcsw += VAR_1->nvcsw;
  VAR_2->nivcsw += VAR_1->nivcsw;
  VAR_2->inblock += FUNC_17(VAR_1);
  VAR_2->oublock += FUNC_18(VAR_1);
  FUNC_16(&VAR_2->ioac, &VAR_1->ioac);
  VAR_2->sum_sched_runtime += VAR_1->se.sum_exec_runtime;
  VAR_2 = ((void*)0);
 }

 FUNC_3(VAR_1);





 FUNC_8(&VAR_1->pending);

 VAR_1->signal = ((void*)0);
 VAR_1->sighand = ((void*)0);
 FUNC_15(&VAR_3->siglock);

 FUNC_1(VAR_3);
 FUNC_6(VAR_1,VAR_0);
 if (VAR_2) {
  FUNC_8(&VAR_2->shared_pending);
  FUNC_20(VAR_2);




  FUNC_19(VAR_1);
  FUNC_2(VAR_2);
 }
}
