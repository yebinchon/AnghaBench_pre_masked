
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ldns_status ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr ;
struct TYPE_7__ {scalar_t__ type; TYPE_6__* rrs; TYPE_6__* signatures; struct TYPE_7__* next; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;
struct TYPE_8__ {int * rr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,int *) ;
 void* FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

ldns_status
FUNC_8(ldns_dnssec_rrsets *VAR_3, ldns_rr *VAR_4)
{
 ldns_dnssec_rrsets *VAR_5;
 ldns_rr_type VAR_6;
 bool VAR_7 = 0;
 ldns_status VAR_8 = VAR_2;

 if (!VAR_3 || !VAR_4) {
  return VAR_1;
 }

 VAR_6 = FUNC_6(VAR_4);

 if (VAR_6 == VAR_0) {
  VAR_7 = 1;
  VAR_6 = FUNC_5(FUNC_7(VAR_4));
 }

 if (!VAR_3->rrs && VAR_3->type == 0 && !VAR_3->signatures) {
  if (!VAR_7) {
   VAR_3->rrs = FUNC_1();
   VAR_3->rrs->rr = VAR_4;
   VAR_3->type = VAR_6;
  } else {
   VAR_3->signatures = FUNC_1();
   VAR_3->signatures->rr = VAR_4;
   VAR_3->type = VAR_6;
  }
  return VAR_2;
 }

 if (VAR_6 > FUNC_4(VAR_3)) {
  if (VAR_3->next) {
   VAR_8 = FUNC_8(VAR_3->next, VAR_4);
  } else {
   VAR_5 = FUNC_3(VAR_4);
   VAR_3->next = VAR_5;
  }
 } else if (VAR_6 < FUNC_4(VAR_3)) {


  VAR_5 = FUNC_2();
  VAR_5->rrs = VAR_3->rrs;
  VAR_5->type = VAR_3->type;
  VAR_5->signatures = VAR_3->signatures;
  VAR_5->next = VAR_3->next;
  if (!VAR_7) {
   VAR_3->rrs = FUNC_1();
   VAR_3->rrs->rr = VAR_4;
   VAR_3->signatures = ((void*)0);
  } else {
   VAR_3->rrs = ((void*)0);
   VAR_3->signatures = FUNC_1();
   VAR_3->signatures->rr = VAR_4;
  }
  VAR_3->type = VAR_6;
  VAR_3->next = VAR_5;
 } else {

  if (VAR_7) {
   if (VAR_3->signatures) {
    VAR_8 = FUNC_0(VAR_3->signatures, VAR_4);
   } else {
    VAR_3->signatures = FUNC_1();
    VAR_3->signatures->rr = VAR_4;
   }
  } else {
   if (VAR_3->rrs) {
    VAR_8 = FUNC_0(VAR_3->rrs, VAR_4);
   } else {
    VAR_3->rrs = FUNC_1();
    VAR_3->rrs->rr = VAR_4;
   }
  }
 }

 return VAR_8;
}
