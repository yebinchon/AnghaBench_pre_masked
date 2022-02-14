
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_repos_authz_access_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_12__ {TYPE_2__* repository; TYPE_1__* client_info; } ;
typedef TYPE_3__ server_baton_t ;
typedef enum access_type { ____Placeholder_access_type } access_type ;
typedef int apr_pool_t ;
struct TYPE_11__ {int auth_access; scalar_t__ use_sasl; scalar_t__ pwdb; } ;
struct TYPE_10__ {scalar_t__ tunnel_user; int * user; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,TYPE_3__*,int,int ) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ,int *,int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*,int,char const*,int ) ;
 int VAR_6 ;
 int * FUNC_5 (int ,int ,int *) ;
 int * FUNC_6 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static svn_error_t *FUNC_7(svn_ra_svn_conn_t *VAR_7,
                                     apr_pool_t *VAR_8,
                                     server_baton_t *VAR_9,
                                     svn_repos_authz_access_t VAR_10,
                                     const char *VAR_11,
                                     svn_boolean_t VAR_12)
{
  enum access_type VAR_13 = (VAR_10 & VAR_6) ?
    VAR_5 : VAR_0;




  if (FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12))
    {
      FUNC_0(FUNC_2(VAR_9, VAR_8));
      return FUNC_6(VAR_7, VAR_8, VAR_9);
    }







  if (VAR_9->client_info->user == ((void*)0)
      && VAR_9->repository->auth_access >= VAR_13
      && (VAR_9->client_info->tunnel_user || VAR_9->repository->pwdb
          || VAR_9->repository->use_sasl))
    FUNC_0(FUNC_1(VAR_7, VAR_8, VAR_9, VAR_13, VAR_4));



  if (! FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12))
    return FUNC_5(VAR_2,
                            FUNC_3(VAR_1,
                                                 ((void*)0), ((void*)0), VAR_9),
                            ((void*)0));


  FUNC_0(FUNC_2(VAR_9, VAR_8));

  return VAR_3;
}
