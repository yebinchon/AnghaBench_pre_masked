
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (char const*,scalar_t__,int *) ;
 int * FUNC_1 (char const*,scalar_t__,int *) ;

svn_error_t *
FUNC_2(const char *VAR_0,
                                     svn_boolean_t VAR_1,
                                     svn_boolean_t VAR_2,
                                     apr_pool_t *VAR_3)
{
  if (VAR_1)
    return FUNC_1(VAR_0, VAR_2, VAR_3);
  return FUNC_0(VAR_0, VAR_2, VAR_3);
}
