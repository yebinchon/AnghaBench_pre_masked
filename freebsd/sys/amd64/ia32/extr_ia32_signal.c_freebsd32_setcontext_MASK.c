
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ia32_ucontext {int uc_sigmask; int uc_mcontext; } ;
struct freebsd32_setcontext_args {int * ucp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct ia32_ucontext*,int ) ;
 int FUNC_1 (struct thread*,int *) ;
 int FUNC_2 (struct thread*,int ,int *,int *,int ) ;

int
FUNC_3(struct thread *VAR_4, struct freebsd32_setcontext_args *VAR_5)
{
 struct ia32_ucontext VAR_6;
 int VAR_7;

 if (VAR_5->ucp == ((void*)0))
  VAR_7 = VAR_0;
 else {
  VAR_7 = FUNC_0(VAR_5->ucp, &VAR_6, VAR_3);
  if (VAR_7 == 0) {
   VAR_7 = FUNC_1(VAR_4, &VAR_6.uc_mcontext);
   if (VAR_7 == 0) {
    FUNC_2(VAR_4, VAR_2,
        &VAR_6.uc_sigmask, ((void*)0), 0);
   }
  }
 }
 return (VAR_7 == 0 ? VAR_1 : VAR_7);
}
