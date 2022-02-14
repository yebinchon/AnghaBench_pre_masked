
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int const*,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,int ) ;

ldns_rr_list *
FUNC_6(const ldns_pkt *VAR_3, ldns_rr_type VAR_4)
{
 uint16_t VAR_5;
 ldns_rr_list *VAR_6;
 ldns_rr_list *VAR_7;
 ldns_rdf *VAR_8;

 VAR_6 = FUNC_1(VAR_3,
                                 VAR_1,
                                 VAR_2
         );

 VAR_5 = FUNC_0(VAR_4);
 VAR_8 = FUNC_3(VAR_0,
      2,
      &VAR_5);
 VAR_7 = FUNC_5(VAR_6, VAR_8, 0);

 FUNC_2(VAR_8);
 FUNC_4(VAR_6);

 return VAR_7;

}
