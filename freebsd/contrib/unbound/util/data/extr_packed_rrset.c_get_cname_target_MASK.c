
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int type; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; } ;
struct packed_rrset_data {int count; int* rr_len; int ** rr_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (int *) ;

void
FUNC_3(struct ub_packed_rrset_key* VAR_2, uint8_t** VAR_3,
 size_t* VAR_4)
{
 struct packed_rrset_data* VAR_5;
 size_t VAR_6;
 if(FUNC_1(VAR_2->rk.type) != VAR_0 &&
  FUNC_1(VAR_2->rk.type) != VAR_1)
  return;
 VAR_5 = (struct packed_rrset_data*)VAR_2->entry.data;
 if(VAR_5->count < 1)
  return;
 if(VAR_5->rr_len[0] < 3)
  return;
 VAR_6 = FUNC_2(VAR_5->rr_data[0]);
 if(VAR_6 != VAR_5->rr_len[0] - sizeof(uint16_t))
  return;
 if(FUNC_0(VAR_5->rr_data[0]+sizeof(uint16_t), VAR_6) != VAR_6)
  return;
 *VAR_3 = VAR_5->rr_data[0]+sizeof(uint16_t);
 *VAR_4 = VAR_6;
}
