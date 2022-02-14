
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (scalar_t__) ;

tree
FUNC_12 (tree VAR_5, tree VAR_6)
{
  tree VAR_7;
  tree VAR_8;
  tree VAR_9 = FUNC_4 (VAR_6), VAR_10 = FUNC_3 (VAR_6);
  tree VAR_11 = FUNC_5 (VAR_6), VAR_12 = FUNC_1 (VAR_6);
  tree VAR_13 = VAR_1, VAR_14 = VAR_1;

  if (VAR_11)
    VAR_13 = FUNC_10 (VAR_5, FUNC_7 (VAR_11, VAR_3));
  else if (VAR_12 && FUNC_0 (FUNC_6 (VAR_12)))
    {
      VAR_13 = FUNC_10 (VAR_5, VAR_12);
      VAR_12 = VAR_1;
    }

  VAR_8 = FUNC_2 (VAR_6);
  if (VAR_8)
    {
      if (VAR_9)
 VAR_8 = FUNC_9 (VAR_0, VAR_4, VAR_8, VAR_9);
      VAR_14 = VAR_8;
    }

  VAR_8 = VAR_12;
  if (VAR_8)
    {
      if (VAR_14)
 VAR_14 = FUNC_9 (VAR_2, VAR_4, VAR_14, VAR_8);
      else
 VAR_14 = VAR_8;
    }

  if (!FUNC_11 (VAR_10))
    {
      if (VAR_14)
 VAR_14 = FUNC_9 (VAR_2, VAR_4, VAR_14, VAR_10);
      else
 VAR_14 = VAR_10;
    }

  if (VAR_14)
    {
      VAR_7 = FUNC_10 (VAR_5, VAR_14);
      if (VAR_13)
 VAR_7 = FUNC_9 (VAR_2, VAR_5, VAR_13, VAR_7);
    }
  else if (VAR_13)
    VAR_7 = VAR_13;
  else
    VAR_7 = FUNC_8 (VAR_5, 0);

  return VAR_7;
}
