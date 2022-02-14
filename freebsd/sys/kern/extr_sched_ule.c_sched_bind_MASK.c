
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct td_sched {int ts_flags; int ts_cpu; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct thread* VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct thread*) ;
 struct td_sched* FUNC_7 (struct thread*) ;

void
FUNC_8(struct thread *VAR_6, int VAR_7)
{
 struct td_sched *VAR_8;

 FUNC_3(VAR_6, VAR_1|VAR_0);
 FUNC_0(VAR_6 == VAR_5, ("sched_bind: can only bind curthread"));
 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8->ts_flags & VAR_3)
  FUNC_6(VAR_6);
 FUNC_0(FUNC_2(VAR_6), ("%p must be migratable", VAR_6));
 VAR_8->ts_flags |= VAR_3;
 FUNC_5();
 if (FUNC_1(VAR_4) == VAR_7)
  return;
 VAR_8->ts_cpu = VAR_7;

 FUNC_4(VAR_2, ((void*)0));
}
