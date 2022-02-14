
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct css_id {size_t depth; scalar_t__* stack; scalar_t__ id; } ;
struct cgroup_subsys_state {int id; } ;


 struct css_id* FUNC_0 (int ) ;

bool FUNC_1(struct cgroup_subsys_state *VAR_0,
      const struct cgroup_subsys_state *VAR_1)
{
 struct css_id *VAR_2 = FUNC_0(VAR_0->id);
 struct css_id *VAR_3 = FUNC_0(VAR_1->id);

 if (!VAR_2 || !VAR_3 || (VAR_2->depth < VAR_3->depth))
  return 0;
 return VAR_2->stack[VAR_3->depth] == VAR_3->id;
}
