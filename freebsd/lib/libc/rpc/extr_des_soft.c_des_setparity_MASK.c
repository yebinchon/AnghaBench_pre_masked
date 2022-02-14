
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

void
FUNC_0(char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  *VAR_1 = VAR_0[*VAR_1 & 0x7f];
  VAR_1++;
 }
}
