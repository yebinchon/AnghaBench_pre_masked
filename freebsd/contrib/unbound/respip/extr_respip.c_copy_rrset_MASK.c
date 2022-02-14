
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ time_t ;
struct TYPE_4__ {struct packed_rrset_data* data; struct ub_packed_rrset_key* key; int hash; } ;
struct TYPE_3__ {int dname; int dname_len; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; int id; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int count; size_t* rr_len; int ** rr_data; scalar_t__* rr_ttl; scalar_t__ rrsig_count; } ;


 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 void* FUNC_2 (struct regional*,size_t) ;
 int FUNC_3 (struct regional*,int ,int ) ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_4(const struct ub_packed_rrset_key* VAR_0, struct regional* VAR_1)
{
 struct ub_packed_rrset_key* VAR_2 = FUNC_2(VAR_1,
  sizeof(struct ub_packed_rrset_key));
 struct packed_rrset_data* VAR_3;
 struct packed_rrset_data* VAR_4 = VAR_0->entry.data;
 size_t VAR_5, VAR_6;
 uint8_t* VAR_7;



 if(!VAR_2)
  return ((void*)0);
 VAR_2->id = VAR_0->id;
 FUNC_1(&VAR_2->entry, 0, sizeof(VAR_2->entry));
 VAR_2->entry.hash = VAR_0->entry.hash;
 VAR_2->entry.key = VAR_2;
 VAR_2->rk = VAR_0->rk;
 VAR_2->rk.dname = FUNC_3(VAR_1, VAR_0->rk.dname,
  VAR_0->rk.dname_len);
 if(!VAR_2->rk.dname)
  return ((void*)0);

 VAR_5 = sizeof(struct packed_rrset_data) + VAR_4->count *
  (sizeof(size_t)+sizeof(uint8_t*)+sizeof(time_t));
 for(VAR_6=0; VAR_6<VAR_4->count; VAR_6++)
  VAR_5 += VAR_4->rr_len[VAR_6];
 VAR_3 = FUNC_2(VAR_1, VAR_5);
 if(!VAR_3)
  return ((void*)0);
 *VAR_3 = *VAR_4;
 VAR_3->rrsig_count = 0;
 VAR_2->entry.data = VAR_3;


 VAR_3->rr_len = (size_t*)((uint8_t*)VAR_3 + sizeof(struct packed_rrset_data));
 VAR_3->rr_data = (uint8_t**)&(VAR_3->rr_len[VAR_3->count]);
 VAR_3->rr_ttl = (time_t*)&(VAR_3->rr_data[VAR_3->count]);
 VAR_7 = (uint8_t*)&(VAR_3->rr_ttl[VAR_3->count]);
 for(VAR_6=0; VAR_6<VAR_3->count; VAR_6++) {
  VAR_3->rr_len[VAR_6] = VAR_4->rr_len[VAR_6];
  VAR_3->rr_ttl[VAR_6] = VAR_4->rr_ttl[VAR_6];
  VAR_3->rr_data[VAR_6] = VAR_7;
  FUNC_0(VAR_3->rr_data[VAR_6], VAR_4->rr_data[VAR_6], VAR_4->rr_len[VAR_6]);
  VAR_7 += VAR_3->rr_len[VAR_6];
 }

 return VAR_2;
}
