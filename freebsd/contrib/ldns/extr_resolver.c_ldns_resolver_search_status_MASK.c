
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_type ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
struct TYPE_10__ {int member_0; void* member_2; int member_1; } ;
typedef TYPE_1__ const ldns_rdf ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int **,int *,TYPE_1__ const*,int ,int ,int ) ;
 TYPE_1__ const** FUNC_7 (int *) ;
 size_t FUNC_8 (int *) ;

ldns_status
FUNC_9(ldns_pkt** VAR_3,
  ldns_resolver *VAR_4, const ldns_rdf *VAR_5,
  ldns_rr_type VAR_6, ldns_rr_class VAR_7, uint16_t VAR_8)
{
 ldns_rdf *VAR_9;
 ldns_rdf **VAR_10;
 size_t VAR_11;
 ldns_status VAR_12 = VAR_2;
 ldns_rdf VAR_13 = { 1, VAR_1, (void *)"" };

 if (FUNC_0(VAR_5)) {

  return FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 } else if (FUNC_5(VAR_4)) {
  VAR_10 = FUNC_7(VAR_4);
  for (VAR_11 = 0; VAR_11 <= FUNC_8(VAR_4); VAR_11++) {
   if (VAR_11 == FUNC_8(VAR_4)) {
    VAR_9 = FUNC_1(VAR_5,
      &VAR_13);
   } else {
    VAR_9 = FUNC_1(VAR_5,
      VAR_10[VAR_11]);
   }

   VAR_12 = FUNC_6(VAR_3, VAR_4,
     VAR_9, VAR_6, VAR_7, VAR_8);
   FUNC_4(VAR_9);
   if (VAR_3 && *VAR_3) {
    if (VAR_12 == VAR_2 &&
      FUNC_3(*VAR_3) ==
      VAR_0) {

     return VAR_2;
    }
    FUNC_2(*VAR_3);
    *VAR_3 = ((void*)0);
   }
  }
 }
 return VAR_12;
}
