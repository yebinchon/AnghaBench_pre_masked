
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static bool
FUNC_3 (void)
{
  tree VAR_2 = FUNC_1 ();
  if (VAR_2 && FUNC_0 (VAR_2) != VAR_0)
    {
      FUNC_2 ("explicit specialization in non-namespace scope %qD", VAR_2);
      return 0;
    }
  if (VAR_1)
    {
      FUNC_2 ("enclosing class templates are not explicitly specialized");
      return 0;
    }

  return 1;
}
