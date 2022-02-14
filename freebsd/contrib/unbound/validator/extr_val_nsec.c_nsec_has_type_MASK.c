
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ count; int* rr_len; scalar_t__* rr_data; } ;


 size_t FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int,int ) ;

int
FUNC_2(struct ub_packed_rrset_key* VAR_0, uint16_t VAR_1)
{
 struct packed_rrset_data* VAR_2 = (struct packed_rrset_data*)VAR_0->
  entry.data;
 size_t VAR_3;
 if(!VAR_2 || VAR_2->count == 0 || VAR_2->rr_len[0] < 2+1)
  return 0;
 VAR_3 = FUNC_0(VAR_2->rr_data[0]+2, VAR_2->rr_len[0]-2);
 if(!VAR_3)
  return 0;
 return FUNC_1(VAR_2->rr_data[0]+2+VAR_3,
  VAR_2->rr_len[0]-2-VAR_3, VAR_1);
}
