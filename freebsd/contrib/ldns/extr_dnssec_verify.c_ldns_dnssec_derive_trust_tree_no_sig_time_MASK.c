
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int time_t ;
typedef int ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
struct TYPE_9__ {int rr; } ;
typedef TYPE_1__ ldns_dnssec_trust_tree ;
struct TYPE_10__ {TYPE_6__* parent; int packet_nodata; int packet_qtype; int packet_rcode; } ;
typedef TYPE_2__ ldns_dnssec_data_chain ;
struct TYPE_11__ {int signatures; int * rrset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_6__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,size_t) ;
 size_t FUNC_6 (int *) ;

void
FUNC_7(
  ldns_dnssec_trust_tree *VAR_4,
  ldns_dnssec_data_chain *VAR_5,
  time_t VAR_6)
{
 size_t VAR_7;
 ldns_rr_list *VAR_8;
 ldns_rr *VAR_9;
 ldns_dnssec_trust_tree *VAR_10;
 ldns_status VAR_11;

 if (VAR_5->parent && VAR_5->parent->rrset) {
  VAR_8 = VAR_5->parent->rrset;

  if (VAR_8 && FUNC_6(VAR_8) > 0) {
   if (FUNC_4(FUNC_5(VAR_8, 0)) ==
       VAR_1) {
    VAR_11 = FUNC_3(
             VAR_4->rr,
         VAR_8,
         VAR_5->parent->signatures,
         VAR_5->packet_rcode,
         VAR_5->packet_qtype,
         VAR_5->packet_nodata);
   } else if (FUNC_4(FUNC_5(VAR_8, 0)) ==
      VAR_0) {
    VAR_11 = FUNC_2(
             VAR_4->rr,
         VAR_8,
         VAR_5->parent->signatures);
   } else {

    VAR_11 = VAR_3;
   }
  } else {
   VAR_11 = VAR_2;
  }
  for (VAR_7 = 0; VAR_7 < FUNC_6(VAR_8); VAR_7++) {
   VAR_9 = FUNC_5(VAR_8, VAR_7);
   VAR_10 =
    FUNC_0(
      VAR_5->parent,
      VAR_9,
      VAR_6);
   (void) FUNC_1(VAR_4,
               VAR_10, ((void*)0), VAR_11);
  }
 }
}
