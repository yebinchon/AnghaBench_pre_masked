
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int const*) ;
 int * FUNC_2 (int const*,int ) ;

ldns_status
FUNC_3(ldns_resolver *VAR_3, const ldns_rr *VAR_4)
{
 ldns_rdf *VAR_5;
 if ((!VAR_4) || (FUNC_1(VAR_4) != VAR_0 &&
   FUNC_1(VAR_4) != VAR_1)) {
  return VAR_2;
 }
 VAR_5 = FUNC_2(VAR_4, 0);
 if (VAR_5) {
  return FUNC_0(VAR_3, VAR_5);
 } else {
  return VAR_2;
 }
}
