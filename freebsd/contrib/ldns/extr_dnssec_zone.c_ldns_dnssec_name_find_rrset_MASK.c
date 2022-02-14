
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ldns_rr_type ;
struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* next; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;
struct TYPE_6__ {TYPE_1__* rrsets; } ;
typedef TYPE_2__ ldns_dnssec_name ;



ldns_dnssec_rrsets *
FUNC_0(const ldns_dnssec_name *VAR_0,
        ldns_rr_type VAR_1) {
 ldns_dnssec_rrsets *VAR_2;

 VAR_2 = VAR_0->rrsets;
 while (VAR_2) {
  if (VAR_2->type == VAR_1) {
   return VAR_2;
  } else {
   VAR_2 = VAR_2->next;
  }
 }
 return ((void*)0);
}
