
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int VAR_0 ;

__attribute__((used)) static uint8_t
FUNC_0(const uint8_t VAR_1[])
{
 uint64_t VAR_2 = 0x00004d101df481b4;
 uint8_t VAR_3 = 0x27;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  for (VAR_5 = (VAR_4 == 0) ? 1 : 0; VAR_5 < 8; VAR_5++)
   if ((VAR_1[VAR_4] >> VAR_5) & 1)
    VAR_3 ^= (VAR_2 >> (VAR_4 * 8 + VAR_5 - 1));

 VAR_3 &= 0x3f;

 return (VAR_3);
}
