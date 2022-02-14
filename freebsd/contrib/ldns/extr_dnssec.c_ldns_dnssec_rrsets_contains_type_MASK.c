
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ldns_rr_type ;
struct TYPE_3__ {scalar_t__ type; struct TYPE_3__* next; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;



int
FUNC_0(const ldns_dnssec_rrsets *VAR_0,
                                 ldns_rr_type VAR_1)
{
 const ldns_dnssec_rrsets *VAR_2 = VAR_0;
 while (VAR_2) {
  if (VAR_2->type == VAR_1) {
   return 1;
  }
  VAR_2 = VAR_2->next;
 }
 return 0;
}
