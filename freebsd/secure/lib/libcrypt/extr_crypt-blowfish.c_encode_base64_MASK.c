
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;


 void** VAR_0 ;

__attribute__((used)) static void
FUNC_0(u_int8_t *VAR_1, u_int8_t *VAR_2, u_int16_t VAR_3)
{
 u_int8_t *VAR_4 = VAR_1;
 u_int8_t *VAR_5 = VAR_2;
 u_int8_t VAR_6, VAR_7;
 while (VAR_5 < VAR_2 + VAR_3) {
  VAR_6 = *VAR_5++;
  *VAR_4++ = VAR_0[(VAR_6 >> 2)];
  VAR_6 = (VAR_6 & 0x03) << 4;
  if (VAR_5 >= VAR_2 + VAR_3) {
   *VAR_4++ = VAR_0[VAR_6];
   break;
  }
  VAR_7 = *VAR_5++;
  VAR_6 |= (VAR_7 >> 4) & 0x0f;
  *VAR_4++ = VAR_0[VAR_6];
  VAR_6 = (VAR_7 & 0x0f) << 2;
  if (VAR_5 >= VAR_2 + VAR_3) {
   *VAR_4++ = VAR_0[VAR_6];
   break;
  }
  VAR_7 = *VAR_5++;
  VAR_6 |= (VAR_7 >> 6) & 0x03;
  *VAR_4++ = VAR_0[VAR_6];
  *VAR_4++ = VAR_0[VAR_7 & 0x3f];
 }
 *VAR_4 = '\0';
}
