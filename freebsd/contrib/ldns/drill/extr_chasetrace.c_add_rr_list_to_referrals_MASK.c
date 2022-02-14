
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_dnssec_zone ;
struct TYPE_4__ {TYPE_2__* rrs; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;
struct TYPE_5__ {int rr; struct TYPE_5__* next; } ;
typedef TYPE_2__ ldns_dnssec_rrs ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(
    ldns_dnssec_zone *VAR_3, ldns_rr_list *VAR_4)
{
 size_t VAR_5;
 ldns_rr *VAR_6;
 ldns_dnssec_rrsets *VAR_7;
 ldns_dnssec_rrs *VAR_8;

 for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_4); VAR_5++) {
  VAR_6 = FUNC_4(VAR_4, VAR_5);

  VAR_7 = FUNC_1(
      VAR_3, FUNC_6(VAR_6), FUNC_3(VAR_6));
  if (VAR_7) {
   for (VAR_8 = VAR_7->rrs; VAR_8; VAR_8 = VAR_8->next)
    if (FUNC_2(VAR_6, VAR_8->rr) == 0)
     break;
   if (VAR_8) continue;
  }
  if (FUNC_3(VAR_6) == VAR_0 && VAR_2 != -1)
   FUNC_7(VAR_1, VAR_6);
  (void) FUNC_0(VAR_3, VAR_6);
 }
}
