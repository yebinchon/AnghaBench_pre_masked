
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_user_pri; int td_base_pri; int td_priority; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,struct thread*) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(struct thread *VAR_0)
{

 FUNC_2(VAR_0);
 VAR_0->td_priority = VAR_0->td_user_pri;
 VAR_0->td_base_pri = VAR_0->td_user_pri;
 FUNC_1(FUNC_0(), VAR_0);
 FUNC_3(VAR_0);
}
