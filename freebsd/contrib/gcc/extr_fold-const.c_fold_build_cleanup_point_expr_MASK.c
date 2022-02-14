
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;

tree
FUNC_4 (tree VAR_2, tree VAR_3)
{


  if (!FUNC_2 (VAR_3))
    return VAR_3;






  if (FUNC_0 (VAR_3) == VAR_1)
    {
      tree VAR_4 = FUNC_1 (VAR_3, 0);
      if (!VAR_4 || !FUNC_2 (VAR_4))
        return VAR_3;
      VAR_4 = FUNC_1 (VAR_4, 1);
      if (!FUNC_2 (VAR_4))
        return VAR_3;
    }

  return FUNC_3 (VAR_0, VAR_2, VAR_3);
}
