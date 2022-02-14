
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(unsigned char *VAR_0)
{
 static char VAR_1[10][20];
 static int VAR_2 = 0;
 char *VAR_3;
 int VAR_4;
 static const char *VAR_5 = "0123456789ABCDEF";

 VAR_3 = &(VAR_1[VAR_2++][0]);
 VAR_2 %= 10;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_3[VAR_4 * 2] = VAR_5[(VAR_0[VAR_4] >> 4) & 0xf];
  VAR_3[VAR_4 * 2 + 1] = VAR_5[VAR_0[VAR_4] & 0xf];
 }
 VAR_3[16] = '\0';
 return (VAR_3);
}
