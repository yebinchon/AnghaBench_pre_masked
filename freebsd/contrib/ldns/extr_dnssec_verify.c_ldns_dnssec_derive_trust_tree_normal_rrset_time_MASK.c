
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int time_t ;
typedef int ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
struct TYPE_11__ {size_t parent_count; TYPE_1__** parents; } ;
typedef TYPE_2__ ldns_dnssec_trust_tree ;
struct TYPE_12__ {TYPE_7__* parent; int rrset; } ;
typedef TYPE_3__ ldns_dnssec_data_chain ;
struct TYPE_13__ {int * rrset; } ;
struct TYPE_10__ {int * rr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_7__*,int *,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *,size_t) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int *,int ) ;

void
FUNC_16(
  ldns_dnssec_trust_tree *VAR_3,
  ldns_dnssec_data_chain *VAR_4,
  ldns_rr *VAR_5,
  time_t VAR_6)
{
 size_t VAR_7, VAR_8;
 ldns_rr_list *VAR_9 = FUNC_7(VAR_4->rrset);
 ldns_dnssec_trust_tree *VAR_10;
 ldns_rr *VAR_11;
 uint16_t VAR_12;
 ldns_rr_list *VAR_13 = ((void*)0);
 ldns_status VAR_14;

 VAR_12 = FUNC_5(FUNC_14(VAR_5));

 for (VAR_8 = 0; VAR_8 < FUNC_11(VAR_4->parent->rrset); VAR_8++) {
  VAR_11 = FUNC_10(VAR_4->parent->rrset, VAR_8);
  if (FUNC_6(VAR_11) == VAR_0) {
   if (FUNC_1(VAR_11) == VAR_12) {


    if (VAR_9 && FUNC_11(VAR_9) > 0) {
     VAR_13 = VAR_9;
     if (FUNC_6(FUNC_10(VAR_9, 0))
         == VAR_1 ||
         FUNC_6(FUNC_10(VAR_9, 0))
         == VAR_2) {


      FUNC_12(VAR_9);
      FUNC_0(VAR_13 == VAR_9);
      VAR_13 = FUNC_9(VAR_9);


      while (VAR_13 &&
             FUNC_11(VAR_9) > 0 &&
             FUNC_2(
        FUNC_13(FUNC_10(
                  VAR_13, 0)),
        FUNC_13(VAR_5)) != 0) {
       FUNC_8(VAR_13);
       VAR_13 =
        FUNC_9(VAR_9);
      }
     }
     VAR_14 = FUNC_15(
       VAR_13,
       VAR_5,
       VAR_11,
       VAR_6);
     if (VAR_13 && VAR_13 != VAR_9
       ) {
      FUNC_8(
        VAR_13);
      VAR_13 = ((void*)0);
     }

     for (VAR_7 = 0; VAR_7 < VAR_3->parent_count; VAR_7++) {
      if (VAR_11 == VAR_3->parents[VAR_7]->rr) {
       goto done;
      }
     }

     VAR_10 =
      FUNC_3(
        VAR_4->parent,
                      VAR_11,
        VAR_6);
     (void)FUNC_4(VAR_3,
                VAR_10,
                VAR_5,
                VAR_14);
    }
   }
  }
 }
 done:
 FUNC_8(VAR_9);
}
