
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {scalar_t__ flags; int * id; int refcnt; struct cgroup* cgroup; } ;
struct cgroup_subsys {size_t subsys_id; } ;
struct cgroup {struct cgroup_subsys_state** subsys; } ;


 int FUNC_0 (struct cgroup_subsys_state*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 struct cgroup* VAR_1 ;
 int FUNC_2 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct cgroup_subsys_state *VAR_2,
          struct cgroup_subsys *VAR_3,
          struct cgroup *VAR_4)
{
 VAR_2->cgroup = VAR_4;
 FUNC_1(&VAR_2->refcnt, 1);
 VAR_2->flags = 0;
 VAR_2->id = ((void*)0);
 if (VAR_4 == VAR_1)
  FUNC_2(VAR_0, &VAR_2->flags);
 FUNC_0(VAR_4->subsys[VAR_3->subsys_id]);
 VAR_4->subsys[VAR_3->subsys_id] = VAR_2;
}
