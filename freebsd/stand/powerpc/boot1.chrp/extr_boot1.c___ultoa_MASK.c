
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 char* VAR_0 ;

__attribute__((used)) static char *
FUNC_0(char *VAR_1, u_long VAR_2, int VAR_3)
{
 char *VAR_4;

 VAR_4 = VAR_1;
 *VAR_4 = '\0';
 do
  *--VAR_4 = VAR_0[VAR_2 % VAR_3];
 while ((VAR_2 /= VAR_3) != 0);
 return (VAR_4);
}
