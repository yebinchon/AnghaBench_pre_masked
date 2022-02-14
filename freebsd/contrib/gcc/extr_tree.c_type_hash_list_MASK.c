
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef unsigned int hashval_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_3 (int ,unsigned int) ;

unsigned int
FUNC_4 (tree VAR_1, hashval_t VAR_2)
{
  tree VAR_3;

  for (VAR_3 = VAR_1; VAR_3; VAR_3 = FUNC_0 (VAR_3))
    if (FUNC_1 (VAR_3) != VAR_0)
      VAR_2 = FUNC_3 (FUNC_2 (FUNC_1 (VAR_3)),
     VAR_2);

  return VAR_2;
}
