
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ int32_t ;


 int const VAR_0 ;
 int VAR_1 ;
 int const FUNC_0 (scalar_t__) ;

void
FUNC_1(uint16_t VAR_2,
 const uint16_t *VAR_3, uint16_t VAR_4,
 uint16_t *VAR_5, uint16_t *VAR_6)
{
 const uint16_t VAR_7 = *(VAR_3 + VAR_4 - 1);
 uint32_t VAR_8 = VAR_2 * VAR_1;
 int VAR_9;





 if (VAR_8 < (uint32_t)(*VAR_3 * VAR_1 - VAR_0)) {
  *VAR_5 = *VAR_3;
  *VAR_6 = *VAR_3;
  return;
 }





 if (VAR_8 > (uint32_t)(VAR_7 * VAR_1 + VAR_0)) {
  *VAR_5 = VAR_7;
  *VAR_6 = VAR_7;
  return;
 }


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {




  if (FUNC_0(VAR_3[VAR_9] * VAR_1 - (int32_t) VAR_8) < VAR_0) {
   *VAR_5 = VAR_3[VAR_9];
   *VAR_6 = VAR_3[VAR_9];
   return;
  }





  if (VAR_8 < (uint32_t)(VAR_3[VAR_9 + 1] * VAR_1 - VAR_0)) {
   *VAR_5 = VAR_3[VAR_9];
   *VAR_6 = VAR_3[VAR_9 + 1];
   return;
  }
 }
}
