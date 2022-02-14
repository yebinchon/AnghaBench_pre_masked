
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t apr_size_t ;


 size_t FUNC_0 (char const*,size_t) ;

__attribute__((used)) static apr_size_t
FUNC_1(const char *VAR_0,
                     apr_size_t VAR_1)
{
  apr_size_t VAR_2;
  apr_size_t VAR_3 = VAR_1;
  if (VAR_1 == 0)
    return 0;

  VAR_2 = FUNC_0(VAR_0, VAR_1);

  --VAR_3;
  while (VAR_1 > VAR_2 && VAR_0[VAR_3] != '/')
    --VAR_3;

  if (VAR_3 == 0 && VAR_1 > 1 && *VAR_0 == '/')
    return 1;

  return VAR_3;
}
