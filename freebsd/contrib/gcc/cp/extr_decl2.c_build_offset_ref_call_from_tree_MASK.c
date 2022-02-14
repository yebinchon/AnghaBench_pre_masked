
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_11 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

tree
FUNC_13 (tree VAR_8, tree VAR_9)
{
  tree VAR_10;
  tree VAR_11;
  tree VAR_12;
  tree VAR_13;

  VAR_10 = VAR_8;
  VAR_11 = VAR_9;
  VAR_13 = FUNC_1 (VAR_8, 0);

  if (VAR_7)
    {
      FUNC_9 (FUNC_0 (VAR_8) == VAR_2
    || FUNC_0 (VAR_8) == VAR_3);
      if (FUNC_12 (VAR_8)
   || FUNC_2 (VAR_9))
 return FUNC_5 (VAR_1, VAR_8, VAR_9, VAR_4);




      VAR_9 = FUNC_6 (VAR_9);
      if (FUNC_0 (VAR_8) == VAR_2)
 VAR_13 = FUNC_8 (VAR_0, VAR_13, 0);
      VAR_13 = FUNC_7 (VAR_13);
      VAR_9 = FUNC_11 (VAR_4, VAR_13, VAR_9);

      VAR_8 = FUNC_7 (VAR_8);
    }







  if (FUNC_0 (VAR_8) == VAR_5)
    {
      tree VAR_14 = FUNC_8 (VAR_0, VAR_13, 0);
      VAR_8 = FUNC_1 (VAR_8, 1);
      VAR_8 = FUNC_10 (&VAR_14, VAR_8);
      VAR_9 = FUNC_11 (VAR_4, VAR_14, VAR_9);
    }

  VAR_12 = FUNC_3 (VAR_8, VAR_9);
  if (VAR_7 && VAR_12 != VAR_6)
    return FUNC_4 (VAR_1, VAR_12, VAR_10, VAR_11, VAR_4);
  return VAR_12;
}
