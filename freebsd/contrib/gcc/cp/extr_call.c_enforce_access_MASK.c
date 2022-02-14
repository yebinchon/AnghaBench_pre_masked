
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;

bool
FUNC_6 (tree VAR_1, tree VAR_2, tree VAR_3)
{
  FUNC_5 (FUNC_0 (VAR_1) == VAR_0);

  if (!FUNC_3 (VAR_1, VAR_2, 1))
    {
      if (FUNC_1 (VAR_2))
 FUNC_4 ("%q+#D is private", VAR_3);
      else if (FUNC_2 (VAR_2))
 FUNC_4 ("%q+#D is protected", VAR_3);
      else
 FUNC_4 ("%q+#D is inaccessible", VAR_3);
      FUNC_4 ("within this context");
      return 0;
    }

  return 1;
}
