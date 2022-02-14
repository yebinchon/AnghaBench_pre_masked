
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uc_sigmask; int uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
typedef int uc ;
struct thread {int dummy; } ;
struct sigreturn_args {int sigcntxp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_2 (struct thread*,int *) ;

int
FUNC_3(struct thread *VAR_2, struct sigreturn_args *VAR_3)
{
 ucontext_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->sigcntxp, &VAR_4, sizeof(VAR_4));
 if (VAR_5 != 0)
     return (VAR_5);

 VAR_5 = FUNC_2(VAR_2, &VAR_4.uc_mcontext);
 if (VAR_5 != 0)
  return (VAR_5);

 FUNC_1(VAR_2, VAR_1, &VAR_4.uc_sigmask, ((void*)0), 0);

 return (VAR_0);
}
