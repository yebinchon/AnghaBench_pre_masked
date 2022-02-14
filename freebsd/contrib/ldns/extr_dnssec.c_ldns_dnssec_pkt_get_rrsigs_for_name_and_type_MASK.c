
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
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int const*,int const*,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,int ) ;

ldns_rr_list *
FUNC_6(const ldns_pkt *VAR_4,
         const ldns_rdf *VAR_5,
         ldns_rr_type VAR_6)
{
 uint16_t VAR_7;
 ldns_rr_list *VAR_8;
 ldns_rr_list *VAR_9;
 ldns_rdf *VAR_10;

 VAR_8 = FUNC_1(VAR_4,
          VAR_5,
          VAR_2,
          VAR_3
          );

 VAR_7 = FUNC_0(VAR_6);
 VAR_10 = FUNC_3(VAR_1, VAR_0, &VAR_7);
 VAR_9 = FUNC_5(VAR_8, VAR_10, 0);

 FUNC_2(VAR_10);
 FUNC_4(VAR_8);

 return VAR_9;

}
