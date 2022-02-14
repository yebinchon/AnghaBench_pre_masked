
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int svn_authz_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,char*,char const*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int **,char const*,int *,int ,int *) ;

svn_error_t *
FUNC_4(svn_authz_t **VAR_1, const char *VAR_2,
                     svn_boolean_t VAR_3, apr_pool_t *VAR_4)
{

  if (FUNC_2(VAR_2))
    return FUNC_0(VAR_0, ((void*)0),
                             "'%s' is not a file name", VAR_2);

  return FUNC_1(FUNC_3(VAR_1, VAR_2, ((void*)0),
                                               VAR_3, VAR_4));
}
