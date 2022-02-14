
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ucontext_t ;
struct TYPE_4__ {int si_addr; int si_code; int si_errno; int si_signo; } ;
typedef TYPE_1__ siginfo_t ;


 int FUNC_0 (int ,void volatile*) ;
 void volatile* VAR_0 ;
 void volatile* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_5(int VAR_3, siginfo_t *VAR_4, void *VAR_5)
{

 FUNC_3("si_addr = %p\n", VAR_4->si_addr);
 FUNC_4(VAR_3, VAR_4, (ucontext_t *)VAR_5);

 FUNC_0(VAR_4->si_signo, VAR_1);
 FUNC_0(VAR_4->si_errno, 0);
 FUNC_0(VAR_4->si_code, VAR_0);


 FUNC_1("x86 architecture does not correctly "
     "report the address where the unaligned access occured");

 FUNC_0(VAR_4->si_addr, (volatile void *)VAR_2);

 FUNC_2();

}
