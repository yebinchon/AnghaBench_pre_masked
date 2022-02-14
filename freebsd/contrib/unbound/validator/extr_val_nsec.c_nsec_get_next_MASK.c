
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ count; int* rr_len; int ** rr_data; } ;


 size_t FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(struct ub_packed_rrset_key* VAR_0, uint8_t** VAR_1, size_t* VAR_2)
{
 struct packed_rrset_data* VAR_3 = (struct packed_rrset_data*)VAR_0->
  entry.data;
 if(!VAR_3 || VAR_3->count == 0 || VAR_3->rr_len[0] < 2+1) {
  *VAR_1 = 0;
  *VAR_2 = 0;
  return 0;
 }
 *VAR_1 = VAR_3->rr_data[0]+2;
 *VAR_2 = FUNC_0(*VAR_1, VAR_3->rr_len[0]-2);
 if(!*VAR_2) {
  *VAR_1 = 0;
  *VAR_2 = 0;
  return 0;
 }
 return 1;
}
