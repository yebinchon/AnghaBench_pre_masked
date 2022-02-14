
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int running; } ;
struct TYPE_6__ {void* prof_exp; scalar_t__ sched_exp; void* virt_exp; } ;
struct signal_struct {int * cpu_timers; TYPE_4__ cputimer; TYPE_3__* rlim; TYPE_2__ cputime_expires; TYPE_1__* it; } ;
struct TYPE_7__ {scalar_t__ rlim_cur; } ;
struct TYPE_5__ {void* incr; void* expires; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct signal_struct*) ;

__attribute__((used)) static void FUNC_3(struct signal_struct *VAR_5)
{

 FUNC_2(VAR_5);


 VAR_5->it[VAR_0].expires = VAR_4;
 VAR_5->it[VAR_0].incr = VAR_4;
 VAR_5->it[VAR_1].expires = VAR_4;
 VAR_5->it[VAR_1].incr = VAR_4;


 VAR_5->cputime_expires.prof_exp = VAR_4;
 VAR_5->cputime_expires.virt_exp = VAR_4;
 VAR_5->cputime_expires.sched_exp = 0;

 if (VAR_5->rlim[VAR_2].rlim_cur != VAR_3) {
  VAR_5->cputime_expires.prof_exp =
   FUNC_1(VAR_5->rlim[VAR_2].rlim_cur);
  VAR_5->cputimer.running = 1;
 }


 FUNC_0(&VAR_5->cpu_timers[0]);
 FUNC_0(&VAR_5->cpu_timers[1]);
 FUNC_0(&VAR_5->cpu_timers[2]);
}
