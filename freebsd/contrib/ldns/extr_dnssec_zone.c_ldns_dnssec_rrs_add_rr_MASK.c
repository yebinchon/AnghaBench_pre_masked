
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ldns_status ;
typedef int ldns_rr ;
struct TYPE_4__ {struct TYPE_4__* next; int * rr; } ;
typedef TYPE_1__ ldns_dnssec_rrs ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *,int *) ;

ldns_status
FUNC_2(ldns_dnssec_rrs *VAR_2, ldns_rr *VAR_3)
{
 int VAR_4;
 ldns_dnssec_rrs *VAR_5;
 if (!VAR_2 || !VAR_3) {
  return VAR_0;
 }



 VAR_4 = FUNC_1(VAR_2->rr, VAR_3);
 if (VAR_4 < 0) {
  if (VAR_2->next) {
   return FUNC_2(VAR_2->next, VAR_3);
  } else {
   VAR_5 = FUNC_0();
   VAR_5->rr = VAR_3;
   VAR_2->next = VAR_5;
  }
 } else if (VAR_4 > 0) {


  VAR_5 = FUNC_0();
  VAR_5->rr = VAR_2->rr;
  VAR_5->next = VAR_2->next;
  VAR_2->rr = VAR_3;
  VAR_2->next = VAR_5;
 }

 return VAR_1;
}
