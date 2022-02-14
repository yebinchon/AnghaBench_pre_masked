
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void
FUNC_0(const uint8_t *VAR_0, char *VAR_1, size_t VAR_2)
{
 while (VAR_2--) {
  if (*VAR_0 / 16 < 10)
   *VAR_1++ = '0' + *VAR_0 / 16;
  else
   *VAR_1++ = 'a' + *VAR_0 / 16 - 10;
  if (*VAR_0 % 16 < 10)
   *VAR_1++ = '0' + *VAR_0 % 16;
  else
   *VAR_1++ = 'a' + *VAR_0 % 16 - 10;
  ++VAR_0;
 }
 *VAR_1 = '\0';
}
