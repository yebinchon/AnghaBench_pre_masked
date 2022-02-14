
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_master_list_entry {int master_hash_node; } ;
struct dlm_ctxt {int master_lock; int spinlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dlm_ctxt *VAR_0, struct dlm_master_list_entry *VAR_1)
{
 FUNC_0(&VAR_0->spinlock);
 FUNC_0(&VAR_0->master_lock);

 if (!FUNC_2(&VAR_1->master_hash_node))
  FUNC_1(&VAR_1->master_hash_node);
}
