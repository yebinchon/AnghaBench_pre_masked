
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ucontext_t ;
struct TYPE_4__ {int si_addr; int si_code; int si_errno; int si_signo; } ;
typedef TYPE_1__ siginfo_t ;


 int FUNC_0 (int ,void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{

 FUNC_2(VAR_2, VAR_3, (ucontext_t *)VAR_4);

 FUNC_0(VAR_3->si_signo, VAR_1);
 FUNC_0(VAR_3->si_errno, 0);
 FUNC_0(VAR_3->si_code, VAR_0);
 FUNC_0(VAR_3->si_addr, (void *)0);

 FUNC_1();

}
