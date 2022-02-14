
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static char *
FUNC_1(char **VAR_0, unsigned char VAR_1)
{
 int VAR_2;
 static char VAR_3[5];
 char * VAR_4 = VAR_0 ? *VAR_0 : VAR_3;

 if (VAR_1 & 0x80) {
  FUNC_0(VAR_4, "M-");
  VAR_2 = 2;
  VAR_1 &= 0x7f;
 } else
 VAR_2 = 0;

 if (VAR_1 < 32) {
  VAR_4[VAR_2++] = '^';
  VAR_4[VAR_2++] = VAR_1 + '@';
 } else if (VAR_1 == 127) {
  VAR_4[VAR_2++] = '^';
  VAR_4[VAR_2++] = '?';
 } else
  VAR_4[VAR_2++] = VAR_1;
 VAR_4[VAR_2] = '\0';

 if (VAR_0)
  *VAR_0 = VAR_4 + VAR_2;
 return VAR_4;
}
