
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_1, char *VAR_2, char *VAR_3)
{
 char *VAR_4;

 VAR_4 = VAR_2 + (VAR_3 - VAR_2) / 2;
 FUNC_0(VAR_4, VAR_3);

 while (VAR_4 != VAR_3) {
  if (FUNC_1(VAR_1, VAR_4, VAR_3) == VAR_0)
   VAR_2 = VAR_4;
  else
   VAR_3 = VAR_4;
  VAR_4 = VAR_2 + (VAR_3 - VAR_2) / 2;
  FUNC_0(VAR_4, VAR_3);
 }
 return (VAR_2);
}
