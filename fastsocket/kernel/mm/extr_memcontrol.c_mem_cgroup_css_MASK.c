
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct mem_cgroup {struct cgroup_subsys_state css; } ;



struct cgroup_subsys_state *FUNC_0(struct mem_cgroup *VAR_0)
{
 return &VAR_0->css;
}
