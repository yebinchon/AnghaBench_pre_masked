
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptr_heap {int dummy; } ;
struct TYPE_2__ {int cgroup; } ;
struct cpuset {TYPE_1__ css; } ;
struct cgroup_scanner {struct ptr_heap* heap; int process_task; int * test_task; int cg; } ;


 int FUNC_0 (struct cgroup_scanner*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct cpuset *VAR_1, struct ptr_heap *VAR_2)
{
 struct cgroup_scanner VAR_3;

 VAR_3.cg = VAR_1->css.cgroup;
 VAR_3.test_task = ((void*)0);
 VAR_3.process_task = VAR_0;
 VAR_3.heap = VAR_2;
 FUNC_0(&VAR_3);
}
