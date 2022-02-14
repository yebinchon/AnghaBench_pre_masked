
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 char const* FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,int *) ;
 scalar_t__ FUNC_4 (char const*,int) ;

const char *
FUNC_5(const char *VAR_0, apr_pool_t *VAR_1)
{
  apr_size_t VAR_2 = FUNC_1(VAR_0);
  apr_size_t VAR_3;

  FUNC_0(FUNC_3(VAR_0, ((void*)0)));

  if (FUNC_4(VAR_0, VAR_2))
    return "";

  VAR_3 = VAR_2;
  while (VAR_3 > 0 && VAR_0[VAR_3 - 1] != '/')
    --VAR_3;

  return FUNC_2(VAR_0 + VAR_3, VAR_1);
}
