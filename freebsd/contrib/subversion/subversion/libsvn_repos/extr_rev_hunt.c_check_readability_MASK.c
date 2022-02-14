
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* svn_repos_authz_func_t ) (int *,int *,char const*,void*,int *) ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_root_t *VAR_2,
                  const char *VAR_3,
                  svn_repos_authz_func_t VAR_4,
                  void *VAR_5,
                  apr_pool_t *VAR_6)
{
  svn_boolean_t VAR_7;
  FUNC_0(VAR_4(&VAR_7, VAR_2, VAR_3, VAR_5, VAR_6));
  if (! VAR_7)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Unreadable path encountered; access denied"));
  return VAR_1;
}
