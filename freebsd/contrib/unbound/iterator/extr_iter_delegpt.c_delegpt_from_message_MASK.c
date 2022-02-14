
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct regional {int dummy; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct delegpt {int has_parent_side_NS; } ;
struct TYPE_4__ {size_t an_numrrsets; size_t ns_numrrsets; size_t rrset_count; struct ub_packed_rrset_key** rrsets; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_1 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 struct delegpt* FUNC_2 (struct regional*) ;
 int FUNC_3 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_4 (struct delegpt*,struct regional*,int ) ;
 struct ub_packed_rrset_key* FUNC_5 (TYPE_2__*,size_t,size_t) ;
 scalar_t__ FUNC_6 (int ) ;

struct delegpt*
FUNC_7(struct dns_msg* VAR_2, struct regional* VAR_3)
{
 struct ub_packed_rrset_key* VAR_4 = ((void*)0);
 struct delegpt* VAR_5;
 size_t VAR_6;

 VAR_4 = FUNC_5(VAR_2->rep, VAR_2->rep->an_numrrsets,
  VAR_2->rep->an_numrrsets+VAR_2->rep->ns_numrrsets);



 if(!VAR_4)
  VAR_4 = FUNC_5(VAR_2->rep, 0, VAR_2->rep->an_numrrsets);




 if(!VAR_4)
  return ((void*)0);


 VAR_5 = FUNC_2(VAR_3);
 if(!VAR_5)
  return ((void*)0);
 VAR_5->has_parent_side_NS = 1;
 if(!FUNC_4(VAR_5, VAR_3, VAR_4->rk.dname))
  return ((void*)0);
 if(!FUNC_3(VAR_5, VAR_3, VAR_4, 0))
  return ((void*)0);


 for(VAR_6=0; VAR_6<VAR_2->rep->rrset_count; VAR_6++) {
  struct ub_packed_rrset_key* VAR_7 = VAR_2->rep->rrsets[VAR_6];

  if(VAR_2->rep->an_numrrsets <= VAR_6 &&
   VAR_6 < (VAR_2->rep->an_numrrsets+VAR_2->rep->ns_numrrsets))
   continue;

  if(FUNC_6(VAR_7->rk.type) == VAR_0) {
   if(!FUNC_0(VAR_5, VAR_3, VAR_7, 0))
    return ((void*)0);
  } else if(FUNC_6(VAR_7->rk.type) == VAR_1) {
   if(!FUNC_1(VAR_5, VAR_3, VAR_7, 0))
    return ((void*)0);
  }
 }
 return VAR_5;
}
