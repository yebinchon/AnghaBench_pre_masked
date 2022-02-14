
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,int ) ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_16 (tree VAR_5, tree VAR_6, tree VAR_7)
{
  tree VAR_8, VAR_9, VAR_10;

  if (!FUNC_15 (VAR_6, VAR_3, VAR_3, VAR_4))
    return VAR_1;

  VAR_8 = FUNC_4 (VAR_6);
  VAR_9 = FUNC_4 (FUNC_0 (VAR_6));


  if (FUNC_11 (VAR_8, VAR_9, 0))
    return FUNC_8 (VAR_7, VAR_8);


  if (FUNC_1 (VAR_8) == VAR_2
      && FUNC_1 (VAR_9) == VAR_2
      && !FUNC_2 (VAR_8)
      && !FUNC_2 (VAR_9))
    {
      REAL_VALUE_TYPE VAR_11, VAR_12;

      VAR_11 = FUNC_3 (VAR_8);
      VAR_12 = FUNC_3 (VAR_9);

      FUNC_12 (&VAR_11, &VAR_12);
      return FUNC_6 (VAR_7, VAR_11);
    }



  if (FUNC_14 (VAR_9))
    return FUNC_10 (VAR_7,
        FUNC_7 (VAR_0, VAR_7, VAR_8),
        VAR_9);


  VAR_10 = FUNC_9 (VAR_8);
  if (VAR_10)
    {
      VAR_6 = FUNC_13 (VAR_1, VAR_10, FUNC_0 (VAR_6));
      return FUNC_5 (VAR_5, VAR_6);
    }

  return VAR_1;
}
