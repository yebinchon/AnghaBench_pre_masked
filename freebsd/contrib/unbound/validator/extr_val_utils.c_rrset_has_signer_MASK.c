
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {size_t count; size_t rrsig_count; int* rr_len; scalar_t__* rr_data; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct ub_packed_rrset_key* VAR_0, uint8_t* VAR_1, size_t VAR_2)
{
 struct packed_rrset_data* VAR_3 = (struct packed_rrset_data*)VAR_0->
  entry.data;
 size_t VAR_4;
 for(VAR_4 = VAR_3->count; VAR_4< VAR_3->count+VAR_3->rrsig_count; VAR_4++) {
  if(VAR_3->rr_len[VAR_4] > 2+18+VAR_2) {

   if(!FUNC_0(VAR_3->rr_data[VAR_4]+2+18, VAR_3->rr_len[VAR_4]-2-18))
    continue;
   if(FUNC_1(VAR_1, VAR_3->rr_data[VAR_4]+2+18) == 0)
   {
    return 1;
   }
  }
 }
 return 0;
}
