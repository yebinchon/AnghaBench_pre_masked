
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct freebsd32_cpuset_setdomain_args {int policy; int mask; int domainsetsize; int id; int which; int level; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ,int ,int ) ;

int
FUNC_2(struct thread *VAR_1,
    struct freebsd32_cpuset_setdomain_args *VAR_2)
{

 return (FUNC_1(VAR_1, VAR_2->level, VAR_2->which,
     FUNC_0(VAR_0,VAR_2->id), VAR_2->domainsetsize, VAR_2->mask, VAR_2->policy));
}
