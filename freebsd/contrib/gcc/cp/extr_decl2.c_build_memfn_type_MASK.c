
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int cp_cv_quals ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;

tree
FUNC_8 (tree VAR_3, tree VAR_4, cp_cv_quals VAR_5)
{
  tree VAR_6;
  int VAR_7;

  if (VAR_3 == VAR_2 || VAR_4 == VAR_2)
    return VAR_2;

  VAR_7 = VAR_5 & ~VAR_1;
  VAR_4 = FUNC_7 (VAR_4, VAR_7);
  VAR_3 = FUNC_6 (VAR_4, FUNC_2 (VAR_3),
           (FUNC_1 (VAR_3) == VAR_0
     ? FUNC_0 (FUNC_3 (VAR_3))
     : FUNC_3 (VAR_3)));
  VAR_6 = FUNC_4 (VAR_3);
  if (VAR_6)
    VAR_3 = FUNC_5 (VAR_3, VAR_6);

  return VAR_3;
}
