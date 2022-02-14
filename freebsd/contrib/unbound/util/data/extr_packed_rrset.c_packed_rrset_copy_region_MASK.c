
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_4__ {struct packed_rrset_data* data; struct ub_packed_rrset_key* key; int hash; } ;
struct TYPE_3__ {size_t dname_len; struct packed_rrset_data* dname; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; int id; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {size_t count; size_t rrsig_count; scalar_t__* rr_ttl; scalar_t__ ttl; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (struct packed_rrset_data*) ;
 size_t FUNC_2 (struct packed_rrset_data*) ;
 struct ub_packed_rrset_key* FUNC_3 (struct regional*,int) ;
 struct packed_rrset_data* FUNC_4 (struct regional*,struct packed_rrset_data*,size_t) ;

struct ub_packed_rrset_key*
FUNC_5(struct ub_packed_rrset_key* VAR_0,
 struct regional* VAR_1, time_t VAR_2)
{
 struct ub_packed_rrset_key* VAR_3 = FUNC_3(VAR_1,
  sizeof(struct ub_packed_rrset_key));
 struct packed_rrset_data* VAR_4;
 struct packed_rrset_data* VAR_5 = (struct packed_rrset_data*)
  VAR_0->entry.data;
 size_t VAR_6, VAR_7;
 if(!VAR_3)
  return ((void*)0);
 VAR_3->id = VAR_0->id;
 FUNC_0(&VAR_3->entry, 0, sizeof(VAR_3->entry));
 VAR_3->entry.hash = VAR_0->entry.hash;
 VAR_3->entry.key = VAR_3;
 VAR_3->rk = VAR_0->rk;
 VAR_3->rk.dname = FUNC_4(VAR_1, VAR_0->rk.dname,
  VAR_0->rk.dname_len);
 if(!VAR_3->rk.dname)
  return ((void*)0);
 VAR_6 = FUNC_2(VAR_5);
 VAR_4 = (struct packed_rrset_data*)FUNC_4(VAR_1, VAR_5, VAR_6);
 if(!VAR_4)
  return ((void*)0);
 VAR_3->entry.data = VAR_4;
 FUNC_1(VAR_4);

 for(VAR_7=0; VAR_7<VAR_4->count + VAR_4->rrsig_count; VAR_7++) {
  if(VAR_4->rr_ttl[VAR_7] < VAR_2)
   VAR_4->rr_ttl[VAR_7] = 0;
  else VAR_4->rr_ttl[VAR_7] -= VAR_2;
 }
 if(VAR_4->ttl < VAR_2)
  VAR_4->ttl = 0;
 else VAR_4->ttl -= VAR_2;
 return VAR_3;
}
