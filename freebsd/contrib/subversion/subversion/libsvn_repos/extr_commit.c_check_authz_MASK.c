
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_authz_access_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct edit_baton {int authz_baton; int (* authz_callback ) (int,int *,int *,char const*,int ,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int,int *,int *,char const*,int ,int *) ;
 int VAR_3 ;
 int * FUNC_2 (int ,int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(struct edit_baton *VAR_4, const char *VAR_5,
            svn_fs_root_t *VAR_6, svn_repos_authz_access_t VAR_7,
            apr_pool_t *VAR_8)
{
  if (VAR_4->authz_callback)
    {
      svn_boolean_t VAR_9;

      FUNC_0(VAR_4->authz_callback(VAR_7, &VAR_9, VAR_6, VAR_5,
                                           VAR_4->authz_baton, VAR_8));
      if (!VAR_9)
        return FUNC_2(VAR_7 & VAR_3 ?
                                VAR_1 :
                                VAR_0,
                                ((void*)0), "Access denied");
    }

  return VAR_2;
}
