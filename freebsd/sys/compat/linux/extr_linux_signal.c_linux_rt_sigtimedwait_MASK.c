
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int suseconds_t ;
struct timeval {long tv_sec; int tv_usec; } ;
struct timespec {int dummy; } ;
struct thread {int* td_retval; } ;
struct linux_rt_sigtimedwait_args {int sigsetsize; int ptr; scalar_t__ timeout; scalar_t__ mask; } ;
typedef int sigset_t ;
typedef int ltv ;
typedef int lset ;
typedef int linfo ;
struct TYPE_8__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef TYPE_1__ l_timeval ;
typedef TYPE_1__ l_sigset_t ;
typedef int l_siginfo_t ;
struct TYPE_9__ {int ksi_signo; } ;
typedef TYPE_3__ ksiginfo_t ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (struct timeval*) ;
 int FUNC_5 (struct thread*,int ,TYPE_3__*,struct timespec*) ;
 int FUNC_6 (TYPE_3__*,int *,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (struct timeval*) ;

int
FUNC_10(struct thread *VAR_1,
 struct linux_rt_sigtimedwait_args *VAR_2)
{
 int VAR_3, VAR_4;
 l_timeval VAR_5;
 struct timeval VAR_6;
 struct timespec VAR_7, *VAR_8;
 l_sigset_t VAR_9;
 sigset_t VAR_10;
 l_siginfo_t VAR_11;
 ksiginfo_t VAR_12;

 if (VAR_2->sigsetsize != sizeof(l_sigset_t))
  return (VAR_0);

 if ((VAR_3 = FUNC_2(VAR_2->mask, &VAR_9, sizeof(VAR_9))))
  return (VAR_3);
 FUNC_7(&VAR_9, &VAR_10);

 VAR_8 = ((void*)0);
 if (VAR_2->timeout) {
  if ((VAR_3 = FUNC_2(VAR_2->timeout, &VAR_5, sizeof(VAR_5))))
   return (VAR_3);
  VAR_6.tv_sec = (long)VAR_5.tv_sec;
  VAR_6.tv_usec = (suseconds_t)VAR_5.tv_usec;
  if (FUNC_4(&VAR_6)) {




   VAR_6.tv_sec += VAR_6.tv_usec / 1000000;
   VAR_6.tv_usec %= 1000000;
   if (VAR_6.tv_usec < 0) {
    VAR_6.tv_sec -= 1;
    VAR_6.tv_usec += 1000000;
   }
   if (VAR_6.tv_sec < 0)
    FUNC_9(&VAR_6);
  }
  FUNC_0(&VAR_6, &VAR_7);
  VAR_8 = &VAR_7;
 }
 VAR_3 = FUNC_5(VAR_1, VAR_10, &VAR_12, VAR_8);
 if (VAR_3)
  return (VAR_3);

 VAR_4 = FUNC_1(VAR_12.ksi_signo);

 if (VAR_2->ptr) {
  FUNC_8(&VAR_11, 0, sizeof(VAR_11));
  FUNC_6(&VAR_12, &VAR_11, VAR_4);
  VAR_3 = FUNC_3(&VAR_11, VAR_2->ptr, sizeof(VAR_11));
 }
 if (VAR_3 == 0)
  VAR_1->td_retval[0] = VAR_4;

 return (VAR_3);
}
