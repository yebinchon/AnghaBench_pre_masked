
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct packed_rrset_data {int rrsig_count; int count; int* rr_len; scalar_t__* rr_data; } ;


 int FUNC_0 (int) ;

size_t
FUNC_1(struct packed_rrset_data* VAR_0)
{
 size_t VAR_1;
 if(VAR_0->rrsig_count > 0) {
  VAR_1 = ((uint8_t*)VAR_0->rr_data[VAR_0->count+VAR_0->rrsig_count-1] -
   (uint8_t*)VAR_0) + VAR_0->rr_len[VAR_0->count+VAR_0->rrsig_count-1];
 } else {
  FUNC_0(VAR_0->count > 0);
  VAR_1 = ((uint8_t*)VAR_0->rr_data[VAR_0->count-1] - (uint8_t*)VAR_0) +
   VAR_0->rr_len[VAR_0->count-1];
 }
 return VAR_1;
}
