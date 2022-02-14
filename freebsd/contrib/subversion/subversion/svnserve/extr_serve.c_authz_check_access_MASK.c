
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_repos_authz_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {int pool; TYPE_3__* client_info; TYPE_2__* repository; } ;
typedef TYPE_1__ server_baton_t ;
struct TYPE_7__ {scalar_t__ username_case; int authz_repos_name; int authzdb; } ;
typedef TYPE_2__ repository_t ;
struct TYPE_8__ {char* authz_user; scalar_t__ user; } ;
typedef TYPE_3__ client_info_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char const*,int ,TYPE_1__*,int *) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (int ,int ,char const*,char*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *FUNC_6(svn_boolean_t *VAR_5,
                                       const char *VAR_6,
                                       svn_repos_authz_access_t VAR_7,
                                       server_baton_t *VAR_8,
                                       apr_pool_t *VAR_9)
{
  repository_t *VAR_10 = VAR_8->repository;
  client_info_t *VAR_11 = VAR_8->client_info;





  if (!VAR_10->authzdb)
    {
      *VAR_5 = VAR_4;
      return VAR_3;
    }







  if (VAR_6 && *VAR_6 != '/')
    VAR_6 = FUNC_4(VAR_6, VAR_9);




  if (VAR_11->user && (! VAR_11->authz_user))
    {
      char *VAR_12 = FUNC_1(VAR_8->pool, VAR_11->user);
      if (VAR_10->username_case == VAR_1)
        FUNC_2(VAR_12, VAR_4);
      else if (VAR_10->username_case == VAR_0)
        FUNC_2(VAR_12, VAR_2);

      VAR_11->authz_user = VAR_12;
    }

  FUNC_0(FUNC_5(VAR_10->authzdb,
                                       VAR_10->authz_repos_name,
                                       VAR_6, VAR_11->authz_user,
                                       VAR_7, VAR_5, VAR_9));
  if (!*VAR_5)
    FUNC_0(FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9));

  return VAR_3;
}
