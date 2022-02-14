
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ rrsig_count; size_t count; int * rr_len; int * rr_data; } ;


 int FUNC_0 (int ,int ,int **,size_t*) ;

void
FUNC_1(struct ub_packed_rrset_key* VAR_0, uint8_t** VAR_1,
 size_t* VAR_2)
{
 struct packed_rrset_data* VAR_3 = (struct packed_rrset_data*)
  VAR_0->entry.data;

 if(VAR_3->rrsig_count == 0) {
  *VAR_1 = ((void*)0);
  *VAR_2 = 0;
  return;
 }

 FUNC_0(VAR_3->rr_data[VAR_3->count], VAR_3->rr_len[VAR_3->count],
  VAR_1, VAR_2);
}
