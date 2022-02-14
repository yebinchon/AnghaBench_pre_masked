
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int stmt_vec_info ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_9 (int ,int *,int *,int *,int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int *,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int *,int **,int **) ;

__attribute__((used)) static tree
FUNC_16 (tree VAR_11, tree *VAR_12, tree *VAR_13)
{
  tree VAR_14, VAR_15;
  tree VAR_16, VAR_17;
  tree VAR_18, VAR_19;
  stmt_vec_info VAR_20 = FUNC_14 (VAR_11);
  tree VAR_21, VAR_22;
  tree VAR_23;
  tree VAR_24;

  if (FUNC_4 (VAR_11) != VAR_1)
    return ((void*)0);

  VAR_15 = FUNC_5 (VAR_11, 1);
  VAR_21 = FUNC_6 (VAR_15);
  if (FUNC_4 (VAR_15) != VAR_3)
    return ((void*)0);

  if (FUNC_2 (VAR_20))
    {


      VAR_14 = FUNC_3 (VAR_20);
      VAR_15 = FUNC_5 (VAR_14, 1);
      VAR_21 = FUNC_6 (VAR_15);
      if (FUNC_4 (VAR_15) != VAR_7)
        return ((void*)0);
      VAR_16 = FUNC_5 (VAR_15, 0);
      VAR_17 = FUNC_5 (VAR_15, 1);
      VAR_22 = FUNC_6 (VAR_16);
    }
  else
    {
      tree VAR_25;

      if (FUNC_1 (VAR_20) != VAR_10)
        return ((void*)0);
      VAR_16 = FUNC_5 (VAR_15, 0);
      VAR_17 = FUNC_5 (VAR_15, 1);
      if (FUNC_7 (FUNC_6 (VAR_16)) != FUNC_7 (VAR_21)
          || FUNC_7 (FUNC_6 (VAR_17)) != FUNC_7 (VAR_21))
        return ((void*)0);
      VAR_14 = VAR_11;

      if (FUNC_15 (VAR_16, VAR_14, &VAR_22, &VAR_25))
        {
          VAR_14 = VAR_25;
          VAR_15 = FUNC_5 (VAR_14, 1);
          VAR_16 = FUNC_5 (VAR_15, 0);
        }
      else
        VAR_22 = VAR_21;
    }






  VAR_24 = VAR_22;
  VAR_14 = FUNC_0 (VAR_16);
  FUNC_11 (*VAR_14);
  VAR_20 = FUNC_14 (VAR_14);
  FUNC_11 (VAR_20);
  if (FUNC_1 (VAR_20) != VAR_9)
    return ((void*)0);
  VAR_15 = FUNC_5 (VAR_14, 1);
  if (FUNC_4 (VAR_15) != VAR_2)
    return ((void*)0);
  if (FUNC_2 (VAR_20))
    {


      VAR_14 = FUNC_3 (VAR_20);
      VAR_15 = FUNC_5 (VAR_14, 1);
      if (FUNC_4 (VAR_15) != VAR_6)
        return ((void*)0);
      VAR_20 = FUNC_14 (VAR_14);
      FUNC_11 (VAR_20);
      FUNC_11 (FUNC_1 (VAR_20) == VAR_9);
      VAR_18 = FUNC_5 (VAR_15, 0);
      VAR_19 = FUNC_5 (VAR_15, 1);
    }
  else
    {
      tree VAR_26, VAR_27;
      tree VAR_28;
      tree VAR_29, VAR_30;

      VAR_29 = FUNC_5 (VAR_15, 0);
      VAR_30 = FUNC_5 (VAR_15, 1);
      if (FUNC_7 (FUNC_6 (VAR_29))
    != FUNC_7 (VAR_24)
          || FUNC_7 (FUNC_6 (VAR_30))
    != FUNC_7 (VAR_24))
        return ((void*)0);
      if (!FUNC_15 (VAR_29, VAR_14, &VAR_26, &VAR_28))
        return ((void*)0);
      VAR_18 = FUNC_5 (FUNC_5 (VAR_28, 1), 0);
      if (!FUNC_15 (VAR_30, VAR_14, &VAR_27, &VAR_28))
        return ((void*)0);
      VAR_19 = FUNC_5 (FUNC_5 (VAR_28, 1), 0);
      if (FUNC_7 (VAR_26) != FUNC_7 (VAR_27))
        return ((void*)0);
      if (FUNC_8 (VAR_24) != FUNC_8 (VAR_26) * 2)
 return ((void*)0);
    }

  VAR_22 = FUNC_6 (VAR_18);
  *VAR_12 = VAR_22;
  *VAR_13 = VAR_21;


  VAR_23 = FUNC_9 (VAR_0, VAR_21, VAR_18, VAR_19, VAR_17);
  if (FUNC_13 (VAR_4))
    {
      FUNC_10 (VAR_8, "vect_recog_dot_prod_pattern: detected: ");
      FUNC_12 (VAR_8, VAR_23, VAR_5);
    }
  return VAR_23;
}
