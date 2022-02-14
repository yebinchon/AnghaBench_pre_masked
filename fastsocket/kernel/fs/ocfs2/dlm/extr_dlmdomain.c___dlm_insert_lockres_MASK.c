
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int hash; } ;
struct hlist_head {int dummy; } ;
struct dlm_lock_resource {int hash_node; struct qstr lockname; } ;
struct dlm_ctxt {int spinlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 struct hlist_head* FUNC_2 (struct dlm_ctxt*,int ) ;
 int FUNC_3 (int *,struct hlist_head*) ;

void FUNC_4(struct dlm_ctxt *VAR_0,
         struct dlm_lock_resource *VAR_1)
{
 struct hlist_head *VAR_2;
 struct qstr *VAR_3;

 FUNC_0(&VAR_0->spinlock);

 VAR_3 = &VAR_1->lockname;
 VAR_2 = FUNC_2(VAR_0, VAR_3->hash);


 FUNC_1(VAR_1);

 FUNC_3(&VAR_1->hash_node, VAR_2);
}
