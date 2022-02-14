
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash; int lock; } ;
struct ub_packed_rrset_key {scalar_t__ id; TYPE_1__ entry; } ;
struct rrset_cache {int table; } ;
struct lruhash {int lock; } ;
typedef scalar_t__ rrset_id_type ;
typedef scalar_t__ hashvalue_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lruhash*,TYPE_1__*) ;
 struct lruhash* FUNC_5 (int *,scalar_t__) ;

void
FUNC_6(struct rrset_cache* VAR_0, struct ub_packed_rrset_key* VAR_1,
        hashvalue_type VAR_2, rrset_id_type VAR_3)
{
 struct lruhash* VAR_4 = FUNC_5(&VAR_0->table, VAR_2);
 FUNC_0(&VAR_4->lock);






 FUNC_2(&VAR_1->entry.lock);
 if(VAR_1->id == VAR_3 && VAR_1->entry.hash == VAR_2) {
  FUNC_4(VAR_4, &VAR_1->entry);
 }
 FUNC_3(&VAR_1->entry.lock);
 FUNC_1(&VAR_4->lock);
}
