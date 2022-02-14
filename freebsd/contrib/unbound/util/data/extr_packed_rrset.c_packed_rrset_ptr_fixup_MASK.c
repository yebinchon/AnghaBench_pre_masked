
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int time_t ;
struct packed_rrset_data {size_t count; size_t rrsig_count; size_t* rr_len; int ** rr_data; int * rr_ttl; } ;



void
FUNC_0(struct packed_rrset_data* VAR_0)
{
 size_t VAR_1;
 size_t VAR_2 = VAR_0->count + VAR_0->rrsig_count;
 uint8_t* VAR_3;

 VAR_0->rr_len = (size_t*)((uint8_t*)VAR_0 +
  sizeof(struct packed_rrset_data));
 VAR_0->rr_data = (uint8_t**)&(VAR_0->rr_len[VAR_2]);
 VAR_0->rr_ttl = (time_t*)&(VAR_0->rr_data[VAR_2]);
 VAR_3 = (uint8_t*)&(VAR_0->rr_ttl[VAR_2]);
 for(VAR_1=0; VAR_1<VAR_2; VAR_1++) {
  VAR_0->rr_data[VAR_1] = VAR_3;
  VAR_3 += VAR_0->rr_len[VAR_1];
 }
}
