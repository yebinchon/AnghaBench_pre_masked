
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int oom_kill_disable; int under_oom; } ;
struct cgroup_map_cb {int (* fill ) (struct cgroup_map_cb*,char*,int) ;} ;
struct cgroup {int dummy; } ;
struct cftype {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct mem_cgroup* FUNC_1 (struct cgroup*) ;
 int FUNC_2 (struct cgroup_map_cb*,char*,int) ;
 int FUNC_3 (struct cgroup_map_cb*,char*,int) ;
 int FUNC_4 (struct cgroup_map_cb*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct cgroup *VAR_0,
 struct cftype *VAR_1, struct cgroup_map_cb *VAR_2)
{
 struct mem_cgroup *VAR_3 = FUNC_1(VAR_0);

 VAR_2->fill(VAR_2, "oom_kill_disable", VAR_3->oom_kill_disable);

 if (FUNC_0(&VAR_3->under_oom))
  VAR_2->fill(VAR_2, "under_oom", 1);
 else
  VAR_2->fill(VAR_2, "under_oom", 0);
 return 0;
}
