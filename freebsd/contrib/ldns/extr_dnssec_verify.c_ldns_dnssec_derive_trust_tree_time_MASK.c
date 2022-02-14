
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int time_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
struct TYPE_14__ {int * rrset; int * rr; } ;
typedef TYPE_1__ ldns_dnssec_trust_tree ;
struct TYPE_15__ {scalar_t__ parent; int * signatures; int * rrset; } ;
typedef TYPE_2__ ldns_dnssec_data_chain ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int *,int *,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int *,int ) ;
 TYPE_1__* FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,size_t) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

ldns_dnssec_trust_tree *
FUNC_10(
  ldns_dnssec_data_chain *VAR_1,
  ldns_rr *VAR_2,
  time_t VAR_3
  )
{
 ldns_rr_list *VAR_4;
 ldns_rr_list *VAR_5;
 ldns_rr *VAR_6 = ((void*)0);
 ldns_rr *VAR_7;
 size_t VAR_8, VAR_9;

 ldns_dnssec_trust_tree *VAR_10 = FUNC_5();
        if(!VAR_10)
                return ((void*)0);

 if (VAR_1 && VAR_1->rrset) {
  VAR_4 = VAR_1->rrset;

  VAR_5 = VAR_1->signatures;

  if (VAR_2) {
   VAR_6 = VAR_2;
  }

  if (!VAR_6 && FUNC_8(VAR_4) > 0) {
   VAR_6 = FUNC_7(VAR_4, 0);
  }

  if (VAR_6) {
   VAR_10->rr = VAR_6;
   VAR_10->rrset = VAR_4;
   if (VAR_5) {
    for (VAR_8 = 0; VAR_8 < FUNC_8(VAR_5); VAR_8++) {

     VAR_7 = FUNC_7(VAR_5, VAR_8);

     if (FUNC_6(VAR_6) == VAR_0) {
      if (FUNC_0(FUNC_9(VAR_7),
             FUNC_9(VAR_6)))
       {


        for (VAR_9 = 0;
             VAR_9 < FUNC_8(VAR_4) &&
          FUNC_0(FUNC_9(VAR_7),FUNC_9(VAR_6)) != 0;
             VAR_9++) {
         VAR_6 = FUNC_7(VAR_4, VAR_9);

        }
        if (FUNC_0(FUNC_9(VAR_7),
               FUNC_9(VAR_6)))
         {
          break;
         }
       }

     }

     if (VAR_1->parent) {
      FUNC_4(
          VAR_10,
          VAR_1,
          VAR_7,
          VAR_3);
     }


     FUNC_1(
         VAR_10,
         VAR_1,
         VAR_6,
         VAR_7,
         VAR_3);
    }

    FUNC_2(
      VAR_10, VAR_1,
      VAR_6, VAR_3);
   } else {



    FUNC_3(
     VAR_10, VAR_1, VAR_3);
   }
  }
 }

 return VAR_10;
}
