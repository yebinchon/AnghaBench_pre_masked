
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char* const) ;
 char* VAR_0 ;

int
FUNC_1(char **VAR_1, char * const *VAR_2, char **VAR_3)
{
 int VAR_4;
 char *VAR_5;

 VAR_0 = *VAR_3 = ((void*)0);

 if (!VAR_1 || !*VAR_1)
  return(-1);


 for (VAR_5 = *VAR_1; *VAR_5 && (*VAR_5 == ',' || *VAR_5 == ' ' || *VAR_5 == '\t'); ++VAR_5);

 if (!*VAR_5) {
  *VAR_1 = VAR_5;
  return(-1);
 }


 for (VAR_0 = VAR_5;
     *++VAR_5 && *VAR_5 != ',' && *VAR_5 != '=' && *VAR_5 != ' ' && *VAR_5 != '\t';);

 if (*VAR_5) {





  if (*VAR_5 == '=') {
   *VAR_5 = '\0';
   for (*VAR_3 = ++VAR_5;
       *VAR_5 && *VAR_5 != ',' && *VAR_5 != ' ' && *VAR_5 != '\t'; ++VAR_5);
   if (*VAR_5)
    *VAR_5++ = '\0';
  } else
   *VAR_5++ = '\0';

  for (; *VAR_5 && (*VAR_5 == ',' || *VAR_5 == ' ' || *VAR_5 == '\t'); ++VAR_5);
 }


 *VAR_1 = VAR_5;

 for (VAR_4 = 0; *VAR_2; ++VAR_2, ++VAR_4)
  if (!FUNC_0(VAR_0, *VAR_2))
   return(VAR_4);
 return(-1);
}
