
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gcov_unsigned_t ;


 int FUNC_0 (int const) ;
 int * FUNC_1 (int) ;

gcov_unsigned_t
FUNC_2 (void)
{
  gcov_unsigned_t VAR_0;
  const gcov_unsigned_t *VAR_1 = FUNC_1 (1);

  if (!VAR_1)
    return 0;
  VAR_0 = FUNC_0 (VAR_1[0]);
  return VAR_0;
}
