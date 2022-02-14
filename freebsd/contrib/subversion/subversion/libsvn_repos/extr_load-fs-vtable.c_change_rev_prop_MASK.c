
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,char const*,int *,int const*,int *) ;
 int FUNC_2 (int const**,int *,char const*,int const*,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int *,char const*,int *,int const*,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_repos_t *VAR_1,
                svn_revnum_t VAR_2,
                const char *VAR_3,
                const svn_string_t *VAR_4,
                svn_boolean_t VAR_5,
                svn_boolean_t VAR_6,
                apr_pool_t *VAR_7)
{
  if (VAR_6)
    FUNC_0(FUNC_2(&VAR_4, ((void*)0), VAR_3, VAR_4, VAR_7, VAR_7));

  if (VAR_5)
    return FUNC_4(VAR_1, VAR_2, ((void*)0), VAR_3,
                                         ((void*)0), VAR_4, VAR_0, VAR_0,
                                         ((void*)0), ((void*)0), VAR_7);
  else
    return FUNC_1(FUNC_3(VAR_1), VAR_2, VAR_3,
                                   ((void*)0), VAR_4, VAR_7);
}
