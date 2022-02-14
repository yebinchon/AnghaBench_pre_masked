
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct regional {int dummy; } ;
struct dns_msg {TYPE_1__* rep; } ;
struct TYPE_2__ {int rrset_count; struct ub_packed_rrset_key** rrsets; } ;


 int FUNC_0 (struct ub_packed_rrset_key**,struct ub_packed_rrset_key**,int) ;
 void* FUNC_1 (struct regional*,int) ;

__attribute__((used)) static int
FUNC_2(struct regional* VAR_0, struct dns_msg* VAR_1)
{
 if(VAR_1->rep->rrsets == ((void*)0)) {
  VAR_1->rep->rrsets = FUNC_1(VAR_0,
   sizeof(struct ub_packed_rrset_key*)*(VAR_1->rep->rrset_count+1));
  if(!VAR_1->rep->rrsets)
   return 0;
 } else {
  struct ub_packed_rrset_key** VAR_2 = VAR_1->rep->rrsets;
  VAR_1->rep->rrsets = FUNC_1(VAR_0,
   sizeof(struct ub_packed_rrset_key*)*(VAR_1->rep->rrset_count+1));
  if(!VAR_1->rep->rrsets)
   return 0;
  FUNC_0(VAR_1->rep->rrsets, VAR_2,
   sizeof(struct ub_packed_rrset_key*)*VAR_1->rep->rrset_count);
 }
 return 1;
}
