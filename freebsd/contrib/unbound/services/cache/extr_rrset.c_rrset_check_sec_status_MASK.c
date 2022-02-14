
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {int hash; scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; int rk; } ;
struct rrset_cache {int table; } ;
struct packed_rrset_data {scalar_t__ ttl; scalar_t__ security; size_t count; size_t rrsig_count; scalar_t__* rr_ttl; scalar_t__ trust; } ;
struct lruhash_entry {int lock; scalar_t__ data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct packed_rrset_data*,struct packed_rrset_data*) ;
 scalar_t__ VAR_0 ;
 struct lruhash_entry* FUNC_3 (int *,int ,struct ub_packed_rrset_key*,int ) ;

void
FUNC_4(struct rrset_cache* VAR_1,
 struct ub_packed_rrset_key* VAR_2, time_t VAR_3)
{
 struct packed_rrset_data* VAR_4 =
  (struct packed_rrset_data*)VAR_2->entry.data;
 struct lruhash_entry* VAR_5;
 struct packed_rrset_data* VAR_6;


 VAR_2->entry.hash = FUNC_1(&VAR_2->rk);

 VAR_5 = FUNC_3(&VAR_1->table, VAR_2->entry.hash, VAR_2, 0);
 if(!VAR_5)
  return;
 VAR_6 = (struct packed_rrset_data*)VAR_5->data;
 if(VAR_3 > VAR_6->ttl || !FUNC_2(VAR_4, VAR_6)) {
  FUNC_0(&VAR_5->lock);
  return;
 }
 if(VAR_6->security > VAR_4->security) {
  VAR_4->security = VAR_6->security;
  if(VAR_6->security == VAR_0) {
   size_t VAR_7;
   VAR_4->ttl = VAR_6->ttl - VAR_3;
   for(VAR_7=0; VAR_7<VAR_6->count+VAR_6->rrsig_count; VAR_7++)
    if(VAR_6->rr_ttl[VAR_7] < VAR_3)
     VAR_4->rr_ttl[VAR_7] = 0;
    else VAR_4->rr_ttl[VAR_7] =
     VAR_6->rr_ttl[VAR_7]-VAR_3;
  }
  if(VAR_6->trust > VAR_4->trust)
   VAR_4->trust = VAR_6->trust;
 }
 FUNC_0(&VAR_5->lock);
}
