
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct packed_rrset_data {scalar_t__ rrsig_count; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {size_t an_numrrsets; size_t ns_numrrsets; TYPE_1__** rrsets; } ;
struct TYPE_4__ {TYPE_3__ entry; } ;



int
FUNC_0(struct dns_msg* VAR_0)
{
 size_t VAR_1;
 if(!VAR_0 || !VAR_0->rep)
  return 0;
 for(VAR_1=0; VAR_1<VAR_0->rep->an_numrrsets + VAR_0->rep->ns_numrrsets; VAR_1++) {
  if(((struct packed_rrset_data*)VAR_0->rep->rrsets[VAR_1]->
   entry.data)->rrsig_count > 0)
   return 1;
 }


 return 0;
}
