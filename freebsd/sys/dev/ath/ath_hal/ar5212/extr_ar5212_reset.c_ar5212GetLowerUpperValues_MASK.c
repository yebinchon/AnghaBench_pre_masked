
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

void
FUNC_2(uint16_t VAR_3, uint16_t *VAR_4, uint16_t VAR_5,
                          uint16_t *VAR_6, uint16_t *VAR_7)
{
 uint32_t VAR_8 = VAR_3 * VAR_2;
 uint16_t *VAR_9 = VAR_4+VAR_5;




 if (VAR_8 < (uint32_t)(VAR_4[0] * VAR_2 - VAR_1)) {
  *VAR_6 = *VAR_7 = VAR_4[0];
  return;
 }
 if (VAR_8 > (uint32_t)(VAR_9[-1] * VAR_2 + VAR_1)) {
  *VAR_6 = *VAR_7 = VAR_9[-1];
  return;
 }


 for (; VAR_4 < VAR_9; VAR_4++) {




  if (FUNC_1(VAR_4[0] * VAR_2, VAR_8) < VAR_1) {
   *VAR_6 = *VAR_7 = VAR_4[0];
   return;
  }




  if (VAR_8 < (uint32_t)(VAR_4[1] * VAR_2 - VAR_1)) {
   *VAR_6 = VAR_4[0];
   *VAR_7 = VAR_4[1];
   return;
  }
 }
 FUNC_0(VAR_0);
}
