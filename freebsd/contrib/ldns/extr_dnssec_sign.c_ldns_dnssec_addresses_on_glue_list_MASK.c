
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ldns_status ;
typedef int ldns_rr_list ;
struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* next; TYPE_2__* rrs; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;
struct TYPE_5__ {scalar_t__ rr; struct TYPE_5__* next; } ;
typedef TYPE_2__ ldns_dnssec_rrs ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static ldns_status
FUNC_1(
  ldns_dnssec_rrsets *VAR_4,
  ldns_rr_list *VAR_5)
{
 ldns_dnssec_rrs *VAR_6;
 while (VAR_4) {
  if (VAR_4->type == VAR_0
    || VAR_4->type == VAR_1) {
   for (VAR_6 = VAR_4->rrs;
     VAR_6;
     VAR_6 = VAR_6->next) {
    if (VAR_6->rr) {
     if (!FUNC_0(VAR_5,
       VAR_6->rr)) {
      return VAR_2;





     }
    }
   }
  }
  VAR_4 = VAR_4->next;
 }
 return VAR_3;
}
