
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int hash; scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct rrset_cache {int table; } ;
struct packed_rrset_data {scalar_t__ security; scalar_t__ trust; scalar_t__ ttl; size_t count; size_t rrsig_count; scalar_t__* rr_ttl; } ;
struct lruhash_entry {int lock; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct packed_rrset_data*,struct packed_rrset_data*) ;
 scalar_t__ VAR_1 ;
 struct lruhash_entry* FUNC_4 (int *,int ,struct ub_packed_rrset_key*,int) ;

void
FUNC_5(struct rrset_cache* VAR_2,
 struct ub_packed_rrset_key* VAR_3, time_t VAR_4)
{
 struct packed_rrset_data* VAR_5 =
  (struct packed_rrset_data*)VAR_3->entry.data;
 struct lruhash_entry* VAR_6;
 struct packed_rrset_data* VAR_7;


 VAR_3->entry.hash = FUNC_2(&VAR_3->rk);

 VAR_6 = FUNC_4(&VAR_2->table, VAR_3->entry.hash, VAR_3, 1);
 if(!VAR_6)
  return;
 VAR_7 = (struct packed_rrset_data*)VAR_6->data;
 if(!FUNC_3(VAR_5, VAR_7)) {
  FUNC_0(&VAR_6->lock);
  return;
 }

 if(VAR_5->security > VAR_7->security) {
  size_t VAR_8;
  if(VAR_5->trust > VAR_7->trust)
   VAR_7->trust = VAR_5->trust;
  VAR_7->security = VAR_5->security;

  if(FUNC_1(VAR_3->rk.type) != VAR_0 ||
   VAR_5->ttl+VAR_4 < VAR_7->ttl ||
   VAR_7->ttl < VAR_4 ||
   VAR_5->security == VAR_1) {
   VAR_7->ttl = VAR_5->ttl + VAR_4;
   for(VAR_8=0; VAR_8<VAR_7->count+VAR_7->rrsig_count; VAR_8++)
    VAR_7->rr_ttl[VAR_8] = VAR_5->rr_ttl[VAR_8]+VAR_4;
  }
 }
 FUNC_0(&VAR_6->lock);
}
