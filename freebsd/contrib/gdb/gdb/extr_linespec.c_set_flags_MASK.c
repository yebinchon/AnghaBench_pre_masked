
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int *VAR_1, char **VAR_2)
{
  char *VAR_3;
  int VAR_4 = 0;




  if ((VAR_3 = FUNC_3 (VAR_0, " if ")) != ((void*)0) ||
      (VAR_3 = FUNC_3 (VAR_0, "\tif ")) != ((void*)0) ||
      (VAR_3 = FUNC_3 (VAR_0, " if\t")) != ((void*)0) ||
      (VAR_3 = FUNC_3 (VAR_0, "\tif\t")) != ((void*)0) ||
      (VAR_3 = FUNC_3 (VAR_0, " if(")) != ((void*)0) ||
      (VAR_3 = FUNC_3 (VAR_0, "\tif( ")) != ((void*)0))
    VAR_4 = 1;



  if (VAR_4)
    {
      *VAR_3 = '\0';
    }

  *VAR_1 = (*VAR_0
  && FUNC_1 (FUNC_0 (),
      *VAR_0) != ((void*)0));

  *VAR_2 = FUNC_1 (VAR_0, '(');
  if (*VAR_2 != ((void*)0))
    *VAR_2 = FUNC_2 (*VAR_2, ')');



  if (VAR_4)
    *VAR_3 = ' ';
}
