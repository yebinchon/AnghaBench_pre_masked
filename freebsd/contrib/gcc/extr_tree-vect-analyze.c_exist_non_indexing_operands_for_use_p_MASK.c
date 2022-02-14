
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int stmt_vec_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_4 (tree VAR_1, tree VAR_2)
{
  tree VAR_3;
  stmt_vec_info VAR_4 = FUNC_3 (VAR_2);




  if (!FUNC_0 (VAR_4))
    return 1;
  if (FUNC_1 (FUNC_2 (VAR_2, 0)) == VAR_0)
    return 0;

  VAR_3 = FUNC_2 (VAR_2, 1);

  if (FUNC_1 (VAR_3) != VAR_0)
    return 0;

  if (VAR_3 == VAR_1)
    return 1;

  return 0;
}
