
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t apr_size_t ;
typedef int apr_int32_t ;


 scalar_t__ FUNC_0 (char*,char const*) ;

__attribute__((used)) static apr_int32_t
FUNC_1(char *VAR_0, apr_size_t VAR_1, const char VAR_2[][4])
{
  apr_size_t VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    if (VAR_2[VAR_3] && (FUNC_0(VAR_0, VAR_2[VAR_3]) == 0))
      return (apr_int32_t) VAR_3;

  return -1;
}
