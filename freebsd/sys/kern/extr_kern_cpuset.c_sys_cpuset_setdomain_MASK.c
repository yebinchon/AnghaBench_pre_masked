
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cpuset_setdomain_args {int policy; int mask; int domainsetsize; int id; int which; int level; } ;


 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_0, struct cpuset_setdomain_args *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1->level, VAR_1->which,
     VAR_1->id, VAR_1->domainsetsize, VAR_1->mask, VAR_1->policy));
}
