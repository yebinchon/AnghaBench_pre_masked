
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_cowgen; int td_limit; int td_ucred; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct thread *VAR_0, struct thread *VAR_1)
{

 VAR_0->td_ucred = FUNC_0(VAR_1->td_ucred);
 VAR_0->td_limit = FUNC_1(VAR_1->td_limit);
 VAR_0->td_cowgen = VAR_1->td_cowgen;
}
