
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int stmt_vec_info ;
typedef int loop_vec_info ;
typedef enum vect_def_type { ____Placeholder_vect_def_type } vect_def_type ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,int ,int *,int *,int*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9 (tree VAR_5, tree VAR_6, tree *VAR_7, tree *VAR_8)
{
  tree VAR_9;
  loop_vec_info VAR_10;
  stmt_vec_info VAR_11;
  tree VAR_12;
  tree VAR_13 = FUNC_4 (VAR_5);
  tree VAR_14;
  enum vect_def_type VAR_15;
  tree VAR_16;

  VAR_11 = FUNC_8 (VAR_6);
  VAR_10 = FUNC_1 (VAR_11);

  if (!FUNC_7 (VAR_5, VAR_10, VAR_8, &VAR_16, &VAR_15))
    return 0;

  if (VAR_15 != VAR_4
      && VAR_15 != VAR_3 && VAR_15 != VAR_2)
    return 0;

  if (! *VAR_8)
    return 0;

  if (FUNC_2 (*VAR_8) != VAR_0)
    return 0;

  VAR_12 = FUNC_3 (*VAR_8, 1);
  if (FUNC_2 (VAR_12) != VAR_1)
    return 0;

  VAR_14 = FUNC_3 (VAR_12, 0);

  *VAR_7 = FUNC_4 (VAR_14);
  if (!FUNC_0 (VAR_13) || !FUNC_0 (*VAR_7)
      || (FUNC_6 (VAR_13) != FUNC_6 (*VAR_7))
      || (FUNC_5 (VAR_13) < (FUNC_5 (*VAR_7) * 2)))
    return 0;

  if (!FUNC_7 (VAR_14, VAR_10, &VAR_9, &VAR_9, &VAR_15))
    return 0;

  if (VAR_15 != VAR_3 && VAR_15 != VAR_2
      && VAR_15 != VAR_4)
    return 0;

  return 1;
}
