
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int const*,int ,int ,int ,int *) ;
 int FUNC_3 (int const*) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

ldns_rdf *
FUNC_6(const ldns_rr *VAR_0, const ldns_rdf *VAR_1)
{
 uint8_t VAR_2;
 uint16_t VAR_3;
 uint8_t VAR_4;
 uint8_t *VAR_5 = 0;

 ldns_rdf *VAR_6;

 VAR_2 = FUNC_1(VAR_0);
 VAR_4 = FUNC_5(VAR_0);
 VAR_5 = FUNC_4(VAR_0);
 VAR_3 = FUNC_3(VAR_0);

 VAR_6 = FUNC_2(VAR_1,
         VAR_2,
         VAR_3,
         VAR_4,
         VAR_5);

 FUNC_0(VAR_5);
 return VAR_6;
}
