
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ts ;
struct timespec {int dummy; } ;
struct thread {int * td_retval; } ;
struct sigtimedwait_args {int info; scalar_t__ set; scalar_t__ timeout; } ;
typedef struct timespec sigset_t ;
typedef int siginfo_t ;
typedef int set ;
struct TYPE_3__ {int ksi_signo; int ksi_info; } ;
typedef TYPE_1__ ksiginfo_t ;


 int FUNC_0 (scalar_t__,struct timespec*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct thread*,struct timespec,TYPE_1__*,struct timespec*) ;

int
FUNC_3(struct thread *VAR_0, struct sigtimedwait_args *VAR_1)
{
 struct timespec VAR_2;
 struct timespec *VAR_3;
 sigset_t VAR_4;
 ksiginfo_t VAR_5;
 int VAR_6;

 if (VAR_1->timeout) {
  VAR_6 = FUNC_0(VAR_1->timeout, &VAR_2, sizeof(VAR_2));
  if (VAR_6)
   return (VAR_6);

  VAR_3 = &VAR_2;
 } else
  VAR_3 = ((void*)0);

 VAR_6 = FUNC_0(VAR_1->set, &VAR_4, sizeof(VAR_4));
 if (VAR_6)
  return (VAR_6);

 VAR_6 = FUNC_2(VAR_0, VAR_4, &VAR_5, VAR_3);
 if (VAR_6)
  return (VAR_6);

 if (VAR_1->info)
  VAR_6 = FUNC_1(&VAR_5.ksi_info, VAR_1->info, sizeof(siginfo_t));

 if (VAR_6 == 0)
  VAR_0->td_retval[0] = VAR_5.ksi_signo;
 return (VAR_6);
}
