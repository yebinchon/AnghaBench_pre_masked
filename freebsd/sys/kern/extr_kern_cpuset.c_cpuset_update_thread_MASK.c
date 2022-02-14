
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dr_policy; } ;
struct thread {TYPE_1__ td_domain; struct cpuset* td_cpuset; } ;
struct cpuset {int cs_domain; } ;


 int FUNC_0 (struct thread*) ;

__attribute__((used)) static struct cpuset *
FUNC_1(struct thread *VAR_0, struct cpuset *VAR_1)
{
 struct cpuset *VAR_2;

 VAR_2 = VAR_0->td_cpuset;
 VAR_0->td_cpuset = VAR_1;
 VAR_0->td_domain.dr_policy = VAR_1->cs_domain;
 FUNC_0(VAR_0);

 return (VAR_2);
}
