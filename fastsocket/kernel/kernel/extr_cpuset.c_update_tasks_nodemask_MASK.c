
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptr_heap {int dummy; } ;
struct TYPE_2__ {int cgroup; } ;
struct cpuset {TYPE_1__ css; } ;
struct cgroup_scanner {int * data; struct ptr_heap* heap; int process_task; int * test_task; int cg; } ;
typedef int nodemask_t ;


 int FUNC_0 (struct cgroup_scanner*) ;
 struct cpuset* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct cpuset *VAR_2, const nodemask_t *VAR_3,
     struct ptr_heap *VAR_4)
{
 struct cgroup_scanner VAR_5;

 VAR_0 = VAR_2;

 VAR_5.cg = VAR_2->css.cgroup;
 VAR_5.test_task = ((void*)0);
 VAR_5.process_task = VAR_1;
 VAR_5.heap = VAR_4;
 VAR_5.data = (nodemask_t *)VAR_3;
 FUNC_0(&VAR_5);


 VAR_0 = ((void*)0);
}
