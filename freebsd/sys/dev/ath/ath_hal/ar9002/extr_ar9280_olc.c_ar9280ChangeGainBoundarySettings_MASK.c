
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ int8_t ;
typedef int int16_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (size_t,size_t) ;

__attribute__((used)) static int16_t
FUNC_2(struct ath_hal *VAR_2, uint16_t *VAR_3,
    uint16_t VAR_4, uint16_t VAR_5, int8_t VAR_6,
    int16_t *VAR_7)
{
 uint16_t VAR_8;






 if (FUNC_0(VAR_2)) {
  uint16_t VAR_9;

  if (VAR_1 != VAR_6) {

   *VAR_7 = (uint16_t)(VAR_6 - VAR_1);

   *VAR_7 *= 2;



   for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    VAR_3[VAR_8] = (uint16_t)(VAR_3[VAR_8] - *VAR_7);
  }



  VAR_9 = (uint16_t)(VAR_0 - VAR_5);

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
   VAR_3[VAR_8] = (uint16_t)FUNC_1(VAR_9, VAR_3[VAR_8]);
 }

 return *VAR_7;
}
