
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 size_t* FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 size_t FUNC_2 (int const*) ;

uint8_t
FUNC_3(const ldns_rdf *VAR_1)
{
        uint16_t VAR_2;
        uint16_t VAR_3;
        uint8_t VAR_4;
        size_t VAR_5;

 if (!VAR_1) {
  return 0;
 }

 VAR_4 = 0;
 VAR_2 = 0;
 VAR_5 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_1) != VAR_0) {
  return 0;
 } else {
  VAR_3 = FUNC_0(VAR_1)[VAR_2];


  if (1 == VAR_5) {
   return 0;
  } else {
   while ((VAR_3 > 0) && VAR_2 < VAR_5) {
    VAR_2++;
    VAR_2 += VAR_3;
    VAR_3 = FUNC_0(VAR_1)[VAR_2];
    VAR_4++;
   }
  }
 }
 return VAR_4;
}
