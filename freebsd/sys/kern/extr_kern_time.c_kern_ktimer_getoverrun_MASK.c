
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_retval; struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct itimer {int it_overrun_last; } ;


 int VAR_0 ;
 int FUNC_0 (struct itimer*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 struct itimer* FUNC_3 (struct proc*,int) ;

int
FUNC_4(struct thread *VAR_1, int VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;
 struct itimer *VAR_4;
 int VAR_5 ;

 FUNC_1(VAR_3);
 if (VAR_2 < 3 ||
     (VAR_4 = FUNC_3(VAR_3, VAR_2)) == ((void*)0)) {
  FUNC_2(VAR_3);
  VAR_5 = VAR_0;
 } else {
  VAR_1->td_retval[0] = VAR_4->it_overrun_last;
  FUNC_0(VAR_4);
  FUNC_2(VAR_3);
  VAR_5 = 0;
 }
 return (VAR_5);
}
