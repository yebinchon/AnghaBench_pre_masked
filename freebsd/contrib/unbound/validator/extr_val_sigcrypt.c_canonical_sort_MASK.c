
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct packed_rrset_data {size_t count; } ;
struct TYPE_2__ {struct canon_rr* key; } ;
struct canon_rr {size_t rr_idx; TYPE_1__ node; struct ub_packed_rrset_key* rrset; } ;
typedef int rbtree_type ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct ub_packed_rrset_key* VAR_0, struct packed_rrset_data* VAR_1,
 rbtree_type* VAR_2, struct canon_rr* VAR_3)
{
 size_t VAR_4;

 for(VAR_4=0; VAR_4<VAR_1->count; VAR_4++) {
  VAR_3[VAR_4].node.key = &VAR_3[VAR_4];
  VAR_3[VAR_4].rrset = VAR_0;
  VAR_3[VAR_4].rr_idx = VAR_4;
  if(!FUNC_0(VAR_2, &VAR_3[VAR_4].node)) {

  }
 }
}
