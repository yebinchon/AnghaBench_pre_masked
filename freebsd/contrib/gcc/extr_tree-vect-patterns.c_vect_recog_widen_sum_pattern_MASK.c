
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int stmt_vec_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_4 ;
 int * FUNC_5 (int ,int *,int *,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int **,int **) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_7, tree *VAR_8, tree *VAR_9)
{
  tree VAR_10, VAR_11;
  tree VAR_12, VAR_13;
  stmt_vec_info VAR_14 = FUNC_9 (VAR_7);
  tree VAR_15, VAR_16;
  tree VAR_17;

  if (FUNC_1 (VAR_7) != VAR_0)
    return ((void*)0);

  VAR_11 = FUNC_2 (VAR_7, 1);
  VAR_15 = FUNC_3 (VAR_11);
  if (FUNC_1 (VAR_11) != VAR_1)
    return ((void*)0);

  if (FUNC_0 (VAR_14) != VAR_6)
    return ((void*)0);

  VAR_12 = FUNC_2 (VAR_11, 0);
  VAR_13 = FUNC_2 (VAR_11, 1);
  if (FUNC_4 (FUNC_3 (VAR_12)) != FUNC_4 (VAR_15)
      || FUNC_4 (FUNC_3 (VAR_13)) != FUNC_4 (VAR_15))
    return ((void*)0);







  if (!FUNC_10 (VAR_12, VAR_7, &VAR_16, &VAR_10))
    return ((void*)0);

  VAR_12 = FUNC_2 (FUNC_2 (VAR_10, 1), 0);
  *VAR_8 = VAR_16;
  *VAR_9 = VAR_15;


  VAR_17 = FUNC_5 (VAR_4, VAR_15, VAR_12, VAR_13);
  if (FUNC_8 (VAR_2))
    {
      FUNC_6 (VAR_5, "vect_recog_widen_sum_pattern: detected: ");
      FUNC_7 (VAR_5, VAR_17, VAR_3);
    }
  return VAR_17;
}
