
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct td_sched {scalar_t__ ts_ticks; } ;
typedef int fixpt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct td_sched*) ;
 int VAR_3 ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct td_sched*,int ) ;
 struct td_sched* FUNC_5 (struct thread*) ;

fixpt_t
FUNC_6(struct thread *VAR_5)
{
 fixpt_t VAR_6;
 struct td_sched *VAR_7;

 VAR_6 = 0;
 VAR_7 = FUNC_5(VAR_5);

 FUNC_2(VAR_5, VAR_2);
 FUNC_4(VAR_7, FUNC_1(VAR_5));
 if (VAR_7->ts_ticks) {
  int VAR_8;


  VAR_8 = FUNC_3(FUNC_0(VAR_7) / VAR_3, VAR_4);
  VAR_6 = (VAR_0 * ((VAR_0 * VAR_8)/VAR_4)) >> VAR_1;
 }

 return (VAR_6);
}
