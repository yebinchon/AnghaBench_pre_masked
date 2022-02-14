
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static char *
FUNC_5 (char **VAR_0, int *VAR_1)
{
  char *VAR_2;
  char *VAR_3, *VAR_4;
  int VAR_5;
  VAR_2 = FUNC_2 (*VAR_0, ',');
  VAR_5 = (VAR_2 != 0);



  if (VAR_5)
    {
      *VAR_2 = '\0';
    }





  VAR_3 = *VAR_0;
  if (VAR_3[0] == '"')
    {
      *VAR_1 = 1;
      (*VAR_0)++;
      VAR_3++;
    }
  else
    *VAR_1 = 0;
  for (; *VAR_3; VAR_3++)
    {
      if (VAR_3[0] == '<')
 {
   char *VAR_6 = FUNC_1 (VAR_3);
   if (!VAR_6)
     FUNC_0 ("malformed template specification in command");
   VAR_3 = VAR_6;
 }


      if (FUNC_3 (VAR_3))
 {
   break;
 }




      if (!*VAR_3
   || VAR_3[0] == '\t'
   || ((VAR_3[0] == ':')
       && ((VAR_3[1] == ':') || (FUNC_4 (VAR_3 + 1, ':') == ((void*)0))))
   || ((VAR_3[0] == ' ') && !*VAR_1))
 break;
      if (VAR_3[0] == '.' && FUNC_4 (VAR_3, ':') == ((void*)0))
 {


   for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
     {
       if (*VAR_4 == '.')
  VAR_3 = VAR_4;
     }
   break;
 }
    }
  while (VAR_3[0] == ' ' || VAR_3[0] == '\t')
    VAR_3++;


  if (*VAR_1)
    {
      char *VAR_7 = FUNC_4 (VAR_3 - 1, '"');
      if (VAR_7 && VAR_7[1] == '\0')
 *VAR_7 = '\0';
    }



  if (VAR_5)
    *VAR_2 = ',';

  return VAR_3;
}
