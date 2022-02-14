
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct ns_cgroup {struct cgroup_subsys_state css; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cgroup*,int ) ;
 int VAR_4 ;
 struct ns_cgroup* FUNC_3 (int,int ) ;

__attribute__((used)) static struct cgroup_subsys_state *FUNC_4(struct cgroup_subsys *VAR_5,
      struct cgroup *VAR_6)
{
 struct ns_cgroup *VAR_7;

 if (!FUNC_1(VAR_0))
  return FUNC_0(-VAR_2);
 if (!FUNC_2(VAR_6, VAR_4))
  return FUNC_0(-VAR_2);

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return FUNC_0(-VAR_1);
 return &VAR_7->css;
}
