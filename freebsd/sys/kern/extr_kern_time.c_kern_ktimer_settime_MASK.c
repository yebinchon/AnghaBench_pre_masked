
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct itimerspec {int dummy; } ;
struct itimer {int it_clockid; } ;


 int FUNC_0 (int ,int ,struct itimer*) ;
 int VAR_0 ;
 int FUNC_1 (struct itimer*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct itimer*) ;
 struct itimer* FUNC_5 (struct proc*,int) ;
 int FUNC_6 (struct itimer*) ;
 int VAR_1 ;

int
FUNC_7(struct thread *VAR_2, int VAR_3, int VAR_4,
    struct itimerspec *VAR_5, struct itimerspec *VAR_6)
{
 struct proc *VAR_7;
 struct itimer *VAR_8;
 int VAR_9;

 VAR_7 = VAR_2->td_proc;
 FUNC_2(VAR_7);
 if (VAR_3 < 3 || (VAR_8 = FUNC_5(VAR_7, VAR_3)) == ((void*)0)) {
  FUNC_3(VAR_7);
  VAR_9 = VAR_0;
 } else {
  FUNC_3(VAR_7);
  FUNC_4(VAR_8);
  VAR_9 = FUNC_0(VAR_8->it_clockid, VAR_1, (VAR_8,
      VAR_4, VAR_5, VAR_6));
  FUNC_6(VAR_8);
  FUNC_1(VAR_8);
 }
 return (VAR_9);
}
