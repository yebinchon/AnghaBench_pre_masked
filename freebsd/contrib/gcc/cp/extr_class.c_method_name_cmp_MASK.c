
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ const VAR_0 ;
 int FUNC_1 (scalar_t__ const) ;

__attribute__((used)) static int
FUNC_2 (const void* VAR_1, const void* VAR_2)
{
  const tree *const VAR_3 = (const tree *) VAR_1;
  const tree *const VAR_4 = (const tree *) VAR_2;

  if (*VAR_3 == VAR_0 && *VAR_4 == VAR_0)
    return 0;
  if (*VAR_3 == VAR_0)
    return -1;
  if (*VAR_4 == VAR_0)
    return 1;
  if (FUNC_0 (FUNC_1 (*VAR_3)) < FUNC_0 (FUNC_1 (*VAR_4)))
    return -1;
  return 1;
}
