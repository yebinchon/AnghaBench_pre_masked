
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;
typedef int clockid_t ;
 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct timeval*,struct timespec*) ;
 int FUNC_5 (struct proc*,struct timeval*,struct timeval*) ;
 int FUNC_6 (struct thread*,int,struct timespec*) ;
 int FUNC_7 (struct proc*,struct timespec*) ;
 int FUNC_8 (int *,struct timespec*) ;
 int FUNC_9 (struct timespec*) ;
 int FUNC_10 (struct timespec*) ;
 int FUNC_11 (struct timespec*) ;
 int FUNC_12 (struct timespec*) ;
 int VAR_1 ;
 int FUNC_13 (struct timeval*,struct timeval*) ;

int
FUNC_14(struct thread *VAR_2, clockid_t VAR_3, struct timespec *VAR_4)
{
 struct timeval VAR_5, VAR_6;
 struct proc *VAR_7;

 VAR_7 = VAR_2->td_proc;
 switch (VAR_3) {
 case 136:
 case 134:
  FUNC_11(VAR_4);
  break;
 case 135:
  FUNC_9(VAR_4);
  break;
 case 128:
  FUNC_0(VAR_7);
  FUNC_1(VAR_7);
  FUNC_5(VAR_7, &VAR_6, &VAR_5);
  FUNC_2(VAR_7);
  FUNC_3(VAR_7);
  FUNC_4(&VAR_6, VAR_4);
  break;
 case 137:
  FUNC_0(VAR_7);
  FUNC_1(VAR_7);
  FUNC_5(VAR_7, &VAR_6, &VAR_5);
  FUNC_2(VAR_7);
  FUNC_3(VAR_7);
  FUNC_13(&VAR_6, &VAR_5);
  FUNC_4(&VAR_6, VAR_4);
  break;
 case 141:
 case 139:
 case 131:
 case 129:
  FUNC_12(VAR_4);
  break;
 case 130:
 case 140:
  FUNC_10(VAR_4);
  break;
 case 133:
  VAR_4->tv_sec = VAR_1;
  VAR_4->tv_nsec = 0;
  break;
 case 132:
  FUNC_8(((void*)0), VAR_4);
  break;
 case 138:
  FUNC_0(VAR_7);
  FUNC_7(VAR_7, VAR_4);
  FUNC_3(VAR_7);
  break;
 default:
  if ((int)VAR_3 >= 0)
   return (VAR_0);
  return (FUNC_6(VAR_2, VAR_3, VAR_4));
 }
 return (0);
}
