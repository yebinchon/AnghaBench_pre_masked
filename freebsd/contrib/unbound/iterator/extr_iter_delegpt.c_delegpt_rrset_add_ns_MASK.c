
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {scalar_t__ security; size_t count; int* rr_len; scalar_t__* rr_data; } ;
struct delegpt {int bogus; int dp_type_mlc; } ;


 int FUNC_0 (struct delegpt*,struct regional*,scalar_t__,int ) ;
 size_t FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int
FUNC_4(struct delegpt* VAR_1, struct regional* VAR_2,
        struct ub_packed_rrset_key* VAR_3, uint8_t VAR_4)
{
 struct packed_rrset_data* VAR_5 = (struct packed_rrset_data*)
  VAR_3->entry.data;
 size_t VAR_6;
 FUNC_2(!VAR_1->dp_type_mlc);
 if(VAR_5->security == VAR_0)
  VAR_1->bogus = 1;
 for(VAR_6=0; VAR_6<VAR_5->count; VAR_6++) {
  if(VAR_5->rr_len[VAR_6] < 2+1) continue;
  if(FUNC_1(VAR_5->rr_data[VAR_6]+2, VAR_5->rr_len[VAR_6]-2) !=
   (size_t)FUNC_3(VAR_5->rr_data[VAR_6]))
   continue;

  if(!FUNC_0(VAR_1, VAR_2, VAR_5->rr_data[VAR_6]+2, VAR_4))
   return 0;
 }
 return 1;
}
