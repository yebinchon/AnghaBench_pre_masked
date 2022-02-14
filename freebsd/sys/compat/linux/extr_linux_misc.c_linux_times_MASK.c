
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tms ;
struct timeval {int dummy; } ;
struct thread {int* td_retval; struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct linux_times_args {int * buf; } ;
struct l_times_argv {void* tms_cstime; void* tms_cutime; void* tms_stime; void* tms_utime; } ;


 void* FUNC_0 (struct timeval) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*,struct timeval*,struct timeval*) ;
 int FUNC_6 (struct proc*,struct timeval*,struct timeval*) ;
 int FUNC_7 (struct l_times_argv*,int *,int) ;
 int FUNC_8 (struct timeval*) ;

int
FUNC_9(struct thread *VAR_0, struct linux_times_args *VAR_1)
{
 struct timeval VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 struct l_times_argv VAR_7;
 struct proc *VAR_8;
 int VAR_9;

 if (VAR_1->buf != ((void*)0)) {
  VAR_8 = VAR_0->td_proc;
  FUNC_1(VAR_8);
  FUNC_2(VAR_8);
  FUNC_6(VAR_8, &VAR_3, &VAR_4);
  FUNC_3(VAR_8);
  FUNC_5(VAR_8, &VAR_5, &VAR_6);
  FUNC_4(VAR_8);

  VAR_7.tms_utime = FUNC_0(VAR_3);
  VAR_7.tms_stime = FUNC_0(VAR_4);

  VAR_7.tms_cutime = FUNC_0(VAR_5);
  VAR_7.tms_cstime = FUNC_0(VAR_6);

  if ((VAR_9 = FUNC_7(&VAR_7, VAR_1->buf, sizeof(VAR_7))))
   return (VAR_9);
 }

 FUNC_8(&VAR_2);
 VAR_0->td_retval[0] = (int)FUNC_0(VAR_2);
 return (0);
}
