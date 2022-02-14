
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int) ;

tree
FUNC_6 (tree VAR_1, tree VAR_2)
{
  tree VAR_3;

  VAR_3 = FUNC_4 (VAR_1, VAR_2);
  if (FUNC_1 (VAR_3) == VAR_0
      && (FUNC_2 (VAR_3)
   != FUNC_2 (VAR_1)))
    VAR_3 = FUNC_3 (VAR_3,
     FUNC_2 (VAR_1));


  FUNC_5 (!FUNC_0 (VAR_1) || VAR_3 == VAR_1);

  return VAR_3;
}
