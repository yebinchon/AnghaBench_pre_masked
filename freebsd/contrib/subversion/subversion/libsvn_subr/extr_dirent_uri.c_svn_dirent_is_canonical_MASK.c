
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,int *) ;

svn_boolean_t
FUNC_3(const char *VAR_1, apr_pool_t *VAR_2)
{
  const char *VAR_3 = VAR_1;
  if (*VAR_3 == '/')
    {
      VAR_3++;
    }
  return FUNC_0(VAR_3);
}
