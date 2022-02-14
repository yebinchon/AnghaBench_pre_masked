
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int loop_vec_info ;
typedef enum vect_def_type { ____Placeholder_vect_def_type } vect_def_type ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int *,int *,int*) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_3, loop_vec_info VAR_4)
{
  tree VAR_5, VAR_6;
  tree VAR_7;
  enum vect_def_type VAR_8;

  if (!FUNC_0 (VAR_3))
    return 0;

  VAR_5 = FUNC_3 (VAR_3, 0);
  VAR_6 = FUNC_3 (VAR_3, 1);

  if (FUNC_2 (VAR_5) == VAR_2)
    {
      tree VAR_9 = FUNC_1 (VAR_5);
      if (!FUNC_4 (VAR_5, VAR_4, &VAR_9, &VAR_7, &VAR_8))
 return 0;
    }
  else if (FUNC_2 (VAR_5) != VAR_0 && FUNC_2 (VAR_5) != VAR_1)
    return 0;

  if (FUNC_2 (VAR_6) == VAR_2)
    {
      tree VAR_10 = FUNC_1 (VAR_6);
      if (!FUNC_4 (VAR_6, VAR_4, &VAR_10, &VAR_7, &VAR_8))
 return 0;
    }
  else if (FUNC_2 (VAR_6) != VAR_0 && FUNC_2 (VAR_6) != VAR_1)
    return 0;

  return 1;
}
