
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__*,int) ;
 int FUNC_1 (int ) ;

uint16_t FUNC_2(uint8_t* VAR_1, size_t VAR_2)
{
 if(VAR_2 < 4) {
  return 0;
 }

 if (VAR_1[3] == VAR_0) {
  uint16_t VAR_3 = 0;
  if (VAR_2 > 4) {
   FUNC_0(&VAR_3, VAR_1 + VAR_2 - 3, 2);
  }
  VAR_3 = FUNC_1(VAR_3);
  return (uint16_t) VAR_3;
 } else {
  size_t VAR_4;
  uint32_t VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
   VAR_5 += (VAR_4 & 1) ? VAR_1[VAR_4] : VAR_1[VAR_4] << 8;
  }
  VAR_5 += (VAR_5 >> 16) & 0xFFFF;
  return (uint16_t) (VAR_5 & 0xFFFF);
 }
}
