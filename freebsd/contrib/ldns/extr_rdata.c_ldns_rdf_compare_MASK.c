
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int ldns_rdf ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;

int
FUNC_2(const ldns_rdf *VAR_0, const ldns_rdf *VAR_1)
{
 uint16_t VAR_2, VAR_3, VAR_4;
 uint8_t *VAR_5, *VAR_6;


 if (!VAR_0 && !VAR_1) {
  return 0;
 }
 if (!VAR_0 || !VAR_1) {
  return -1;
 }
 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 < VAR_3) {
  return -1;
 } else if (VAR_2 > VAR_3) {
  return +1;
 } else {
  VAR_5 = (uint8_t*)FUNC_0(VAR_0);
  VAR_6 = (uint8_t*)FUNC_0(VAR_1);
  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   if (VAR_5[VAR_4] < VAR_6[VAR_4]) {
    return -1;
   } else if (VAR_5[VAR_4] > VAR_6[VAR_4]) {
    return +1;
   }
  }
 }
 return 0;
}
