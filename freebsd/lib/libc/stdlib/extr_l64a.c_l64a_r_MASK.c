
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



int
FUNC_0(long VAR_0, char *VAR_1, int VAR_2)
{
 static const char VAR_3[] =
     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
 uint32_t VAR_4;

 VAR_4 = VAR_0;
 while (VAR_2-- > 0) {
  if (VAR_4 == 0) {
   *VAR_1 = '\0';
   return (0);
  }
  *VAR_1++ = VAR_3[VAR_4 & 0x3f];
  VAR_4 >>= 6;
 }
 return (-1);
}
