
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 void** VAR_0 ;

char *
FUNC_0(u_char *VAR_1)
{
 int VAR_2;
 static char VAR_3[18];
 char *VAR_4 = VAR_3;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  *VAR_4++ = VAR_0[*VAR_1 >> 4];
  *VAR_4++ = VAR_0[*VAR_1++ & 0xf];
  *VAR_4++ = ':';
 }
 *--VAR_4 = 0;
 return (VAR_3);
}
