
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uc_sigmask; int uc_mcontext; } ;
typedef TYPE_1__ ucontext32_t ;
typedef int uc ;
struct thread {int td_proc; int td_sigmask; } ;
struct freebsd32_getcontext_args {int * ucp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (struct thread*,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

int
FUNC_5(struct thread *VAR_3, struct freebsd32_getcontext_args *VAR_4)
{
 ucontext32_t VAR_5;
 int VAR_6;

 if (VAR_4->ucp == ((void*)0))
  VAR_6 = VAR_0;
 else {
  FUNC_4(&VAR_5, 0, sizeof(VAR_5));
  FUNC_3(VAR_3, &VAR_5.uc_mcontext, VAR_1);
  FUNC_0(VAR_3->td_proc);
  VAR_5.uc_sigmask = VAR_3->td_sigmask;
  FUNC_1(VAR_3->td_proc);
  VAR_6 = FUNC_2(&VAR_5, VAR_4->ucp, VAR_2);
 }
 return (VAR_6);
}
