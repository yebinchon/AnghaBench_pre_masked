
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct css_id {unsigned short id; } ;
struct cgroup_subsys_state {int id; } ;


 struct css_id* FUNC_0 (int ) ;

unsigned short FUNC_1(struct cgroup_subsys_state *VAR_0)
{
 struct css_id *VAR_1 = FUNC_0(VAR_0->id);

 if (VAR_1)
  return VAR_1->id;
 return 0;
}
