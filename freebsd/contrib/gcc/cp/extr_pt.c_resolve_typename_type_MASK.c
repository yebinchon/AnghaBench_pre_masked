
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,int ,int ,int ,int) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;

tree
FUNC_16 (tree VAR_9, bool VAR_10)
{
  tree VAR_11;
  tree VAR_12;
  tree VAR_13;
  int VAR_14;
  tree VAR_15;

  FUNC_11 (FUNC_2 (VAR_9) == VAR_4);

  VAR_11 = FUNC_6 (VAR_9);
  VAR_12 = FUNC_7 (VAR_9);



  if (FUNC_2 (VAR_11) == VAR_4)
    VAR_11 = FUNC_16 (VAR_11, VAR_10);


  if (VAR_11 == VAR_6 || FUNC_2 (VAR_11) == VAR_4)
    return VAR_6;


  if (FUNC_2 (VAR_11) == VAR_3)
    return VAR_9;


  if (VAR_10 && !FUNC_10 (VAR_11))
    return VAR_6;


  VAR_11 = FUNC_0 (VAR_11);



  VAR_15 = FUNC_15 (VAR_11);

  VAR_13 = FUNC_12 (VAR_11, VAR_12, 0, 1);

  VAR_14 = FUNC_9 (VAR_9);


  if (!VAR_13)
    VAR_9 = VAR_6;
  else if (FUNC_2 (FUNC_5 (VAR_9)) == VAR_0
    && FUNC_2 (VAR_13) == VAR_5)
    VAR_9 = FUNC_4 (VAR_13);
  else if (FUNC_2 (FUNC_5 (VAR_9)) == VAR_2
    && FUNC_1 (VAR_13))
    {
      tree VAR_16;
      tree VAR_17;

      VAR_16 = FUNC_3 (FUNC_5 (VAR_9), 0);
      VAR_17 = FUNC_3 (FUNC_5 (VAR_9), 1);

      VAR_9 = FUNC_13 (VAR_16, VAR_17, VAR_1, VAR_1,
                           0, VAR_7 | VAR_8);
    }
  else
    VAR_9 = VAR_6;

  if (VAR_9 != VAR_6 && VAR_14)
    VAR_9 = FUNC_8 (VAR_9, VAR_14);

  if (VAR_15)
    FUNC_14 (VAR_15);

  return VAR_9;
}
