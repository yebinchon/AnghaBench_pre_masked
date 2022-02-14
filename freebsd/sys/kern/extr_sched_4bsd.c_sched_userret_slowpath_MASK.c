
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_user_pri; int td_base_pri; int td_priority; } ;


 int FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*) ;

void
FUNC_2(struct thread *VAR_0)
{

 FUNC_0(VAR_0);
 VAR_0->td_priority = VAR_0->td_user_pri;
 VAR_0->td_base_pri = VAR_0->td_user_pri;
 FUNC_1(VAR_0);
}
