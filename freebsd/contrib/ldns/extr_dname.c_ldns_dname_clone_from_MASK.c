
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (size_t,size_t*) ;
 size_t* FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 size_t FUNC_4 (int const*) ;

ldns_rdf *
FUNC_5(const ldns_rdf *VAR_1, uint16_t VAR_2)
{
 uint8_t *VAR_3;
 uint8_t VAR_4;
 size_t VAR_5;

 if (!VAR_1 ||
     FUNC_3(VAR_1) != VAR_0 ||
     FUNC_0(VAR_1) < VAR_2) {
  return ((void*)0);
 }

 VAR_3 = FUNC_2(VAR_1);
 VAR_5 = FUNC_4(VAR_1);
 while (VAR_2 > 0) {
  VAR_4 = VAR_3[0] + 1;
  VAR_3 += VAR_4;
  if (VAR_5 < VAR_4) {

   return ((void*)0);
  }
  VAR_5 -= VAR_4;
  VAR_2--;
 }

 return FUNC_1(VAR_5, VAR_3);
}
