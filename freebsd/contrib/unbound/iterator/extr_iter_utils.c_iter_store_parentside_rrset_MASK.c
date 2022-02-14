
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int hash; } ;
struct ub_packed_rrset_key {int id; TYPE_2__ rk; TYPE_1__ entry; } ;
struct rrset_ref {int id; struct ub_packed_rrset_key* key; } ;
struct module_env {int * now; int alloc; int rrset_cache; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct ub_packed_rrset_key* FUNC_1 (struct ub_packed_rrset_key*,int ,int ) ;
 int FUNC_2 (int ,struct rrset_ref*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(struct module_env* VAR_1,
 struct ub_packed_rrset_key* VAR_2)
{
 struct rrset_ref VAR_3;
 VAR_2 = FUNC_1(VAR_2, VAR_1->alloc, *VAR_1->now);
 if(!VAR_2) {
  FUNC_0("malloc failure in store_parentside_rrset");
  return;
 }
 VAR_2->rk.flags |= VAR_0;
 VAR_2->entry.hash = FUNC_3(&VAR_2->rk);
 VAR_3.key = VAR_2;
 VAR_3.id = VAR_2->id;

 (void)FUNC_2(VAR_1->rrset_cache, &VAR_3, VAR_1->alloc, *VAR_1->now);
}
