
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0, size_t VAR_1, unsigned char *VAR_2, size_t VAR_3)
{
 char const VAR_4[] = "0123456789abcdef";
 size_t VAR_5;


 if (VAR_1 < (2 * VAR_3) + 2)
  return (((void*)0));

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_0[VAR_5 * 2] = VAR_4[VAR_2[VAR_5] >> 4];
  VAR_0[VAR_5 * 2 + 1] = VAR_4[VAR_2[VAR_5] & 0x0f];
 }

 VAR_0[VAR_5 * 2] = 0x0A;
 VAR_0[VAR_5 * 2 + 1] = '\0';

 return (VAR_0);
}
