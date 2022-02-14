
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct tdq {int tdq_ridx; int tdq_idx; int tdq_timeshare; int tdq_transferable; } ;
struct td_sched {int ts_flags; int * ts_runq; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct tdq*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct thread*) ;
 int FUNC_3 (int *,struct thread*,int *) ;
 struct td_sched* FUNC_4 (struct thread*) ;

__attribute__((used)) static __inline void
FUNC_5(struct tdq *VAR_2, struct thread *VAR_3)
{
 struct td_sched *VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_4->ts_runq != ((void*)0),
     ("tdq_runq_remove: thread %p null ts_runq", VAR_3));
 if (VAR_4->ts_flags & VAR_1) {
  VAR_2->tdq_transferable--;
  VAR_4->ts_flags &= ~VAR_1;
 }
 if (VAR_4->ts_runq == &VAR_2->tdq_timeshare) {
  if (VAR_2->tdq_idx != VAR_2->tdq_ridx)
   FUNC_3(VAR_4->ts_runq, VAR_3, &VAR_2->tdq_ridx);
  else
   FUNC_3(VAR_4->ts_runq, VAR_3, ((void*)0));
 } else
  FUNC_2(VAR_4->ts_runq, VAR_3);
}
