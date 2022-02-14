
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct dev_cgroup {struct cgroup_subsys_state css; int behavior; int exceptions; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {struct cgroup* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cgroup_subsys_state* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct dev_cgroup* FUNC_2 (struct cgroup*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (struct dev_cgroup*) ;
 struct dev_cgroup* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct cgroup_subsys_state *FUNC_8(struct cgroup_subsys *VAR_4,
      struct cgroup *VAR_5)
{
 struct dev_cgroup *VAR_6, *VAR_7;
 struct cgroup *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);
 FUNC_1(&VAR_6->exceptions);
 VAR_8 = VAR_5->parent;

 if (VAR_8 == ((void*)0))
  VAR_6->behavior = VAR_0;
 else {
  VAR_7 = FUNC_2(VAR_8);
  FUNC_6(&VAR_3);
  VAR_9 = FUNC_3(&VAR_6->exceptions,
       &VAR_7->exceptions);
  VAR_6->behavior = VAR_7->behavior;
  FUNC_7(&VAR_3);
  if (VAR_9) {
   FUNC_4(VAR_6);
   return FUNC_0(VAR_9);
  }
 }

 return &VAR_6->css;
}
