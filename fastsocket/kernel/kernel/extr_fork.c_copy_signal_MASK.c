
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {struct signal_struct* signal; } ;
struct TYPE_7__ {int function; } ;
struct TYPE_5__ {scalar_t__ tv64; } ;
struct signal_struct {int oom_score_adj_min; int oom_score_adj; int oom_adj; int threadgroup_fork_lock; int pacct; int rlim; scalar_t__ sum_sched_runtime; int ioac; scalar_t__ cmaxrss; scalar_t__ maxrss; scalar_t__ coublock; scalar_t__ cinblock; scalar_t__ oublock; scalar_t__ inblock; scalar_t__ cmaj_flt; scalar_t__ cmin_flt; scalar_t__ maj_flt; scalar_t__ min_flt; scalar_t__ cnivcsw; scalar_t__ cnvcsw; scalar_t__ nivcsw; scalar_t__ nvcsw; void* prev_stime; void* prev_utime; void* cgtime; void* gtime; void* cstime; void* cutime; void* stime; void* utime; int * tty; int * tty_old_pgrp; scalar_t__ leader; TYPE_3__ real_timer; TYPE_1__ it_real_incr; int posix_timers; int shared_pending; struct task_struct* curr_target; scalar_t__ group_stop_count; int * group_exit_task; scalar_t__ group_exit_code; scalar_t__ flags; int wait_chldexit; int live; int count; } ;
struct TYPE_8__ {TYPE_2__* signal; int group_leader; } ;
struct TYPE_6__ {int oom_score_adj_min; int oom_score_adj; int oom_adj; int rlim; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 void* VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 struct signal_struct* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct signal_struct*) ;
 int FUNC_10 (struct signal_struct*) ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct signal_struct*) ;
 int FUNC_15 (struct signal_struct*) ;

__attribute__((used)) static int FUNC_16(unsigned long VAR_9, struct task_struct *VAR_10)
{
 struct signal_struct *VAR_11;

 if (VAR_9 & VAR_1)
  return 0;

 VAR_11 = FUNC_7(VAR_8, VAR_3);
 VAR_10->signal = VAR_11;
 if (!VAR_11)
  return -VAR_2;

 FUNC_2(&VAR_11->count, 1);
 FUNC_2(&VAR_11->live, 1);
 FUNC_6(&VAR_11->wait_chldexit);
 VAR_11->flags = 0;
 VAR_11->group_exit_code = 0;
 VAR_11->group_exit_task = ((void*)0);
 VAR_11->group_stop_count = 0;
 VAR_11->curr_target = VAR_10;
 FUNC_5(&VAR_11->shared_pending);
 FUNC_0(&VAR_11->posix_timers);

 FUNC_3(&VAR_11->real_timer, VAR_0, VAR_4);
 VAR_11->it_real_incr.tv64 = 0;
 VAR_11->real_timer.function = VAR_7;

 VAR_11->leader = 0;
 VAR_11->tty_old_pgrp = ((void*)0);
 VAR_11->tty = ((void*)0);

 VAR_11->utime = VAR_11->stime = VAR_11->cutime = VAR_11->cstime = VAR_5;
 VAR_11->gtime = VAR_5;
 VAR_11->cgtime = VAR_5;
 VAR_11->prev_utime = VAR_11->prev_stime = VAR_5;
 VAR_11->nvcsw = VAR_11->nivcsw = VAR_11->cnvcsw = VAR_11->cnivcsw = 0;
 VAR_11->min_flt = VAR_11->maj_flt = VAR_11->cmin_flt = VAR_11->cmaj_flt = 0;
 VAR_11->inblock = VAR_11->oublock = VAR_11->cinblock = VAR_11->coublock = 0;
 VAR_11->maxrss = VAR_11->cmaxrss = 0;
 FUNC_11(&VAR_11->ioac);
 VAR_11->sum_sched_runtime = 0;
 FUNC_14(VAR_11);

 FUNC_12(VAR_6->group_leader);
 FUNC_8(VAR_11->rlim, VAR_6->signal->rlim, sizeof VAR_11->rlim);
 FUNC_13(VAR_6->group_leader);

 FUNC_9(VAR_11);

 FUNC_1(&VAR_11->pacct);

 FUNC_15(VAR_11);
 FUNC_10(VAR_11);





 VAR_11->oom_adj = VAR_6->signal->oom_adj;
 VAR_11->oom_score_adj = VAR_6->signal->oom_score_adj;
 VAR_11->oom_score_adj_min = VAR_6->signal->oom_score_adj_min;

 return 0;
}
