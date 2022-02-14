
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_slptick; int td_flags; } ;
struct td_sched {int ts_slptime; int ts_slice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ) ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 int VAR_3 ;
 struct td_sched* FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;

void
FUNC_5(struct thread *VAR_4)
{
 struct td_sched *VAR_5;

 FUNC_0(VAR_4, VAR_0);
 VAR_5 = FUNC_3(VAR_4);
 VAR_4->td_flags &= ~VAR_2;
 if (VAR_5->ts_slptime > 1) {
  FUNC_4(VAR_4);
  FUNC_1(VAR_4);
 }
 VAR_4->td_slptick = 0;
 VAR_5->ts_slptime = 0;
 VAR_5->ts_slice = VAR_3;
 FUNC_2(VAR_4, VAR_1);
}
