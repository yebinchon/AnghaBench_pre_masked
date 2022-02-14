
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ts32 ;
struct timespec32 {int tv_nsec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct thread {int * td_retval; } ;
struct siginfo32 {int dummy; } ;
struct freebsd32_sigtimedwait_args {int info; scalar_t__ set; scalar_t__ timeout; } ;
typedef struct timespec32 sigset_t ;
typedef int set ;
struct TYPE_3__ {int ksi_signo; int ksi_info; } ;
typedef TYPE_1__ ksiginfo_t ;


 int FUNC_0 (scalar_t__,struct timespec32*,int) ;
 int FUNC_1 (struct siginfo32*,int ,int) ;
 int FUNC_2 (struct thread*,struct timespec32,TYPE_1__*,struct timespec*) ;
 int FUNC_3 (int *,struct siginfo32*) ;

int
FUNC_4(struct thread *VAR_0, struct freebsd32_sigtimedwait_args *VAR_1)
{
 struct timespec32 VAR_2;
 struct timespec VAR_3;
 struct timespec *VAR_4;
 sigset_t VAR_5;
 ksiginfo_t VAR_6;
 struct siginfo32 VAR_7;
 int VAR_8;

 if (VAR_1->timeout) {
  VAR_8 = FUNC_0(VAR_1->timeout, &VAR_2, sizeof(VAR_2));
  if (VAR_8)
   return (VAR_8);
  VAR_3.tv_sec = VAR_2;
  VAR_3.tv_nsec = VAR_2;
  VAR_4 = &VAR_3;
 } else
  VAR_4 = ((void*)0);

 VAR_8 = FUNC_0(VAR_1->set, &VAR_5, sizeof(VAR_5));
 if (VAR_8)
  return (VAR_8);

 VAR_8 = FUNC_2(VAR_0, VAR_5, &VAR_6, VAR_4);
 if (VAR_8)
  return (VAR_8);

 if (VAR_1->info) {
  FUNC_3(&VAR_6.ksi_info, &VAR_7);
  VAR_8 = FUNC_1(&VAR_7, VAR_1->info, sizeof(struct siginfo32));
 }

 if (VAR_8 == 0)
  VAR_0->td_retval[0] = VAR_6.ksi_signo;
 return (VAR_8);
}
