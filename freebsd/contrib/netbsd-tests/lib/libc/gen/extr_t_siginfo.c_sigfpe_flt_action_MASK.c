
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ucontext_t ;
struct TYPE_4__ {int si_errno; int si_code; int si_signo; } ;
typedef TYPE_1__ siginfo_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int,TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_4, siginfo_t *VAR_5, void *VAR_6)
{

 FUNC_2(VAR_4, VAR_5, (ucontext_t *)VAR_6);

 if (VAR_2++ != 0)
  FUNC_1("FPE handler called more than once");

 FUNC_0(VAR_5->si_signo, VAR_1);
 FUNC_0(VAR_5->si_code, VAR_0);
 FUNC_0(VAR_5->si_errno, 0);

 FUNC_3(VAR_3, 1);
}
