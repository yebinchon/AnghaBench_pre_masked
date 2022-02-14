
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int uc_sigmask; int uc_mcontext; } ;
typedef TYPE_1__ ucontext32_t ;
typedef int uc ;
struct thread {int td_proc; int td_sigmask; } ;
struct freebsd32_swapcontext_args {int * ucp; int * oucp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (struct thread*,int *,int ) ;
 int FUNC_6 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_7 (struct thread*,int *) ;

int
FUNC_8(struct thread *VAR_4, struct freebsd32_swapcontext_args *VAR_5)
{
 ucontext32_t VAR_6;
 int VAR_7;

 if (VAR_5->oucp == ((void*)0) || VAR_5->ucp == ((void*)0))
  VAR_7 = VAR_0;
 else {
  FUNC_2(&VAR_6, sizeof(VAR_6));
  FUNC_5(VAR_4, &VAR_6.uc_mcontext, VAR_1);
  FUNC_0(VAR_4->td_proc);
  VAR_6.uc_sigmask = VAR_4->td_sigmask;
  FUNC_1(VAR_4->td_proc);
  VAR_7 = FUNC_4(&VAR_6, VAR_5->oucp, VAR_3);
  if (VAR_7 == 0) {
   VAR_7 = FUNC_3(VAR_5->ucp, &VAR_6, VAR_3);
   if (VAR_7 == 0) {
    VAR_7 = FUNC_7(VAR_4, &VAR_6.uc_mcontext);
    FUNC_6(VAR_4, VAR_2,
      &VAR_6.uc_sigmask, ((void*)0), 0);
   }
  }
 }
 return (VAR_7);
}
