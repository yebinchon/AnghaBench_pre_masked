
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_repos_authz_access_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_2__ {int server; } ;
typedef TYPE_1__ authz_baton_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_1(svn_repos_authz_access_t VAR_0,
                                    svn_boolean_t *VAR_1,
                                    svn_fs_root_t *VAR_2,
                                    const char *VAR_3,
                                    void *VAR_4,
                                    apr_pool_t *VAR_5)
{
  authz_baton_t *VAR_6 = VAR_4;

  return FUNC_0(VAR_1, VAR_3, VAR_0, VAR_6->server, VAR_5);
}
