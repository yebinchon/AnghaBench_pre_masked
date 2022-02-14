
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_kstack; int td_slpcallout; int * td_cpuset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct thread*) ;
 int FUNC_5 (struct thread*) ;

void
FUNC_6(struct thread *VAR_1)
{

 FUNC_3(VAR_1);
 if (VAR_1->td_cpuset)
  FUNC_2(VAR_1->td_cpuset);
 VAR_1->td_cpuset = ((void*)0);
 FUNC_1(VAR_1);
 if (VAR_1->td_kstack != 0)
  FUNC_5(VAR_1);
 FUNC_0(&VAR_1->td_slpcallout);
 FUNC_4(VAR_0, VAR_1);
}
