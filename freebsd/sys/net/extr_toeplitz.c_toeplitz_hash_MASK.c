
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;


 int VAR_0 ;

uint32_t
FUNC_0(u_int VAR_1, const uint8_t *VAR_2, u_int VAR_3,
    const uint8_t *VAR_4)
{
 uint32_t VAR_5 = 0, VAR_6;
 u_int VAR_7, VAR_8;



 VAR_6 = (VAR_2[0]<<24) + (VAR_2[1]<<16) + (VAR_2[2] <<8) + VAR_2[3];
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
   if (VAR_4[VAR_7] & (1<<(7-VAR_8)))
    VAR_5 ^= VAR_6;
   VAR_6 <<= 1;
   if ((VAR_7 + 4) < VAR_0 &&
       (VAR_2[VAR_7+4] & (1<<(7-VAR_8))))
    VAR_6 |= 1;
  }
 }
 return (VAR_5);
}
