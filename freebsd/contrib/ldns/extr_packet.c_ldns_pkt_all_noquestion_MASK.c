
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_pkt ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

ldns_rr_list *
FUNC_5(const ldns_pkt *VAR_0)
{
 ldns_rr_list *VAR_1, *VAR_2;

 VAR_1 = FUNC_3(
   FUNC_1(VAR_0),
   FUNC_2(VAR_0));
 VAR_2 = FUNC_3(VAR_1,
   FUNC_0(VAR_0));

 FUNC_4(VAR_1);
 return VAR_2;
}
