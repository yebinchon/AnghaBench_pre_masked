
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int * td_retval; } ;
struct sigwaitinfo_args {int info; int set; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
typedef int set ;
struct TYPE_3__ {int ksi_signo; int ksi_info; } ;
typedef TYPE_1__ ksiginfo_t ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct thread*,int ,TYPE_1__*,int *) ;

int
FUNC_3(struct thread *VAR_0, struct sigwaitinfo_args *VAR_1)
{
 ksiginfo_t VAR_2;
 sigset_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->set, &VAR_3, sizeof(VAR_3));
 if (VAR_4)
  return (VAR_4);

 VAR_4 = FUNC_2(VAR_0, VAR_3, &VAR_2, ((void*)0));
 if (VAR_4)
  return (VAR_4);

 if (VAR_1->info)
  VAR_4 = FUNC_1(&VAR_2.ksi_info, VAR_1->info, sizeof(siginfo_t));

 if (VAR_4 == 0)
  VAR_0->td_retval[0] = VAR_2.ksi_signo;
 return (VAR_4);
}
