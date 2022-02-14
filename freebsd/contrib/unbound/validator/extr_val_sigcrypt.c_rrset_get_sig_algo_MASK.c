
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {size_t rrsig_count; int* rr_len; size_t count; scalar_t__** rr_data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct ub_packed_rrset_key* VAR_0, size_t VAR_1)
{
 struct packed_rrset_data* VAR_2 = (struct packed_rrset_data*)VAR_0->entry.data;
 FUNC_0(VAR_1 < VAR_2->rrsig_count);
 if(VAR_2->rr_len[VAR_2->count + VAR_1] < 2+3)
  return 0;
 return (int)VAR_2->rr_data[VAR_2->count + VAR_1][2+2];
}
