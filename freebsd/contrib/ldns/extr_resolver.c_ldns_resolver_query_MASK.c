
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_rr_type ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,int *,int const*,int ,int ,int ) ;

ldns_pkt *
FUNC_2(const ldns_resolver *VAR_1, const ldns_rdf *VAR_2,
 ldns_rr_type VAR_3, ldns_rr_class VAR_4, uint16_t VAR_5)
{
 ldns_pkt* VAR_6 = ((void*)0);
 if (FUNC_1(&VAR_6, (ldns_resolver *)VAR_1,
    VAR_2, VAR_3, VAR_4, VAR_5) != VAR_0) {
  FUNC_0(VAR_6);
 }
 return VAR_6;
}
