
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int * VAR_3 ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int * VAR_4 ;
 int FUNC_9 (int ,int ) ;

tree
FUNC_10 (tree VAR_5)
{
  tree VAR_6, VAR_7, VAR_8;





  if (FUNC_1 (VAR_5) == VAR_2)
    {
      REAL_VALUE_TYPE VAR_9;
      tree VAR_10 = ((void*)0);

      VAR_9 = FUNC_3 (VAR_5);
      if (FUNC_6 (FUNC_4 (VAR_5)) > FUNC_6 (VAR_4)
   && FUNC_8 (FUNC_5 (VAR_4), &VAR_9))
 VAR_10 = VAR_4;
      else if (FUNC_6 (FUNC_4 (VAR_5))
        > FUNC_6 (VAR_3)
        && FUNC_8 (FUNC_5 (VAR_3), &VAR_9))
 VAR_10 = VAR_3;
      if (VAR_10)
 return FUNC_7 (VAR_10, FUNC_9 (FUNC_5 (VAR_10), VAR_9));
    }

  if (FUNC_1 (VAR_5) != VAR_1
      && FUNC_1 (VAR_5) != VAR_0)
    return VAR_5;

  VAR_6 = FUNC_2 (VAR_5, 0);
  VAR_8 = FUNC_4 (VAR_6);
  VAR_7 = FUNC_4 (VAR_5);

  if (!FUNC_0 (VAR_8))
    return VAR_5;

  if (FUNC_6 (VAR_8) > FUNC_6 (VAR_7))
    return VAR_5;

  return FUNC_10 (VAR_6);
}
