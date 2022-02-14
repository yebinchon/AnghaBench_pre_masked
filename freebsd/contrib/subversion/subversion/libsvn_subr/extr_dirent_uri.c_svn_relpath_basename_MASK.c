
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

const char *
FUNC_4(const char *VAR_0,
                     apr_pool_t *VAR_1)
{
  apr_size_t VAR_2 = FUNC_3(VAR_0);
  apr_size_t VAR_3;

  FUNC_1(FUNC_2(VAR_0));

  VAR_3 = VAR_2;
  while (VAR_3 > 0 && VAR_0[VAR_3 - 1] != '/')
    --VAR_3;

  if (VAR_1)
    return FUNC_0(VAR_1, VAR_0 + VAR_3, VAR_2 - VAR_3);
  else
    return VAR_0 + VAR_3;
}
