
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t
FUNC_0(char *VAR_2, size_t VAR_3, uint32_t VAR_4)
{
 char *VAR_5 = VAR_2;


 if (VAR_4 > VAR_0)
  VAR_4 = VAR_1;

 if (VAR_4 <= 0x7f) {
  if (VAR_3 == 0)
   return (0);
  *VAR_2++ = (char)VAR_4;
 } else if (VAR_4 <= 0x7ff) {
  if (VAR_3 < 2)
   return (0);
  *VAR_2++ = 0xc0 | ((VAR_4 >> 6) & 0x1f);
  *VAR_2++ = 0x80 | (VAR_4 & 0x3f);
 } else if (VAR_4 <= 0xffff) {
  if (VAR_3 < 3)
   return (0);
  *VAR_2++ = 0xe0 | ((VAR_4 >> 12) & 0x0f);
  *VAR_2++ = 0x80 | ((VAR_4 >> 6) & 0x3f);
  *VAR_2++ = 0x80 | (VAR_4 & 0x3f);
 } else {
  if (VAR_3 < 4)
   return (0);
  *VAR_2++ = 0xf0 | ((VAR_4 >> 18) & 0x07);
  *VAR_2++ = 0x80 | ((VAR_4 >> 12) & 0x3f);
  *VAR_2++ = 0x80 | ((VAR_4 >> 6) & 0x3f);
  *VAR_2++ = 0x80 | (VAR_4 & 0x3f);
 }
 return (VAR_2 - VAR_5);
}
