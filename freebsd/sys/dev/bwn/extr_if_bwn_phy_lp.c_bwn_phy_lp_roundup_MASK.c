
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_0, uint32_t VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;

 if (VAR_1 == 0)
  return (0);

 for (VAR_3 = 0, VAR_4 = VAR_0 / VAR_1, VAR_5 = VAR_0 % VAR_1; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 <<= 1;
  if (VAR_5 << 1 >= VAR_1) {
   VAR_4++;
   VAR_5 = (VAR_5 << 1) - VAR_1;
  }
 }
 if (VAR_5 << 1 >= VAR_1)
  VAR_4++;
 return (VAR_4);
}
