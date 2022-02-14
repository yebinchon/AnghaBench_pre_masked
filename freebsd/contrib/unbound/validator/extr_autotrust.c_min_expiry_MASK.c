
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct packed_rrset_data {size_t count; size_t rrsig_count; int * rr_len; int * rr_data; } ;
struct module_env {scalar_t__* now; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static time_t
FUNC_1(struct module_env* VAR_0, struct packed_rrset_data* VAR_1)
{
 size_t VAR_2;
 int32_t VAR_3, VAR_4 = 15 * 24 * 3600;
 for(VAR_2=VAR_1->count; VAR_2<VAR_1->count+VAR_1->rrsig_count; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1->rr_data[VAR_2], VAR_1->rr_len[VAR_2]);
  if((int32_t)VAR_3 - (int32_t)*VAR_0->now > 0) {
   VAR_3 -= (int32_t)*VAR_0->now;
   if(VAR_3 < VAR_4)
    VAR_4 = VAR_3;
  }
 }
 return (time_t)VAR_4;
}
