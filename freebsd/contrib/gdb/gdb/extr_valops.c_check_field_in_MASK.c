
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 struct type* FUNC_0 (struct type*,int) ;
 char* FUNC_1 (struct type*,int) ;
 char* FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (char const*,struct type*) ;
 int FUNC_7 (struct type*,int*,int*) ;
 scalar_t__ FUNC_8 (char*,char const*) ;

__attribute__((used)) static int
FUNC_9 (struct type *VAR_0, const char *VAR_1)
{
  int VAR_2;

  for (VAR_2 = FUNC_3 (VAR_0) - 1; VAR_2 >= FUNC_5 (VAR_0); VAR_2--)
    {
      char *VAR_3 = FUNC_1 (VAR_0, VAR_2);
      if (VAR_3 && (FUNC_8 (VAR_3, VAR_1) == 0))
 return 1;
    }





  if (FUNC_6 (VAR_1, VAR_0))
    {
      int VAR_4, VAR_5;

      return FUNC_7 (VAR_0, &VAR_4, &VAR_5);
    }

  for (VAR_2 = FUNC_4 (VAR_0) - 1; VAR_2 >= 0; --VAR_2)
    {
      if (FUNC_8 (FUNC_2 (VAR_0, VAR_2), VAR_1) == 0)
 return 1;
    }

  for (VAR_2 = FUNC_5 (VAR_0) - 1; VAR_2 >= 0; VAR_2--)
    if (FUNC_9 (FUNC_0 (VAR_0, VAR_2), VAR_1))
      return 1;

  return 0;
}
