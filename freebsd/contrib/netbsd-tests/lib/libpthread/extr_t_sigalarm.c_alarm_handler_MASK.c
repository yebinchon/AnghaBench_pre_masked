
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_signo; } ;
typedef TYPE_1__ siginfo_t ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(int VAR_1, siginfo_t *VAR_2, void *VAR_3)
{
 FUNC_0(VAR_2->si_signo, VAR_1, "Received unexpected signal");
 VAR_0 = 1;
}
