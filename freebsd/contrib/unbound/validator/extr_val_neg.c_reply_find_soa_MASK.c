
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct ub_packed_rrset_key* FUNC_1(struct reply_info* VAR_1)
{
 size_t VAR_2;
 for(VAR_2=VAR_1->an_numrrsets; VAR_2< VAR_1->an_numrrsets+VAR_1->ns_numrrsets; VAR_2++){
  if(FUNC_0(VAR_1->rrsets[VAR_2]->rk.type) == VAR_0)
   return VAR_1->rrsets[VAR_2];
 }
 return ((void*)0);
}
