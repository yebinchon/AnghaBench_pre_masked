
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_rr_type ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

bool
FUNC_4(const ldns_rdf* VAR_1, ldns_rr_type VAR_2)
{
 uint8_t* VAR_3;
 uint8_t* VAR_4;






 uint8_t VAR_5 = VAR_2 >> 8;
 uint8_t VAR_6 = VAR_2 & 0xff;

 if (! VAR_1) {
  return 0;
 }
 FUNC_0(FUNC_2(VAR_1) == VAR_0);

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_1(VAR_1) + FUNC_3(VAR_1);




 while (VAR_3 < VAR_4 && VAR_3[0] <= VAR_5) {

  if (VAR_3[0] == VAR_5 && VAR_6 / 8 < VAR_3[1] &&
    VAR_3 + VAR_3[1] + 2 <= VAR_4) {

   return VAR_3[2 + VAR_6 / 8] & (0x80 >> (VAR_6 % 8));
  }
  VAR_3 += VAR_3[1] + 2;
 }
 return 0;
}
