
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ int16_t ;
typedef scalar_t__ HAL_BOOL ;


 scalar_t__ VAR_0 ;

uint16_t
FUNC_0(uint16_t VAR_1,
 uint16_t VAR_2, uint16_t VAR_3,
 uint16_t VAR_4, uint16_t VAR_5,
 HAL_BOOL VAR_6)
{
 uint16_t VAR_7;
 int16_t VAR_8;
 uint16_t VAR_9 = VAR_0;


 if ((VAR_4 * VAR_5) == 0)
  return 0;
 if (VAR_6)
  VAR_9 = 1;

 if (VAR_3 != VAR_2) {




  VAR_8 = (VAR_1 - VAR_2) * VAR_0 / (VAR_3 - VAR_2);
  if (VAR_8 < 0) {

      VAR_7 = VAR_4 * (VAR_6 ? VAR_0 : 1);
  } else if (VAR_8 > VAR_0) {

      VAR_7 = VAR_5 * (VAR_6 ? VAR_0 : 1);
  } else {
   VAR_7 = (VAR_8 * VAR_5 + (VAR_0 - VAR_8) *
     VAR_4) / VAR_9;
  }
 } else {
  VAR_7 = VAR_4;
  if (VAR_6)
   VAR_7 *= VAR_0;
 }
 return VAR_7;
}
