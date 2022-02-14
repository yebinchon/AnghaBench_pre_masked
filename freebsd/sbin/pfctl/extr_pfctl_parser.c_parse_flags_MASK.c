
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 char* VAR_1 ;

int
FUNC_1(char *VAR_2)
{
 char *VAR_3, *VAR_4;
 u_int8_t VAR_5 = 0;

 for (VAR_3 = VAR_2; *VAR_3; VAR_3++) {
  if ((VAR_4 = FUNC_0(VAR_1, *VAR_3)) == ((void*)0))
   return -1;
  else
   VAR_5 |= 1 << (VAR_4 - VAR_1);
 }
 return (VAR_5 ? VAR_5 : VAR_0);
}
