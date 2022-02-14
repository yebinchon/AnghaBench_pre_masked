
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpath_node {int rcu; int list; struct mesh_path* mpath; } ;
struct mesh_table {int entries; } ;
struct mesh_path {int state_lock; scalar_t__ is_gate; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mesh_table*,struct mesh_path*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mesh_table *VAR_2, struct mpath_node *VAR_3)
{
 struct mesh_path *VAR_4;
 VAR_4 = VAR_3->mpath;
 FUNC_4(&VAR_4->state_lock);
 VAR_4->flags |= VAR_0;
 if (VAR_4->is_gate)
  FUNC_3(VAR_2, VAR_4);
 FUNC_2(&VAR_3->list);
 FUNC_1(&VAR_3->rcu, VAR_1);
 FUNC_5(&VAR_4->state_lock);
 FUNC_0(&VAR_2->entries);
}
