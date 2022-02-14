
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;
typedef int apr_size_t ;



__attribute__((used)) static apr_uint64_t
FUNC_0(const char *VAR_0,
                     apr_size_t VAR_1)
{
  apr_size_t VAR_2 = 0;
  const char *VAR_3 = VAR_0 + VAR_1;


  for (; VAR_0 < VAR_3; ++VAR_0)
    if (*VAR_0 == '\n')
      ++VAR_2;


  return VAR_2 / 2;
}
