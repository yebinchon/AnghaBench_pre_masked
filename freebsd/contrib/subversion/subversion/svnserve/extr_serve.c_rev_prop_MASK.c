
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_9__ {TYPE_1__* repository; } ;
typedef TYPE_2__ server_baton_t ;
struct TYPE_10__ {int * conn; TYPE_2__* server; } ;
typedef TYPE_3__ authz_baton_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int repos; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,int *,char*,int ) ;
 int FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (int *,char*,int *,char const**) ;
 int FUNC_6 (int *,int *,char*,int *) ;
 int FUNC_7 (int **,int ,int ,char const*,int ,TYPE_3__*,int *) ;
 int FUNC_8 (int *,int *,TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_ra_svn_conn_t *VAR_1,
         apr_pool_t *VAR_2,
         svn_ra_svn__list_t *VAR_3,
         void *VAR_4)
{
  server_baton_t *VAR_5 = VAR_4;
  svn_revnum_t VAR_6;
  const char *VAR_7;
  svn_string_t *VAR_8;
  authz_baton_t VAR_9;

  VAR_9.server = VAR_5;
  VAR_9.conn = VAR_1;

  FUNC_1(FUNC_5(VAR_3, "rc", &VAR_6, &VAR_7));
  FUNC_1(FUNC_3(VAR_5, VAR_1, VAR_2, "%s",
                      FUNC_4(VAR_6, VAR_7, VAR_2)));

  FUNC_1(FUNC_8(VAR_1, VAR_2, VAR_5));
  FUNC_0(FUNC_7(&VAR_8, VAR_5->repository->repos, VAR_6,
                                         VAR_7, FUNC_2(VAR_5),
                                         &VAR_9, VAR_2));
  FUNC_1(FUNC_6(VAR_1, VAR_2, "(?s)", VAR_8));
  return VAR_0;
}
