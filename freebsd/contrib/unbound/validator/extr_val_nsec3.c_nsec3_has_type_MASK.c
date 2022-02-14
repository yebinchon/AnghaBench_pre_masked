
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {size_t* rr_len; scalar_t__** rr_data; scalar_t__ count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,size_t,int ) ;

int
FUNC_2(struct ub_packed_rrset_key* VAR_0, int VAR_1, uint16_t VAR_2)
{
 uint8_t* VAR_3;
 size_t VAR_4, VAR_5;
        struct packed_rrset_data* VAR_6 = (struct packed_rrset_data*)
         VAR_0->entry.data;
 FUNC_0(VAR_6 && VAR_1 < (int)VAR_6->count);
 VAR_5 = 2+4;

 if(VAR_6->rr_len[VAR_1] < VAR_5+1)
  return 0;
 VAR_5 += 1+(size_t)VAR_6->rr_data[VAR_1][VAR_5];

 if(VAR_6->rr_len[VAR_1] < VAR_5+1)
  return 0;
 VAR_5 += 1+(size_t)VAR_6->rr_data[VAR_1][VAR_5];
 if(VAR_6->rr_len[VAR_1] < VAR_5)
  return 0;
 VAR_4 = VAR_6->rr_len[VAR_1] - VAR_5;
 VAR_3 = VAR_6->rr_data[VAR_1]+VAR_5;
 return FUNC_1(VAR_3, VAR_4, VAR_2);
}
