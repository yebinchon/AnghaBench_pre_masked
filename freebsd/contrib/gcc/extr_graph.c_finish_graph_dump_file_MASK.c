
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int) ;
 size_t VAR_0 ;
 char const** VAR_1 ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char const*) ;
 size_t VAR_2 ;

void
FUNC_7 (const char *VAR_3)
{
  size_t VAR_4 = FUNC_6 (VAR_3);
  size_t VAR_5 = FUNC_6 (VAR_1[VAR_0]) + 1;
  char *VAR_6 = FUNC_0 (VAR_4 + VAR_5);
  FILE *VAR_7;

  FUNC_5 (VAR_6, VAR_3, VAR_4);
  FUNC_5 (VAR_6 + VAR_4, VAR_1[VAR_0], VAR_5);

  VAR_7 = FUNC_2 (VAR_6, "a");
  if (VAR_7 != ((void*)0))
    {
      FUNC_4 (VAR_0 == VAR_2);
      FUNC_3 ("}\n", VAR_7);
      FUNC_1 (VAR_7);
    }
}
