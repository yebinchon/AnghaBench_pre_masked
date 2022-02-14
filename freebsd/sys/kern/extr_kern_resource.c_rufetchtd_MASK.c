
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct rusage {int ru_stime; int ru_utime; } ;
struct thread {int td_rux; struct rusage td_ru; int td_incruntime; int td_runtime; struct proc* td_proc; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (struct proc*,int *,int *,int *) ;
 scalar_t__ FUNC_5 () ;
 struct thread* VAR_1 ;
 int FUNC_6 (struct proc*,struct thread*) ;
 int VAR_2 ;

void
FUNC_7(struct thread *VAR_3, struct rusage *VAR_4)
{
 struct proc *VAR_5;
 uint64_t VAR_6, VAR_7;

 VAR_5 = VAR_3->td_proc;
 FUNC_2(VAR_5, VAR_0);
 FUNC_3(VAR_3, VAR_0);






 if (VAR_3 == VAR_1) {
  VAR_7 = FUNC_5();
  VAR_6 = VAR_7 - FUNC_0(VAR_2);
  VAR_3->td_runtime += VAR_6;
  VAR_3->td_incruntime += VAR_6;
  FUNC_1(VAR_2, VAR_7);
 }
 FUNC_6(VAR_5, VAR_3);
 *VAR_4 = VAR_3->td_ru;
 FUNC_4(VAR_5, &VAR_3->td_rux, &VAR_4->ru_utime, &VAR_4->ru_stime);
}
