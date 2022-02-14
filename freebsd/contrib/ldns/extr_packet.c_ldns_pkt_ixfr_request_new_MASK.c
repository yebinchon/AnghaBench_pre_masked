
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ,int ,int ,int *) ;

ldns_pkt *
FUNC_2(ldns_rdf *VAR_1, ldns_rr_class VAR_2,
 uint16_t VAR_3, ldns_rr* VAR_4)
{
 ldns_rr* VAR_5 = VAR_4;
 if (!VAR_5) {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
 }
 return FUNC_1(VAR_1, VAR_0,
  VAR_2, VAR_3, VAR_5);
}
