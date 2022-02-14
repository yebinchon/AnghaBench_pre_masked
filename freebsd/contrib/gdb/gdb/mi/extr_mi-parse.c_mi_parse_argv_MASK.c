
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mi_parse {char** argv; int argc; } ;


 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char) ;
 char FUNC_2 (char**) ;
 int FUNC_3 (char*,char*,int) ;
 void* FUNC_4 (int) ;
 char** FUNC_5 (char**,int) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_0, struct mi_parse *VAR_1)
{
  char *VAR_2 = VAR_0;
  int VAR_3 = 0;
  char **VAR_4 = FUNC_4 ((VAR_3 + 1) * sizeof (char *));
  VAR_4[VAR_3] = ((void*)0);
  while (1)
    {
      char *VAR_5;

      while (FUNC_1 (*VAR_2))
 VAR_2++;

      switch (*VAR_2)
 {
 case '\0':
   VAR_1->argv = VAR_4;
   VAR_1->argc = VAR_3;
   return;
 case '"':
   {

     int VAR_6;
     char *VAR_7 = VAR_2 + 1;

     VAR_2 = VAR_7;
     VAR_6 = 0;
     while (*VAR_2 != '\0' && *VAR_2 != '"')
       {
  if (*VAR_2 == '\\')
    {
      VAR_2++;
      if (FUNC_2 (&VAR_2) <= 0)
        {

   FUNC_0 (VAR_4);
   return;
        }
    }
  else
    VAR_2++;
  VAR_6++;
       }

     if (*VAR_2 != '"')
       {
  FUNC_0 (VAR_4);
  return;
       }

     if (VAR_2[1] != '\0' && !FUNC_1 (VAR_2[1]))
       {
  FUNC_0 (VAR_4);
  return;
       }

     VAR_5 = FUNC_4 ((VAR_6 + 1) * sizeof (char));

     VAR_2 = VAR_7;
     VAR_6 = 0;
     while (*VAR_2 != '\0' && *VAR_2 != '"')
       {
  if (*VAR_2 == '\\')
    {
      VAR_2++;
      VAR_5[VAR_6] = FUNC_2 (&VAR_2);
    }
  else
    VAR_5[VAR_6] = *VAR_2++;
  VAR_6++;
       }
     VAR_5[VAR_6] = '\0';
     VAR_2++;
     break;
   }
 default:
   {


     int VAR_8;
     char *VAR_9 = VAR_2;
     while (*VAR_2 != '\0' && !FUNC_1 (*VAR_2))
       {
  VAR_2++;
       }
     VAR_8 = VAR_2 - VAR_9;
     VAR_5 = FUNC_4 ((VAR_8 + 1) * sizeof (char));
     FUNC_3 (VAR_5, VAR_9, VAR_8);
     VAR_5[VAR_8] = '\0';
     break;
   }
 }

      VAR_4 = FUNC_5 (VAR_4, (VAR_3 + 2) * sizeof (char *));
      VAR_4[VAR_3++] = VAR_5;
      VAR_4[VAR_3] = ((void*)0);
    }
}
