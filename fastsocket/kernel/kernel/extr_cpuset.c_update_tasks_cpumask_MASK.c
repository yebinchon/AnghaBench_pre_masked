
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptr_heap {int dummy; } ;
struct TYPE_2__ {int cgroup; } ;
struct cpuset {TYPE_1__ css; } ;
struct cgroup_scanner {struct ptr_heap* heap; int process_task; int test_task; int cg; } ;


 int FUNC_0 (struct cgroup_scanner*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct cpuset *VAR_2, struct ptr_heap *VAR_3)
{
 struct cgroup_scanner VAR_4;

 VAR_4.cg = VAR_2->css.cgroup;
 VAR_4.test_task = VAR_1;
 VAR_4.process_task = VAR_0;
 VAR_4.heap = VAR_3;
 FUNC_0(&VAR_4);
}
