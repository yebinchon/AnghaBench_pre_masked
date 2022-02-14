
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int,int) ;

char **
FUNC_1 (char *VAR_0[], char **VAR_1, char **VAR_2, char **VAR_3)
{
  char **VAR_4;
  char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
  int VAR_9, VAR_10, VAR_11;

  for (VAR_11 = 0; VAR_0[VAR_11]; VAR_11++);
  if (VAR_11 == 0)
    return ((void*)0);
  VAR_5 = "";
  VAR_6 = "";
  VAR_7 = "";

  VAR_4 = FUNC_0 (VAR_11 + 1, sizeof VAR_4[0]);
  VAR_9 = VAR_11;
  for (VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
    {
      VAR_8 = VAR_0[VAR_11];
      if (*VAR_8 == '>')
 {
   VAR_8++;
   if (*VAR_8)
     VAR_6 = VAR_8;
   else
     VAR_6 = VAR_0[++VAR_11];
 }
      else if (*VAR_8 == '<')
 {
   VAR_8++;
   if (*VAR_8)
     VAR_5 = VAR_8;
   else
     VAR_5 = VAR_0[++VAR_11];
 }
      else if (*VAR_8++ == '2' && *VAR_8++ == '>')
 {
   if (*VAR_8 == '&' && *(VAR_8 + 1) == '1')
     VAR_7 = VAR_6;
   else if (*VAR_8)
     VAR_7 = VAR_8;
   else
     VAR_7 = VAR_0[++VAR_11];
 }
      else
 VAR_4[VAR_10++] = VAR_0[VAR_11];
    }
  *VAR_1 = VAR_5;
  *VAR_2 = VAR_6;
  *VAR_3 = VAR_7;
  return VAR_4;
}
