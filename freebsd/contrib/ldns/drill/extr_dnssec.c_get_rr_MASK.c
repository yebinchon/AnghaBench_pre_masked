
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int **,int *,int *,int ,int ,int ) ;

ldns_rr_list *
FUNC_4(ldns_resolver *VAR_2, ldns_rdf *VAR_3, ldns_rr_type VAR_4, ldns_rr_class VAR_5)
{

 ldns_pkt *VAR_6;
 ldns_rr_list *VAR_7;

 VAR_6 = FUNC_1();
 VAR_7 = ((void*)0);

 if (FUNC_3(&VAR_6, VAR_2, VAR_3, VAR_4, VAR_5, 0) == VAR_1) {
  VAR_7 = FUNC_2(VAR_6, VAR_4, VAR_0);
 }
 FUNC_0(VAR_6);
 return VAR_7;
}
