
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int cpus_allowed; } ;
struct cgroup_scanner {int cg; } ;
struct TYPE_2__ {int cpus_allowed; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_0,
          struct cgroup_scanner *VAR_1)
{
 return !FUNC_1(&VAR_0->cpus_allowed,
   (FUNC_0(VAR_1->cg))->cpus_allowed);
}
