
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *,scalar_t__) ;

void
FUNC_5 (FILE *VAR_5, tree VAR_6)
{
  if (FUNC_0 (VAR_6) == VAR_1)
    {
      if (FUNC_1 (VAR_6, 0))
 FUNC_5 (VAR_5, FUNC_1 (VAR_6, 0));
      else
 FUNC_3 (" <variable>", VAR_5);
      FUNC_2 ('.', VAR_5);
      FUNC_4 (VAR_5, FUNC_1 (VAR_6, 1));
    }
  else if (FUNC_0 (VAR_6) == VAR_2)
    {
      FUNC_3 (" (*", VAR_5);
      FUNC_5 (VAR_5, FUNC_1 (VAR_6, 0));
      FUNC_3 (")", VAR_5);
    }
  else if (FUNC_0 (VAR_6) == VAR_0)
    {
      FUNC_3 (" (A*", VAR_5);
      FUNC_5 (VAR_5, FUNC_1 (VAR_6, 0));
      FUNC_3 (")", VAR_5);
    }
  else if (FUNC_0 (VAR_6) == VAR_3)
    {
      FUNC_3 (" (M*", VAR_5);
      FUNC_5 (VAR_5, FUNC_1 (VAR_6, 0));
      FUNC_3 (")", VAR_5);
    }
  else if (FUNC_0 (VAR_6) == VAR_4)
    FUNC_3 (" <result>", VAR_5);
  else
    {
      FUNC_2 (' ', VAR_5);
      FUNC_4 (VAR_5, VAR_6);
    }
}
