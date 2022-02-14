
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
struct TYPE_12__ {TYPE_2__* client_info; TYPE_1__* repository; } ;
typedef TYPE_3__ server_baton_t ;
struct TYPE_13__ {int * conn; TYPE_3__* server; } ;
typedef TYPE_4__ authz_baton_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int user; } ;
struct TYPE_10__ {int repos; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *,int *,char*,int ) ;
 int FUNC_4 (int *,int *,TYPE_3__*,int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,char const*,int *) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int ,int ,int ,char const*,int const* const*,int const*,int ,int ,int ,TYPE_4__*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_8(svn_ra_svn_conn_t *VAR_4,
                                       server_baton_t *VAR_5,
                                       svn_revnum_t VAR_6,
                                       const char *VAR_7,
                                       const svn_string_t *const *VAR_8,
                                       const svn_string_t *VAR_9,
                                       apr_pool_t *VAR_10)
{
  authz_baton_t VAR_11;

  VAR_11.server = VAR_5;
  VAR_11.conn = VAR_4;

  FUNC_1(FUNC_4(VAR_4, VAR_10, VAR_5, VAR_3, ((void*)0), VAR_0));
  FUNC_1(FUNC_3(VAR_5, VAR_4, VAR_10, "%s",
                      FUNC_5(VAR_6, VAR_7, VAR_10)));
  FUNC_0(FUNC_7(VAR_5->repository->repos, VAR_6,
                                            VAR_5->client_info->user,
                                            VAR_7, VAR_8, VAR_9,
                                            VAR_2, VAR_2,
                                            FUNC_2(VAR_5), &VAR_11,
                                            VAR_10));
  FUNC_1(FUNC_6(VAR_4, VAR_10, ""));

  return VAR_1;
}
