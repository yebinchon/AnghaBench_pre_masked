
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct td_sched {int ts_flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct thread*,int ) ;
 int VAR_1 ;
 struct thread* VAR_2 ;
 int FUNC_2 () ;
 struct td_sched* FUNC_3 (struct thread*) ;

void
FUNC_4(struct thread *VAR_3)
{
 struct td_sched *VAR_4;

 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_3 == VAR_2, ("sched_unbind: can only bind curthread"));
 VAR_4 = FUNC_3(VAR_3);
 if ((VAR_4->ts_flags & VAR_1) == 0)
  return;
 VAR_4->ts_flags &= ~VAR_1;
 FUNC_2();
}
