
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(const char *VAR_0, apr_pool_t *VAR_1)
{
  return FUNC_2(VAR_0, VAR_1) ||
      FUNC_0(VAR_0, VAR_1) ||
      FUNC_1(VAR_0);
}
