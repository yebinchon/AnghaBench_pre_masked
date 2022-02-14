
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;

char *
FUNC_7 (const char *VAR_2)
{
  char *VAR_3 = ((void*)0);
  const char *VAR_4;
  int VAR_5 = 0;
  char *VAR_6 = FUNC_0 (VAR_2, VAR_0 | VAR_1);

  if (VAR_6 == ((void*)0))
    return ((void*)0);

  VAR_4 = FUNC_1 (VAR_6);
  if (VAR_4 != ((void*)0))
    {
      char *VAR_7;
      int VAR_8;


      VAR_4 = VAR_4 + 2;


      VAR_7 = FUNC_3 (VAR_4, '(');
      if (VAR_7 == ((void*)0))
 VAR_8 = FUNC_4 (VAR_4 + 2);
      else
 {
   VAR_7 --;
   while (*VAR_7 == ' ')
     VAR_7 --;
   VAR_8 = VAR_7 - VAR_4 + 1;
 }
      VAR_3 = FUNC_6 (VAR_8 + 1);
      FUNC_2 (VAR_3, VAR_4, VAR_8);
      VAR_3[VAR_8] = 0;
    }

  FUNC_5 (VAR_6);
  return VAR_3;
}
