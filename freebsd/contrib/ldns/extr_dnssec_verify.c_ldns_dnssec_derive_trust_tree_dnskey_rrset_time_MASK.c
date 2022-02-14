
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int time_t ;
typedef int ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
struct TYPE_8__ {int * rrset; int * rr; } ;
typedef TYPE_1__ ldns_dnssec_trust_tree ;
struct TYPE_9__ {int * rrset; } ;
typedef TYPE_2__ ldns_dnssec_data_chain ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,size_t) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,int ) ;

void
FUNC_9(
  ldns_dnssec_trust_tree *VAR_1,
  ldns_dnssec_data_chain *VAR_2,
  ldns_rr *VAR_3,
  ldns_rr *VAR_4,
  time_t VAR_5)
{
 size_t VAR_6;
 ldns_rr_list *VAR_7 = VAR_2->rrset;
 ldns_dnssec_trust_tree *VAR_8;
 ldns_rr *VAR_9;
 uint16_t VAR_10;
 ldns_status VAR_11;

 VAR_10 = FUNC_3(FUNC_7(VAR_4));

 for (VAR_6 = 0; VAR_6 < FUNC_6(VAR_7); VAR_6++) {
  VAR_9 = FUNC_5(VAR_7, VAR_6);
  if (VAR_9 != VAR_3 &&
      FUNC_4(VAR_9) == VAR_0) {
   if (FUNC_0(VAR_9) == VAR_10
       ) {
    VAR_8 = FUNC_2();
    VAR_8->rr = VAR_9;
    VAR_8->rrset = VAR_7;
    VAR_11 = FUNC_8(
      VAR_7, VAR_4,
      VAR_9, VAR_5);
    (void) FUNC_1(VAR_1,
                VAR_8, VAR_4, VAR_11);
   }
  }
 }
}
