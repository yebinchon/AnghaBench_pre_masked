
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rangelock {int * rl_currdep; int rl_waiters; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct rangelock *VAR_0)
{

 FUNC_0(&VAR_0->rl_waiters);
 VAR_0->rl_currdep = ((void*)0);
}
