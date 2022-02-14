
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dr_policy; } ;
struct thread {int td_base_pri; int td_priority; TYPE_2__* td_cpuset; TYPE_1__ td_domain; int * td_lock; void* td_lastcpu; void* td_oncpu; } ;
struct td_sched {int ts_flags; int ts_slice; int ts_estcpu; } ;
struct TYPE_5__ {int cs_domain; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct td_sched*,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 struct td_sched* FUNC_2 (struct thread*) ;

void
FUNC_3(struct thread *VAR_3, struct thread *VAR_4)
{
 struct td_sched *VAR_5, *VAR_6;

 VAR_4->td_oncpu = VAR_0;
 VAR_4->td_lastcpu = VAR_0;
 VAR_4->td_lock = &VAR_2;
 VAR_4->td_cpuset = FUNC_1(VAR_3->td_cpuset);
 VAR_4->td_domain.dr_policy = VAR_3->td_cpuset->cs_domain;
 VAR_4->td_priority = VAR_4->td_base_pri;
 VAR_5 = FUNC_2(VAR_4);
 FUNC_0(VAR_5, sizeof(*VAR_5));
 VAR_6 = FUNC_2(VAR_3);
 VAR_5->ts_estcpu = VAR_6->ts_estcpu;
 VAR_5->ts_flags |= (VAR_6->ts_flags & VAR_1);
 VAR_5->ts_slice = 1;
}
