
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (int,int*) ;
 int* FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;

ldns_rdf *
FUNC_5(const ldns_rdf *VAR_1)
{
 uint8_t VAR_2;
 ldns_rdf *VAR_3;

 if (!VAR_1) {
  return ((void*)0);
 }

 if (FUNC_3(VAR_1) != VAR_0) {
  return ((void*)0);
 }
 if (FUNC_0(VAR_1) == 0) {

  return ((void*)0);
 }

 VAR_2 = FUNC_2(VAR_1)[0];

 VAR_3 = FUNC_1(FUNC_4(VAR_1) - VAR_2 - 1,
   FUNC_2(VAR_1) + VAR_2 + 1);
 return VAR_3;
}
