
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned char *
FUNC_0(int VAR_0, size_t VAR_1)
{
 static unsigned char VAR_2[16];
 int VAR_3, VAR_4;

 if (VAR_0 > 15)
  return (((void*)0));
 for (VAR_4 = 0, VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--, VAR_4++) {
  VAR_2[VAR_4] = (unsigned char)((VAR_1 & (0xff << VAR_3 * 8)) >> VAR_3 * 8);
 }
 return (VAR_2);
}
