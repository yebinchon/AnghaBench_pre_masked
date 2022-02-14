
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uc_sigmask; int uc_mcontext; } ;
typedef TYPE_1__ ucontext32_t ;
struct thread {int dummy; } ;
struct freebsd32_setcontext_args {int * ucp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_2 (struct thread*,int *) ;

int
FUNC_3(struct thread *VAR_3, struct freebsd32_setcontext_args *VAR_4)
{
 ucontext32_t VAR_5;
 int VAR_6;

 if (VAR_4->ucp == ((void*)0))
  VAR_6 = VAR_0;
 else {
  VAR_6 = FUNC_0(VAR_4->ucp, &VAR_5, VAR_2);
  if (VAR_6 == 0) {
   VAR_6 = FUNC_2(VAR_3, &VAR_5.uc_mcontext);
   if (VAR_6 == 0)
    FUNC_1(VAR_3, VAR_1, &VAR_5.uc_sigmask,
      ((void*)0), 0);
  }
 }
 return (VAR_6);
}
