
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
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (struct thread*,int *,int ) ;
 int FUNC_6 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_7 (struct thread*,int *) ;

int
FUNC_8(struct thread *VAR_5, struct freebsd32_swapcontext_args *VAR_6)
{
 ucontext32_t VAR_7;
 int VAR_8;

 if (VAR_6->oucp == ((void*)0) || VAR_6->ucp == ((void*)0))
  VAR_8 = VAR_0;
 else {
  FUNC_2(&VAR_7, sizeof(VAR_7));
  FUNC_5(VAR_5, &VAR_7.uc_mcontext, VAR_2);
  FUNC_0(VAR_5->td_proc);
  VAR_7.uc_sigmask = VAR_5->td_sigmask;
  FUNC_1(VAR_5->td_proc);
  VAR_8 = FUNC_4(&VAR_7, VAR_6->oucp, VAR_4);
  if (VAR_8 == 0) {
   VAR_8 = FUNC_3(VAR_6->ucp, &VAR_7, VAR_4);
   if (VAR_8 == 0) {
    VAR_8 = FUNC_7(VAR_5, &VAR_7.uc_mcontext);
    if (VAR_8 == 0) {
     FUNC_6(VAR_5, VAR_3,
         &VAR_7.uc_sigmask, ((void*)0), 0);
    }
   }
  }
 }
 return (VAR_8 == 0 ? VAR_1 : VAR_8);
}
