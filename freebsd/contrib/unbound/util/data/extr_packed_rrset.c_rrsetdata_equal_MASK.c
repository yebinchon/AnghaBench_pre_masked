
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_rrset_data {size_t count; size_t rrsig_count; scalar_t__* rr_len; int * rr_data; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(struct packed_rrset_data* VAR_0, struct packed_rrset_data* VAR_1)
{
 size_t VAR_2;
 size_t VAR_3;
 if(VAR_0->count != VAR_1->count || VAR_0->rrsig_count != VAR_1->rrsig_count)
  return 0;
 VAR_3 = VAR_0->count + VAR_0->rrsig_count;
 for(VAR_2=0; VAR_2<VAR_3; VAR_2++) {
  if(VAR_0->rr_len[VAR_2] != VAR_1->rr_len[VAR_2])
   return 0;
  if(FUNC_0(VAR_0->rr_data[VAR_2], VAR_1->rr_data[VAR_2], VAR_0->rr_len[VAR_2]) != 0)
   return 0;
 }
 return 1;
}
