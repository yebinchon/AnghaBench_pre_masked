
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int*,int*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

int
FUNC_4 (tree VAR_1, int* VAR_2)
{
  tree VAR_3 = FUNC_1 (VAR_1);
  int VAR_4 = 0;

  tree VAR_5 = FUNC_2 (VAR_1, VAR_2, &VAR_4);
  if (VAR_5 == VAR_0)
    return 0;
  if (FUNC_0 (VAR_3))
    VAR_3 = FUNC_1 (VAR_3);
  if (!FUNC_3 (VAR_3, VAR_5))
    return 0;
  return VAR_4 ? -1 : 1;
}
