
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_resolver ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (int const*,size_t) ;
 size_t FUNC_2 (int const*) ;

ldns_status
FUNC_3(ldns_resolver *VAR_2, const ldns_rr_list *VAR_3)
{
 ldns_rr *VAR_4;
 ldns_status VAR_5;
 size_t VAR_6;

 VAR_5 = VAR_1;
 if (VAR_3) {
  for(VAR_6 = 0; VAR_6 < FUNC_2(VAR_3); VAR_6++) {
   VAR_4 = FUNC_1(VAR_3, VAR_6);
   if (FUNC_0(VAR_2, VAR_4) != VAR_1) {
    VAR_5 = VAR_0;
    break;
   }
  }
  return VAR_5;
 } else {
  return VAR_0;
 }
}
