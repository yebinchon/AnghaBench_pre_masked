
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ DECL_INITIAL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,int,scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_17 (tree VAR_9, tree VAR_10, int VAR_11, tree VAR_12)
{
  tree VAR_13;
  tree VAR_14 = FUNC_2 (VAR_10);
  tree VAR_15 = FUNC_2 (VAR_9);

  FUNC_11 (FUNC_1 (VAR_9) == VAR_6);

  if ((VAR_11 & VAR_1) && ! FUNC_16 (VAR_10))
    {


      tree VAR_16 = VAR_10;

      VAR_10 = FUNC_15 (VAR_12, FUNC_2 (VAR_10));


      DECL_INITIAL (VAR_17) = VAR_16;
      FUNC_9 (VAR_17, VAR_16, 0, VAR_4,
        VAR_2|VAR_1);
    }
  else if (!(VAR_11 & VAR_1) && ! FUNC_14 (VAR_10))
    return FUNC_12 (VAR_10);




  VAR_13 = FUNC_7 (VAR_0, VAR_10, 1);
  if (VAR_13 == VAR_8)
    return VAR_8;

  if ((VAR_11 & VAR_3)
      && FUNC_3 (VAR_14) != FUNC_3 (VAR_15)
      && FUNC_0 (VAR_14)
      && FUNC_0 (VAR_15))
    {

      tree VAR_18 = FUNC_13 (VAR_14, VAR_15, VAR_7, ((void*)0));
      if (VAR_18 == VAR_8)
 return VAR_8;
      if (VAR_18 == VAR_4)
 return FUNC_10 (VAR_15, VAR_14);
      VAR_13 = FUNC_4 (VAR_5, VAR_13, VAR_18, 1);
    }
  else
    VAR_13
      = FUNC_8 (FUNC_6 (VAR_15), VAR_13);
  return FUNC_5 (VAR_9, VAR_13);
}
