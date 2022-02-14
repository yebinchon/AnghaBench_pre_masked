
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {size_t rrsig_count; int* rr_len; size_t count; scalar_t__* rr_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint16_t
FUNC_3(struct ub_packed_rrset_key* VAR_0, size_t VAR_1)
{
 uint16_t VAR_2;
 struct packed_rrset_data* VAR_3 = (struct packed_rrset_data*)VAR_0->entry.data;
 FUNC_0(VAR_1 < VAR_3->rrsig_count);
 if(VAR_3->rr_len[VAR_3->count + VAR_1] < 2+18)
  return 0;
 FUNC_1(&VAR_2, VAR_3->rr_data[VAR_3->count + VAR_1]+2+16, 2);
 return FUNC_2(VAR_2);
}
