
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*) ;
 int * FUNC_5 (int *,int *,int ,int ,int) ;

ldns_rr_list *
FUNC_6(ldns_resolver *VAR_5, const ldns_rdf *VAR_6,
  ldns_rr_class VAR_7, uint16_t VAR_8)
{
 ldns_pkt *VAR_9;
 ldns_rr_list *VAR_10;
 ldns_rdf *VAR_11;

 VAR_10 = ((void*)0);

 if (!VAR_5 || !VAR_6) {
  return ((void*)0);
 }

 if (FUNC_4(VAR_6) != VAR_1 &&
   FUNC_4(VAR_6) != VAR_2) {
  return ((void*)0);
 }

 VAR_11 = FUNC_2(VAR_6);


 VAR_9 = FUNC_5(VAR_5, VAR_11, VAR_3, VAR_7, VAR_8 | VAR_0);
 FUNC_3(VAR_11);
 if (VAR_9) {

  VAR_10 = FUNC_1(VAR_9,
    VAR_3, VAR_4);
  FUNC_0(VAR_9);
 }
 return VAR_10;
}
