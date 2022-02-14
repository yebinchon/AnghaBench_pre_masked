
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ucontext_t ;
struct TYPE_5__ {int sival_int; } ;
struct TYPE_6__ {TYPE_1__ si_value; int si_code; int si_signo; } ;
typedef TYPE_2__ siginfo_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_3(int VAR_3, siginfo_t *VAR_4, void *VAR_5)
{

 FUNC_2(VAR_3, VAR_4, (ucontext_t *)VAR_5);

 FUNC_0(VAR_4->si_signo, VAR_1);
 FUNC_0(VAR_4->si_code, VAR_2);
 FUNC_0(VAR_4->si_value.sival_int, VAR_0);

 FUNC_1();

}
