
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,char const*,char const*,int const*,int *) ;
 int * FUNC_1 (int *,char const*,char const*,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_root_t *VAR_0,
                 const char *VAR_1,
                 const char *VAR_2,
                 const svn_string_t *VAR_3,
                 svn_boolean_t VAR_4,
                 apr_pool_t *VAR_5)
{
  if (VAR_4)
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
  else
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
}
