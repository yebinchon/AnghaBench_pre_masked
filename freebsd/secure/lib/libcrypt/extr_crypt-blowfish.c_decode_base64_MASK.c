
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void
FUNC_1(u_int8_t *VAR_0, u_int16_t VAR_1, const u_int8_t *VAR_2)
{
 u_int8_t *VAR_3 = VAR_0;
 const u_int8_t *VAR_4 = VAR_2;
 u_int8_t VAR_5, VAR_6, VAR_7, VAR_8;
 while (VAR_3 < VAR_0 + VAR_1) {
  VAR_5 = FUNC_0(*VAR_4);
  VAR_6 = FUNC_0(*(VAR_4 + 1));


  if (VAR_5 == 255 || VAR_6 == 255)
   break;

  *VAR_3++ = (VAR_5 << 2) | ((VAR_6 & 0x30) >> 4);
  if (VAR_3 >= VAR_0 + VAR_1)
   break;

  VAR_7 = FUNC_0(*(VAR_4 + 2));
  if (VAR_7 == 255)
   break;

  *VAR_3++ = ((VAR_6 & 0x0f) << 4) | ((VAR_7 & 0x3c) >> 2);
  if (VAR_3 >= VAR_0 + VAR_1)
   break;

  VAR_8 = FUNC_0(*(VAR_4 + 3));
  if (VAR_8 == 255)
   break;
  *VAR_3++ = ((VAR_7 & 0x03) << 6) | VAR_8;

  VAR_4 += 4;
 }
}
