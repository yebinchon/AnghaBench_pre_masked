
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct thread*,int ) ;
 struct thread* VAR_2 ;

void
FUNC_2(struct thread* VAR_3)
{
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_3 == VAR_2, ("sched_unbind: can only bind curthread"));
 VAR_3->td_flags &= ~VAR_1;
}
