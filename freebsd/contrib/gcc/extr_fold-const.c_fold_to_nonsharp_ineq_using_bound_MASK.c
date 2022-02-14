
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_5, tree VAR_6)
{
  tree VAR_7, VAR_8, VAR_9 = FUNC_4 (VAR_5), VAR_10, VAR_11, VAR_12;

  if (FUNC_2 (VAR_6) == VAR_2)
    VAR_7 = FUNC_3 (VAR_6, 0);
  else if (FUNC_2 (VAR_6) == VAR_1)
    VAR_7 = FUNC_3 (VAR_6, 1);
  else
    return VAR_4;

  VAR_8 = FUNC_4 (VAR_7);
  if (!FUNC_0 (VAR_8)
      && !FUNC_1 (VAR_8))
    return VAR_4;

  if (FUNC_2 (VAR_5) == VAR_2)
    {
      VAR_10 = FUNC_3 (VAR_5, 1);
      VAR_12 = FUNC_3 (VAR_5, 0);
    }
  else if (FUNC_2 (VAR_5) == VAR_1)
    {
      VAR_10 = FUNC_3 (VAR_5, 0);
      VAR_12 = FUNC_3 (VAR_5, 1);
    }
  else
    return VAR_4;

  if (FUNC_4 (VAR_10) != VAR_8)
    return VAR_4;

  VAR_11 = FUNC_5 (VAR_3, VAR_8, VAR_10, VAR_7);
  if (!FUNC_6 (VAR_11))
    return VAR_4;

  return FUNC_5 (VAR_0, VAR_9, VAR_7, VAR_12);
}
