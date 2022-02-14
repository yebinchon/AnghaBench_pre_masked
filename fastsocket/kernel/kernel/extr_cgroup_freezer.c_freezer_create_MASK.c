
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct freezer {struct cgroup_subsys_state css; int state; int lock; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_2 ;
 struct freezer* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct cgroup_subsys_state *FUNC_3(struct cgroup_subsys *VAR_3,
        struct cgroup *VAR_4)
{
 struct freezer *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct freezer), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 FUNC_2(&VAR_5->lock);
 VAR_5->state = VAR_0;
 return &VAR_5->css;
}
