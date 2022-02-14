
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup_subsys_state {int dummy; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup_cls_state {struct cgroup_subsys_state css; int classid; } ;
struct cgroup {scalar_t__ parent; } ;
struct TYPE_2__ {int classid; } ;


 int VAR_0 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 struct cgroup_cls_state* FUNC_2 (int,int ) ;

__attribute__((used)) static struct cgroup_subsys_state *FUNC_3(struct cgroup_subsys *VAR_2,
       struct cgroup *VAR_3)
{
 struct cgroup_cls_state *VAR_4;

 if (!(VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1)))
  return FUNC_0(-VAR_0);

 if (VAR_3->parent)
  VAR_4->classid = FUNC_1(VAR_3->parent)->classid;

 return &VAR_4->css;
}
