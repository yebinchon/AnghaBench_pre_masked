
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct cpuset* td_cpuset; } ;
struct cpuset {int dummy; } ;


 int VAR_0 ;
 struct cpuset* FUNC_0 (int ) ;
 int FUNC_1 (struct cpuset*) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(struct thread *VAR_1)
{
 struct cpuset *VAR_2;

 FUNC_2(VAR_1);
 VAR_2 = VAR_1->td_cpuset;
 VAR_1->td_cpuset = FUNC_0(VAR_0);
 FUNC_3(VAR_1);
 FUNC_1(VAR_2);
}
