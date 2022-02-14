
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup_subsys_state {int dummy; } ;
struct cpuset {int relax_domain_level; struct cgroup_subsys_state css; struct cpuset* parent; int fmeter; int mems_allowed; int cpus_allowed; scalar_t__ flags; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {int parent; } ;
struct TYPE_2__ {struct cgroup_subsys_state css; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 struct cpuset* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct cpuset*) ;
 scalar_t__ FUNC_6 (struct cpuset*) ;
 int FUNC_7 (struct cpuset*) ;
 struct cpuset* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (int ,scalar_t__*) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static struct cgroup_subsys_state *FUNC_11(
 struct cgroup_subsys *VAR_7,
 struct cgroup *VAR_8)
{
 struct cpuset *VAR_9;
 struct cpuset *VAR_10;

 if (!VAR_8->parent) {
  return &VAR_6.css;
 }
 VAR_10 = FUNC_2(VAR_8->parent);
 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return FUNC_0(-VAR_3);
 if (!FUNC_1(&VAR_9->cpus_allowed, VAR_4)) {
  FUNC_7(VAR_9);
  return FUNC_0(-VAR_3);
 }

 VAR_9->flags = 0;
 if (FUNC_5(VAR_10))
  FUNC_10(VAR_1, &VAR_9->flags);
 if (FUNC_6(VAR_10))
  FUNC_10(VAR_2, &VAR_9->flags);
 FUNC_10(VAR_0, &VAR_9->flags);
 FUNC_3(VAR_9->cpus_allowed);
 FUNC_9(VAR_9->mems_allowed);
 FUNC_4(&VAR_9->fmeter);
 VAR_9->relax_domain_level = -1;

 VAR_9->parent = VAR_10;
 VAR_5++;
 return &VAR_9->css ;
}
