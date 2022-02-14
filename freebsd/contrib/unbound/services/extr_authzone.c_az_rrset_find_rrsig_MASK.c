
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct packed_rrset_data {size_t count; size_t rrsig_count; size_t* rr_len; int * rr_data; } ;


 scalar_t__ FUNC_0 (int ,int *,size_t) ;

__attribute__((used)) static int
FUNC_1(struct packed_rrset_data* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 size_t* VAR_3)
{
 size_t VAR_4;
 for(VAR_4=VAR_0->count; VAR_4<VAR_0->count + VAR_0->rrsig_count; VAR_4++) {
  if(VAR_0->rr_len[VAR_4] != VAR_2)
   continue;
  if(FUNC_0(VAR_0->rr_data[VAR_4], VAR_1, VAR_2) == 0) {
   *VAR_3 = VAR_4;
   return 1;
  }
 }
 return 0;
}
