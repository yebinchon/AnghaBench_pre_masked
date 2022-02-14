
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct css_id {int rcu_head; int id; struct css_id* css; } ;
struct cgroup_subsys_state {struct css_id* id; } ;
struct cgroup_subsys {int id_lock; int idr; int use_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct css_id*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct cgroup_subsys *VAR_1, struct cgroup_subsys_state *VAR_2)
{
 struct css_id *VAR_3 = VAR_2->id;

 if (!VAR_3)
  return;

 FUNC_0(!VAR_1->use_id);

 FUNC_3(VAR_3->css, ((void*)0));
 FUNC_3(VAR_2->id, ((void*)0));
 FUNC_4(&VAR_1->id_lock);
 FUNC_2(&VAR_1->idr, VAR_3->id);
 FUNC_5(&VAR_1->id_lock);
 FUNC_1(&VAR_3->rcu_head, VAR_0);
}
