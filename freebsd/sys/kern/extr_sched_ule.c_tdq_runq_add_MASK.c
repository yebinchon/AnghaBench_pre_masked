
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct thread {int td_priority; } ;
struct tdq {int tdq_idx; int tdq_ridx; int tdq_idle; int tdq_timeshare; int tdq_realtime; int tdq_transferable; } ;
struct td_sched {int * ts_runq; int ts_flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct tdq*,int ) ;
 int FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int ) ;
 int VAR_7 ;
 int FUNC_5 (int *,struct thread*,int) ;
 int FUNC_6 (int *,struct thread*,int,int) ;
 struct td_sched* FUNC_7 (struct thread*) ;

__attribute__((used)) static __inline void
FUNC_8(struct tdq *VAR_8, struct thread *VAR_9, int VAR_10)
{
 struct td_sched *VAR_11;
 u_char VAR_12;

 FUNC_1(VAR_8, VAR_0);
 FUNC_4(VAR_9, VAR_0);

 VAR_12 = VAR_9->td_priority;
 VAR_11 = FUNC_7(VAR_9);
 FUNC_2(VAR_9);
 if (FUNC_3(VAR_9)) {
  VAR_8->tdq_transferable++;
  VAR_11->ts_flags |= VAR_7;
 }
 if (VAR_12 < VAR_3) {
  VAR_11->ts_runq = &VAR_8->tdq_realtime;
 } else if (VAR_12 <= VAR_2) {
  VAR_11->ts_runq = &VAR_8->tdq_timeshare;
  FUNC_0(VAR_12 <= VAR_2 && VAR_12 >= VAR_3,
   ("Invalid priority %d on timeshare runq", VAR_12));




  if ((VAR_10 & (VAR_5|VAR_6)) == 0) {
   VAR_12 = VAR_4 * (VAR_12 - VAR_3) / VAR_1;
   VAR_12 = (VAR_12 + VAR_8->tdq_idx) % VAR_4;





   if (VAR_8->tdq_ridx != VAR_8->tdq_idx &&
       VAR_12 == VAR_8->tdq_ridx)
    VAR_12 = (unsigned char)(VAR_12 - 1) % VAR_4;
  } else
   VAR_12 = VAR_8->tdq_ridx;
  FUNC_6(VAR_11->ts_runq, VAR_9, VAR_12, VAR_10);
  return;
 } else
  VAR_11->ts_runq = &VAR_8->tdq_idle;
 FUNC_5(VAR_11->ts_runq, VAR_9, VAR_10);
}
