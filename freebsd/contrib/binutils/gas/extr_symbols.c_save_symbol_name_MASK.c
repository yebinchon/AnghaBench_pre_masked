
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;
 int VAR_0 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,unsigned int) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5 (const char *VAR_2)
{
  unsigned int VAR_3;
  char *VAR_4;

  VAR_3 = FUNC_3 (VAR_2) + 1;
  FUNC_2 (&VAR_0, VAR_2, VAR_3);
  VAR_4 = FUNC_1 (&VAR_0);





  if (! VAR_1)
    {
      char *VAR_5;

      for (VAR_5 = VAR_4; *VAR_5 != '\0'; VAR_5++)
 *VAR_5 = FUNC_0 (*VAR_5);
    }

  return VAR_4;
}
