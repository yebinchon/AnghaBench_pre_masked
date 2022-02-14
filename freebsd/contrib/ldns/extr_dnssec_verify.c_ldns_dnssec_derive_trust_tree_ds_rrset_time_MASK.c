
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_dnssec_trust_tree ;
struct TYPE_4__ {TYPE_2__* parent; int * rrset; } ;
typedef TYPE_1__ ldns_dnssec_data_chain ;
struct TYPE_5__ {int * rrset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;

void
FUNC_6(
  ldns_dnssec_trust_tree *VAR_3,
  ldns_dnssec_data_chain *VAR_4,
  ldns_rr *VAR_5,
  time_t VAR_6)
{
 size_t VAR_7, VAR_8;
 ldns_rr_list *VAR_9 = VAR_4->rrset;
 ldns_dnssec_trust_tree *VAR_10;
 ldns_rr *VAR_11;


 if (FUNC_3(VAR_5) == VAR_0 &&
     VAR_4->parent &&
     VAR_4->parent->rrset
     ) {
  for (VAR_7 = 0;
   VAR_7 < FUNC_5(VAR_4->parent->rrset);
   VAR_7++) {
   VAR_11 = FUNC_4(VAR_4->parent->rrset, VAR_7);
   if (FUNC_3(VAR_11) == VAR_1) {
    for (VAR_8 = 0; VAR_8 < FUNC_5(VAR_9); VAR_8++) {
     VAR_5 = FUNC_4(VAR_9, VAR_8);
     if (FUNC_2(VAR_5, VAR_11)) {
      VAR_10 =
       FUNC_0(
           VAR_4->parent,
           VAR_11,
           VAR_6);
      (void) FUNC_1(
                  VAR_3,
                  VAR_10,
                  ((void*)0),
                  VAR_2);
     } else {

     }
    }
   }
  }
 }
}
