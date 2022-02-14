
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct packed_rrset_data {int* rr_len; int ** rr_data; } ;



__attribute__((used)) static uint8_t
FUNC_0(struct packed_rrset_data* VAR_0, size_t VAR_1)
{
 if(VAR_0->rr_len[VAR_1] < 2+4)
  return 0;
 return VAR_0->rr_data[VAR_1][2+3];
}
