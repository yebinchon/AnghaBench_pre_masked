
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef size_t u_int16_t ;



u_int32_t
FUNC_0(const u_int8_t *VAR_0, u_int16_t VAR_1,
    u_int16_t *VAR_2)
{
 u_int8_t VAR_3;
 u_int16_t VAR_4;
 u_int32_t VAR_5;

 VAR_5 = 0x00000000;
 VAR_4 = *VAR_2;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++, VAR_4++) {
  if (VAR_4 >= VAR_1)
   VAR_4 = 0;
  VAR_5 = (VAR_5 << 8) | VAR_0[VAR_4];
 }

 *VAR_2 = VAR_4;
 return VAR_5;
}
