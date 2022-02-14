
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_13__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
struct TYPE_14__ {int * pool; int * conn; } ;
typedef TYPE_4__ file_revs_baton_t ;
struct TYPE_15__ {int * conn; TYPE_3__* server; } ;
typedef TYPE_5__ authz_baton_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int repos; TYPE_1__* fs_path; } ;
struct TYPE_11__ {int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,int *,int *,char*,int ) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ,char const*,int *) ;
 int FUNC_6 (char const*,int ,int ,scalar_t__,int *) ;
 int FUNC_7 (int *,char*,char const**,int *,int *,scalar_t__*) ;
 int FUNC_8 (int *,int *,char*) ;
 int * FUNC_9 (int *,int *,char*) ;
 char* FUNC_10 (char const*,int *) ;
 int * FUNC_11 (int ,char const*,int ,int ,scalar_t__,int ,TYPE_5__*,int ,TYPE_4__*,int *) ;
 int FUNC_12 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_ra_svn_conn_t *VAR_4,
              apr_pool_t *VAR_5,
              svn_ra_svn__list_t *VAR_6,
              void *VAR_7)
{
  server_baton_t *VAR_8 = VAR_7;
  svn_error_t *VAR_9, *VAR_10;
  file_revs_baton_t VAR_11;
  svn_revnum_t VAR_12, VAR_13;
  const char *VAR_14;
  const char *VAR_15;
  apr_uint64_t VAR_16;
  svn_boolean_t VAR_17;
  authz_baton_t VAR_18;

  VAR_18.server = VAR_8;
  VAR_18.conn = VAR_4;


  FUNC_1(FUNC_7(VAR_6, "c(?r)(?r)?B",
                                  &VAR_14, &VAR_12, &VAR_13,
                                  &VAR_16));
  VAR_14 = FUNC_10(VAR_14, VAR_5);
  FUNC_1(FUNC_12(VAR_4, VAR_5, VAR_8));
  VAR_15 = FUNC_5(VAR_8->repository->fs_path->data, VAR_14, VAR_5);

  if (VAR_16 == VAR_2)
    VAR_17 = VAR_0;
  else
    VAR_17 = (svn_boolean_t) VAR_16;

  FUNC_1(FUNC_3(VAR_8, VAR_4, VAR_5, "%s",
                      FUNC_6(VAR_15, VAR_12, VAR_13,
                                             VAR_17,
                                             VAR_5)));

  VAR_11.conn = VAR_4;
  VAR_11.pool = ((void*)0);

  VAR_9 = FUNC_11(VAR_8->repository->repos, VAR_15, VAR_12,
                                 VAR_13, VAR_17,
                                 FUNC_2(VAR_8), &VAR_18,
                                 VAR_3, &VAR_11, VAR_5);
  VAR_10 = FUNC_9(VAR_4, VAR_5, "done");
  if (VAR_10)
    {
      FUNC_4(VAR_9);
      return VAR_10;
    }
  FUNC_0(VAR_9);
  FUNC_1(FUNC_8(VAR_4, VAR_5, ""));

  return VAR_1;
}
