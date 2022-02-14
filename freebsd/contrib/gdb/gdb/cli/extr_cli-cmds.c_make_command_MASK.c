
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int VAR_1)
{
  char *VAR_2;

  if (VAR_0 == 0)
    VAR_2 = "make";
  else
    {
      VAR_2 = FUNC_3 (sizeof ("make ") + FUNC_2 (VAR_0));
      FUNC_1 (VAR_2, "make ");
      FUNC_1 (VAR_2 + sizeof ("make ") - 1, VAR_0);
    }

  FUNC_0 (VAR_2, VAR_1);
}
