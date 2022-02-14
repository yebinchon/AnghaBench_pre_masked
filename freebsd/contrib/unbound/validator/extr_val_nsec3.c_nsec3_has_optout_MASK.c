
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {int* rr_len; int** rr_data; scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(struct ub_packed_rrset_key* VAR_1, int VAR_2)
{
        struct packed_rrset_data* VAR_3 = (struct packed_rrset_data*)
         VAR_1->entry.data;
 FUNC_0(VAR_3 && VAR_2 < (int)VAR_3->count);
 if(VAR_3->rr_len[VAR_2] < 2+2)
  return 0;
 return (int)(VAR_3->rr_data[VAR_2][2+1] & VAR_0);
}
