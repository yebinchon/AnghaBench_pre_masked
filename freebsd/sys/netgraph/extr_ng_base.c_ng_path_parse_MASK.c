
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(char *VAR_0, char **VAR_1, char **VAR_2, char **VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7;




 for (VAR_5 = VAR_0; *VAR_5 && *VAR_5 != ':'; VAR_5++);
 if (*VAR_5) {
  VAR_4 = VAR_0;
  *VAR_5++ = '\0';


  if (!*VAR_4)
   return -1;


  if (FUNC_0(VAR_4, ".") != 0) {
   for (VAR_7 = 0; VAR_4[VAR_7]; VAR_7++)
    if (VAR_4[VAR_7] == '.')
     return -1;
  }
 } else {
  VAR_4 = ((void*)0);
  VAR_5 = VAR_0;
 }


 for (VAR_7 = 0; VAR_5[VAR_7]; VAR_7++)
  if (VAR_5[VAR_7] == ':')
   return -1;


 for (VAR_7 = 0; VAR_5[VAR_7]; VAR_7++)
  if (VAR_5[VAR_7] == '.' && VAR_5[VAR_7 + 1] == '.')
   return -1;


 if (VAR_5[0] == '.')
  VAR_5++;
 if (*VAR_5 && VAR_5[FUNC_1(VAR_5) - 1] == '.')
  VAR_5[FUNC_1(VAR_5) - 1] = 0;


 if (*VAR_5) {
  for (VAR_6 = VAR_5, VAR_7 = 0; VAR_5[VAR_7]; VAR_7++)
   if (VAR_5[VAR_7] == '.') {
    VAR_6 = ((void*)0);
    break;
   }
 } else
  VAR_5 = VAR_6 = ((void*)0);


 if (VAR_1)
  *VAR_1 = VAR_4;
 if (VAR_2)
  *VAR_2 = VAR_5;
 if (VAR_3)
  *VAR_3 = VAR_6;
 return (0);
}
