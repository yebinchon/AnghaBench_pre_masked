
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,int*) ;
 char** VAR_1 ;
 int VAR_2 ;

int
FUNC_1(const char *VAR_3)
{
 char **VAR_4;
 const char *VAR_5;
 int VAR_6 = 0;

 if (!VAR_3 || !*VAR_3) {
  VAR_2 = VAR_0;
  return (-1);
 }
 for (VAR_5 = VAR_3; *VAR_5 && *VAR_5 != '='; ++VAR_5)
  ;
 if (*VAR_5) {
  VAR_2 = VAR_0;
  return (-1);
 }


 while (FUNC_0(VAR_3, (int)(VAR_5 - VAR_3), &VAR_6)) {
  for (VAR_4 = &VAR_1[VAR_6];; ++VAR_4)
   if (!(*VAR_4 = *(VAR_4 + 1)))
    break;
 }
 return (0);
}
