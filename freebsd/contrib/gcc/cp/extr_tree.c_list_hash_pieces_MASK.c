
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int hashval_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static hashval_t
FUNC_1 (tree VAR_0, tree VAR_1, tree VAR_2)
{
  hashval_t VAR_3 = 0;

  if (VAR_2)
    VAR_3 += FUNC_0 (VAR_2);

  if (VAR_1)
    VAR_3 += FUNC_0 (VAR_1);
  else
    VAR_3 += 1007;
  if (VAR_0)
    VAR_3 += FUNC_0 (VAR_0);
  else
    VAR_3 += 1009;
  return VAR_3;
}
