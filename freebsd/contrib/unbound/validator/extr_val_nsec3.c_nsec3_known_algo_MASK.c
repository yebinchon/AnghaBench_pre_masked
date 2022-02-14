
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {int* rr_len; int** rr_data; scalar_t__ count; } ;



 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct ub_packed_rrset_key* VAR_0, int VAR_1)
{
        struct packed_rrset_data* VAR_2 = (struct packed_rrset_data*)
         VAR_0->entry.data;
 FUNC_0(VAR_2 && VAR_1 < (int)VAR_2->count);
 if(VAR_2->rr_len[VAR_1] < 2+1)
  return 0;
 switch(VAR_2->rr_data[VAR_1][2+0]) {
  case 128:
   return 1;
 }
 return 0;
}
