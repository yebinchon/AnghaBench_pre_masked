
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct dns_msg {TYPE_1__* rep; } ;
struct TYPE_2__ {scalar_t__ an_numrrsets; int rrsets; int rrset_count; } ;


 int FUNC_0 (int,int,int) ;

void
FUNC_1(struct dns_msg* VAR_0)
{
 if(VAR_0->rep->an_numrrsets == 0)
  return;

 FUNC_0(VAR_0->rep->rrsets, VAR_0->rep->rrsets+VAR_0->rep->an_numrrsets,
  sizeof(struct ub_packed_rrset_key*) *
  (VAR_0->rep->rrset_count-VAR_0->rep->an_numrrsets));
 VAR_0->rep->rrset_count -= VAR_0->rep->an_numrrsets;
 VAR_0->rep->an_numrrsets = 0;
}
