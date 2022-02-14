
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_rdf ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int * FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int,int ,int) ;
 int VAR_2 ;

ldns_rdf *
FUNC_8(const ldns_rdf *VAR_3, const ldns_rdf *VAR_4)
{
 ldns_rdf *VAR_5;
 uint16_t VAR_6;
 VAR_2 *VAR_1;
 uint16_t VAR_7;

 if (FUNC_4(VAR_3) != VAR_0 ||
   FUNC_4(VAR_4) != VAR_0) {
  return ((void*)0);
 }




 VAR_7 = FUNC_6(VAR_3);
 if (FUNC_2(VAR_3)) {
  VAR_7--;
 }


 VAR_6 = VAR_7 + FUNC_6(VAR_4);
 VAR_1 = FUNC_1(VAR_2, VAR_6);
 if (!VAR_1) {
  return ((void*)0);
 }


 FUNC_7(VAR_1, FUNC_3(VAR_3), VAR_7);
 FUNC_7(VAR_1 + VAR_7, FUNC_3(VAR_4), FUNC_6(VAR_4));

 VAR_5 = FUNC_5(VAR_0, VAR_6, VAR_1);

 FUNC_0(VAR_1);
 return VAR_5;
}
