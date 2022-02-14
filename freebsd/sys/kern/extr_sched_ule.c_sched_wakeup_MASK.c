
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_slptick; int td_flags; } ;
struct td_sched {int ts_slptime; scalar_t__ ts_slice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thread*,int ) ;
 int FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct td_sched*,int ) ;
 struct td_sched* FUNC_4 (struct thread*) ;
 int VAR_4 ;

void
FUNC_5(struct thread *VAR_5)
{
 struct td_sched *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5, VAR_0);
 VAR_6 = FUNC_4(VAR_5);
 VAR_5->td_flags &= ~VAR_3;




 VAR_7 = VAR_5->td_slptick;
 VAR_5->td_slptick = 0;
 if (VAR_7 && VAR_7 != VAR_4) {
  VAR_6->ts_slptime += (VAR_4 - VAR_7) << VAR_1;
  FUNC_2(VAR_5);
  FUNC_3(VAR_6, 0);
 }



 VAR_6->ts_slice = 0;
 FUNC_1(VAR_5, VAR_2);
}
