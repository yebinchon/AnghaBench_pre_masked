
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int FUNC_4 (int) ;

tree
FUNC_5 (tree VAR_2, tree VAR_3)
{
  if (FUNC_2 (VAR_3))
    {
      if (!VAR_2)
 FUNC_3 ("unnamed variable or field declared void");
      else if (FUNC_1 (VAR_2) == VAR_0)
 {
   FUNC_4 (!FUNC_0 (VAR_2));
   FUNC_3 ("variable or field %qE declared void", VAR_2);
 }
      else
 FUNC_3 ("variable or field declared void");
      VAR_3 = VAR_1;
    }

  return VAR_3;
}
