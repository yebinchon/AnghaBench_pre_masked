
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_pri_class; int td_flags; } ;
struct TYPE_2__ {int * rq_queues; } ;
struct tdq {int tdq_idx; int tdq_ridx; TYPE_1__ tdq_timeshare; int tdq_load; int tdq_switchcnt; int tdq_oldswitchcnt; } ;
struct td_sched {scalar_t__ ts_slice; int ts_runtime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 struct tdq* FUNC_2 () ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int ) ;
 struct tdq* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (struct td_sched*,int) ;
 int FUNC_8 (struct thread*) ;
 scalar_t__ VAR_9 ;
 struct td_sched* FUNC_9 (struct thread*) ;
 scalar_t__ FUNC_10 (struct tdq*) ;
 scalar_t__ VAR_10 ;

void
FUNC_11(struct thread *VAR_11)
{
 struct tdq *VAR_12;
 struct td_sched *VAR_13;

 FUNC_4(VAR_11, VAR_0);
 VAR_12 = FUNC_2();
 VAR_12->tdq_oldswitchcnt = VAR_12->tdq_switchcnt;
 VAR_12->tdq_switchcnt = VAR_12->tdq_load;




 if (VAR_12->tdq_idx == VAR_12->tdq_ridx) {
  VAR_12->tdq_idx = (VAR_12->tdq_idx + 1) % VAR_3;
  if (FUNC_1(&VAR_12->tdq_timeshare.rq_queues[VAR_12->tdq_ridx]))
   VAR_12->tdq_ridx = VAR_12->tdq_idx;
 }
 VAR_13 = FUNC_9(VAR_11);
 FUNC_7(VAR_13, 1);
 if (VAR_11->td_pri_class & VAR_1)
  return;
 if (FUNC_0(VAR_11->td_pri_class) == VAR_2) {




  FUNC_9(VAR_11)->ts_runtime += VAR_10;
  FUNC_6(VAR_11);
  FUNC_8(VAR_11);
 }





 if (!FUNC_3(VAR_11) && ++VAR_13->ts_slice >= FUNC_10(VAR_12)) {
  VAR_13->ts_slice = 0;
  VAR_11->td_flags |= VAR_4 | VAR_5;
 }
}
