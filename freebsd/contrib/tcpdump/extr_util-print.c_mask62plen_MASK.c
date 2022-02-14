
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int bitmasks ;



int
FUNC_0(const u_char *VAR_0)
{
 u_char VAR_1[9] = {
  0x00,
  0x80, 0xc0, 0xe0, 0xf0,
  0xf8, 0xfc, 0xfe, 0xff
 };
 int VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  u_int VAR_4;

  for (VAR_4 = 0; VAR_4 < (sizeof (VAR_1) / sizeof (VAR_1[0])); VAR_4++) {
   if (VAR_0[VAR_2] == VAR_1[VAR_4]) {
    VAR_3 += VAR_4;
    break;
   }
  }

  if (VAR_0[VAR_2] != 0xff)
   break;
 }
 return (VAR_3);
}
