
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

tree
FUNC_1 (tree VAR_3,
      tree VAR_4)
{
  if (VAR_3 == VAR_0
      || VAR_4 == VAR_0)
    return VAR_0;

  if (VAR_3 == VAR_1
      || VAR_4 == VAR_1)
    return VAR_1;

  if (VAR_3 == VAR_2)
    return VAR_4;
  if (VAR_4 == VAR_2)
    return VAR_3;

  if (FUNC_0 (VAR_3, VAR_4))
    return VAR_3;

  return VAR_0;
}
