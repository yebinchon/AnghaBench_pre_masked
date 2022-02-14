
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dr_policy; } ;
struct thread {int td_base_pri; int td_priority; TYPE_2__* td_cpuset; TYPE_1__ td_domain; int td_lock; void* td_lastcpu; void* td_oncpu; } ;
struct tdq {int dummy; } ;
struct td_sched {int ts_name; scalar_t__ ts_slice; int ts_runtime; int ts_slptime; int ts_ftick; int ts_ltick; int ts_ticks; scalar_t__ ts_flags; int ts_cpu; } ;
struct TYPE_5__ {int cs_domain; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct tdq*) ;
 struct tdq* FUNC_1 () ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (int ,int) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 struct td_sched* FUNC_5 (struct thread*) ;
 scalar_t__ FUNC_6 (struct tdq*) ;

void
FUNC_7(struct thread *VAR_3, struct thread *VAR_4)
{
 struct td_sched *VAR_5;
 struct td_sched *VAR_6;
 struct tdq *VAR_7;

 VAR_7 = FUNC_1();
 FUNC_2(VAR_3, VAR_0);



 VAR_5 = FUNC_5(VAR_3);
 VAR_6 = FUNC_5(VAR_4);
 VAR_4->td_oncpu = VAR_1;
 VAR_4->td_lastcpu = VAR_1;
 VAR_4->td_lock = FUNC_0(VAR_7);
 VAR_4->td_cpuset = FUNC_4(VAR_3->td_cpuset);
 VAR_4->td_domain.dr_policy = VAR_3->td_cpuset->cs_domain;
 VAR_6->ts_cpu = VAR_5->ts_cpu;
 VAR_6->ts_flags = 0;



 VAR_6->ts_ticks = VAR_5->ts_ticks;
 VAR_6->ts_ltick = VAR_5->ts_ltick;
 VAR_6->ts_ftick = VAR_5->ts_ftick;



 VAR_4->td_priority = VAR_4->td_base_pri;



 VAR_6->ts_slptime = VAR_5->ts_slptime;
 VAR_6->ts_runtime = VAR_5->ts_runtime;

 VAR_6->ts_slice = FUNC_6(VAR_7) - VAR_2;



}
