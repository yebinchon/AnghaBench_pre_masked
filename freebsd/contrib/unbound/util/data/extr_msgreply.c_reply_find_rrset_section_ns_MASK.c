
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {size_t dname_len; int dname; int rrset_class; int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

struct ub_packed_rrset_key* FUNC_2(struct reply_info* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 size_t VAR_5;
 for(VAR_5=VAR_0->an_numrrsets; VAR_5<VAR_0->an_numrrsets+VAR_0->ns_numrrsets; VAR_5++) {
  struct ub_packed_rrset_key* VAR_6 = VAR_0->rrsets[VAR_5];
  if(FUNC_0(VAR_6->rk.type) == VAR_3 &&
   FUNC_0(VAR_6->rk.rrset_class) == VAR_4 &&
   VAR_2 == VAR_6->rk.dname_len &&
   FUNC_1(VAR_1, VAR_6->rk.dname) == 0) {
   return VAR_6;
  }
 }
 return ((void*)0);
}
