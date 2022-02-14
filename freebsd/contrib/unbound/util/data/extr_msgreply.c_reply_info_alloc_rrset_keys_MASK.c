
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; struct ub_packed_rrset_key* key; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct reply_info {size_t rrset_count; struct ub_packed_rrset_key** rrsets; } ;
struct regional {int dummy; } ;
struct alloc_cache {int dummy; } ;


 struct ub_packed_rrset_key* FUNC_0 (struct alloc_cache*) ;
 int FUNC_1 (struct ub_packed_rrset_key*,int ,int) ;
 scalar_t__ FUNC_2 (struct regional*,int) ;

int
FUNC_3(struct reply_info* VAR_0, struct alloc_cache* VAR_1,
 struct regional* VAR_2)
{
 size_t VAR_3;
 for(VAR_3=0; VAR_3<VAR_0->rrset_count; VAR_3++) {
  if(VAR_2) {
   VAR_0->rrsets[VAR_3] = (struct ub_packed_rrset_key*)
    FUNC_2(VAR_2,
    sizeof(struct ub_packed_rrset_key));
   if(VAR_0->rrsets[VAR_3]) {
    FUNC_1(VAR_0->rrsets[VAR_3], 0,
     sizeof(struct ub_packed_rrset_key));
    VAR_0->rrsets[VAR_3]->entry.key = VAR_0->rrsets[VAR_3];
   }
  }
  else VAR_0->rrsets[VAR_3] = FUNC_0(VAR_1);
  if(!VAR_0->rrsets[VAR_3])
   return 0;
  VAR_0->rrsets[VAR_3]->entry.data = ((void*)0);
 }
 return 1;
}
