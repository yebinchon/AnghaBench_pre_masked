
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;

__attribute__((used)) static int
FUNC_0(char *VAR_4)
{
 char *VAR_5;
 char VAR_6;

 VAR_5 = VAR_4;
 while ((VAR_6 = *VAR_5++) != '\0') {
  if ( VAR_6 == VAR_3)
   continue;
  if (VAR_6 == VAR_2)
   VAR_5++;
  else if (VAR_0[(int)VAR_6] == VAR_1)
   return 0;
 }
 return 1;
}
