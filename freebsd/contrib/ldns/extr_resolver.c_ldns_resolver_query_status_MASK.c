
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_status ;
typedef int ldns_rr_type ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int const ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int const* FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int const*,int ,int ,int ) ;

ldns_status
FUNC_5(ldns_pkt** VAR_1,
  ldns_resolver *VAR_2, const ldns_rdf *VAR_3,
  ldns_rr_type VAR_4, ldns_rr_class VAR_5, uint16_t VAR_6)
{
 ldns_rdf *VAR_7;
 ldns_status VAR_8;

 if (!FUNC_2(VAR_2) || !FUNC_3(VAR_2)) {
  return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }

 VAR_7 = FUNC_0(VAR_3, FUNC_3(VAR_2));
 if (!VAR_7) {
  return VAR_0;
 }
 VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_7);
 return VAR_8;
}
