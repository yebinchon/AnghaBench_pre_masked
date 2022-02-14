
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_status ;
typedef int ldns_rr_type ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

ldns_status
FUNC_4(ldns_rdf* VAR_3, ldns_rr_type VAR_4)
{
 uint8_t* VAR_5;
 uint8_t* VAR_6;






 uint8_t VAR_7 = VAR_4 >> 8;
 uint8_t VAR_8 = VAR_4 & 0xff;

 if (! VAR_3) {
  return 0;
 }
 FUNC_0(FUNC_2(VAR_3) == VAR_0);

 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_1(VAR_3) + FUNC_3(VAR_3);




 while (VAR_5 < VAR_6 && VAR_5[0] <= VAR_7) {

  if (VAR_5[0] == VAR_7 && VAR_8 / 8 < VAR_5[1] &&
    VAR_5 + VAR_5[1] + 2 <= VAR_6) {

   VAR_5[2 + VAR_8 / 8] |= (0x80 >> (VAR_8 % 8));
   return VAR_1;
  }
  VAR_5 += VAR_5[1] + 2;
 }
 return VAR_2;
}
