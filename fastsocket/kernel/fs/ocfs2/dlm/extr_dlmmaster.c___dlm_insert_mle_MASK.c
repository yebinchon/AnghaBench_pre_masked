
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct dlm_master_list_entry {int master_hash_node; int mnamehash; } ;
struct dlm_ctxt {int master_lock; } ;


 int FUNC_0 (int *) ;
 struct hlist_head* FUNC_1 (struct dlm_ctxt*,int ) ;
 int FUNC_2 (int *,struct hlist_head*) ;

void FUNC_3(struct dlm_ctxt *VAR_0, struct dlm_master_list_entry *VAR_1)
{
 struct hlist_head *VAR_2;

 FUNC_0(&VAR_0->master_lock);

 VAR_2 = FUNC_1(VAR_0, VAR_1->mnamehash);
 FUNC_2(&VAR_1->master_hash_node, VAR_2);
}
