
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
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_2 (struct thread*,int *) ;

int
FUNC_3(struct thread *VAR_4, struct freebsd32_setcontext_args *VAR_5)
{
 ucontext32_t VAR_6;
 int VAR_7;

 if (VAR_5->ucp == ((void*)0))
  VAR_7 = VAR_0;
 else {
  VAR_7 = FUNC_0(VAR_5->ucp, &VAR_6, VAR_3);
  if (VAR_7 == 0) {
   VAR_7 = FUNC_2(VAR_4, &VAR_6.uc_mcontext);
   if (VAR_7 == 0) {
    FUNC_1(VAR_4, VAR_2,
        &VAR_6.uc_sigmask, ((void*)0), 0);
   }
  }
 }
 return (VAR_7 == 0 ? VAR_1 : VAR_7);
}
