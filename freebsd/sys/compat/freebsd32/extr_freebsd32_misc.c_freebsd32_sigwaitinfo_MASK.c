
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int * td_retval; } ;
struct siginfo32 {int dummy; } ;
struct freebsd32_sigwaitinfo_args {int info; int set; } ;
typedef int sigset_t ;
typedef int set ;
struct TYPE_3__ {int ksi_signo; int ksi_info; } ;
typedef TYPE_1__ ksiginfo_t ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct siginfo32*,int ,int) ;
 int FUNC_2 (struct thread*,int ,TYPE_1__*,int *) ;
 int FUNC_3 (int *,struct siginfo32*) ;

int
FUNC_4(struct thread *VAR_0, struct freebsd32_sigwaitinfo_args *VAR_1)
{
 ksiginfo_t VAR_2;
 struct siginfo32 VAR_3;
 sigset_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->set, &VAR_4, sizeof(VAR_4));
 if (VAR_5)
  return (VAR_5);

 VAR_5 = FUNC_2(VAR_0, VAR_4, &VAR_2, ((void*)0));
 if (VAR_5)
  return (VAR_5);

 if (VAR_1->info) {
  FUNC_3(&VAR_2.ksi_info, &VAR_3);
  VAR_5 = FUNC_1(&VAR_3, VAR_1->info, sizeof(struct siginfo32));
 }
 if (VAR_5 == 0)
  VAR_0->td_retval[0] = VAR_2.ksi_signo;
 return (VAR_5);
}
