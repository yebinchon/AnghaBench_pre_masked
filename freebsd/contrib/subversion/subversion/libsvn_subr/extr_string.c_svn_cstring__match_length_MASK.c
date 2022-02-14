
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;



apr_size_t
FUNC_0(const char *VAR_0,
                          const char *VAR_1,
                          apr_size_t VAR_2)
{
  apr_size_t VAR_3 = 0;
  for (; VAR_3 < VAR_2; ++VAR_3)
    if (VAR_0[VAR_3] != VAR_1[VAR_3])
      break;

  return VAR_3;
}
