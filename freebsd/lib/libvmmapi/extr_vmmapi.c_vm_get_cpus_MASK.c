
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int fd; } ;
struct vm_cpuset {int which; int cpusetsize; int * cpus; } ;
typedef int cpuset_t ;


 int VAR_0 ;
 int FUNC_0 (struct vm_cpuset*,int) ;
 int FUNC_1 (int ,int ,struct vm_cpuset*) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_1, int VAR_2, cpuset_t *VAR_3)
{
 struct vm_cpuset VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4, sizeof(struct vm_cpuset));
 VAR_4.which = VAR_2;
 VAR_4.cpusetsize = sizeof(cpuset_t);
 VAR_4.cpus = VAR_3;

 VAR_5 = FUNC_1(VAR_1->fd, VAR_0, &VAR_4);
 return (VAR_5);
}
