
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 int const VAR_0 ;
 int FUNC_0 (scalar_t__*,int const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

uint16_t FUNC_2(const uint8_t* VAR_1, size_t VAR_2)
{
 unsigned int VAR_3;
 uint32_t VAR_4;
 uint16_t VAR_5;

 if(VAR_2 < 4) {
  return 0;
 }

 if (VAR_1[3] == VAR_0) {
  VAR_5 = 0;
  if (VAR_2 > 4) {
   FUNC_0(&VAR_5, VAR_1 + VAR_2 - 3, 2);
  }
  VAR_5 = FUNC_1(VAR_5);
  return (uint16_t) VAR_5;
 } else {
  VAR_4 = 0;
  for (VAR_3 = 0; (size_t)VAR_3 < VAR_2; ++VAR_3) {
   VAR_4 += (VAR_3 & 1) ? VAR_1[VAR_3] : VAR_1[VAR_3] << 8;
  }
  VAR_4 += (VAR_4 >> 16) & 0xFFFF;
  return (uint16_t) (VAR_4 & 0xFFFF);
 }
}
