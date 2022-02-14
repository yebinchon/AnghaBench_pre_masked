
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int refcnt; } ;
struct cgroup_subsys {scalar_t__ root; size_t subsys_id; } ;
struct cgroup {scalar_t__ root; struct cgroup_subsys_state** subsys; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cgroup_subsys** VAR_1 ;

__attribute__((used)) static int FUNC_1(struct cgroup *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct cgroup_subsys *VAR_4 = VAR_1[VAR_3];
  struct cgroup_subsys_state *VAR_5;

  if (VAR_4->root != VAR_2->root)
   continue;
  VAR_5 = VAR_2->subsys[VAR_4->subsys_id];






  if (VAR_5 && (FUNC_0(&VAR_5->refcnt) > 1))
   return 1;
 }
 return 0;
}
