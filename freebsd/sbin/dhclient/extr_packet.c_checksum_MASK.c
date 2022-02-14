
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

u_int32_t
FUNC_1(unsigned char *VAR_0, unsigned VAR_1, u_int32_t VAR_2)
{
 unsigned VAR_3;


 for (VAR_3 = 0; VAR_3 < (VAR_1 & ~1U); VAR_3 += 2) {
  VAR_2 += (u_int16_t)FUNC_0(*((u_int16_t *)(VAR_0 + VAR_3)));
  if (VAR_2 > 0xFFFF)
   VAR_2 -= 0xFFFF;
 }






 if (VAR_3 < VAR_1) {
  VAR_2 += VAR_0[VAR_3] << 8;
  if (VAR_2 > 0xFFFF)
   VAR_2 -= 0xFFFF;
 }

 return (VAR_2);
}
