
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ int16_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint16_t
FUNC_0(uint16_t VAR_1, uint16_t VAR_2, uint16_t VAR_3,
 uint16_t VAR_4, uint16_t VAR_5)
{
 uint16_t VAR_6;
 int16_t VAR_7;


 if ((VAR_4 * VAR_5) == 0)
  return 0;

 if (VAR_3 != VAR_2) {




  VAR_7 = (VAR_1 - VAR_2) * VAR_0 / (VAR_3 - VAR_2);
  if (VAR_7 < 0) {

      VAR_6 = VAR_4;
  } else if (VAR_7 > VAR_0) {

      VAR_6 = VAR_5;
  } else {
   VAR_6 = (VAR_7 * VAR_5 + (VAR_0 - VAR_7) *
     VAR_4) / VAR_0;
  }
 } else {
  VAR_6 = VAR_4;
 }
 return VAR_6;
}
