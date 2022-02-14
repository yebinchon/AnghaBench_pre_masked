
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_lock_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_12__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
struct TYPE_13__ {int * conn; TYPE_3__* server; } ;
typedef TYPE_4__ authz_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_11__ {int repos; TYPE_1__* fs_path; } ;
struct TYPE_10__ {int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *,int *,char*,int ) ;
 int * FUNC_7 (int *,TYPE_3__*,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_9 (int ,int *,char*) ;
 char* FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (char const*,int *) ;
 int FUNC_12 (int *,char*,char const**,char const**) ;
 int FUNC_13 (int *,int *,char*,...) ;
 int FUNC_14 (char const*,int *) ;
 int FUNC_15 (int **,int ,char const*,scalar_t__,int ,TYPE_4__*,int *) ;
 int FUNC_16 (int *,int *,TYPE_3__*) ;
 int FUNC_17 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_18(svn_ra_svn_conn_t *VAR_6,
          apr_pool_t *VAR_7,
          svn_ra_svn__list_t *VAR_8,
          void *VAR_9)
{
  server_baton_t *VAR_10 = VAR_9;
  const char *VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  svn_depth_t VAR_14;
  apr_hash_t *VAR_15;
  apr_hash_index_t *VAR_16;
  svn_error_t *VAR_17;
  authz_baton_t VAR_18;

  VAR_18.server = VAR_10;
  VAR_18.conn = VAR_6;

  FUNC_1(FUNC_12(VAR_8, "c?(?w)", &VAR_11, &VAR_13));

  VAR_14 = VAR_13 ? FUNC_8(VAR_13) : VAR_5;
  if ((VAR_14 != VAR_2) &&
      (VAR_14 != VAR_3) &&
      (VAR_14 != VAR_4) &&
      (VAR_14 != VAR_5))
    {
      VAR_17 = FUNC_9(VAR_0, ((void*)0),
                             "Invalid 'depth' specified in get-locks request");
      return FUNC_7(VAR_17, VAR_10, VAR_6, VAR_7);
    }

  VAR_12 = FUNC_10(VAR_10->repository->fs_path->data,
                               FUNC_14(VAR_11, VAR_7), VAR_7);

  FUNC_1(FUNC_16(VAR_6, VAR_7, VAR_10));

  FUNC_1(FUNC_6(VAR_10, VAR_6, VAR_7, "get-locks %s",
                      FUNC_11(VAR_12, VAR_7)));
  FUNC_0(FUNC_15(&VAR_15, VAR_10->repository->repos,
                                      VAR_12, VAR_14,
                                      FUNC_5(VAR_10), &VAR_18,
                                      VAR_7));

  FUNC_1(FUNC_13(VAR_6, VAR_7, "w((!", "success"));
  for (VAR_16 = FUNC_2(VAR_7, VAR_15); VAR_16; VAR_16 = FUNC_3(VAR_16))
    {
      svn_lock_t *VAR_19 = FUNC_4(VAR_16);

      FUNC_1(FUNC_17(VAR_6, VAR_7, VAR_19));
    }
  FUNC_1(FUNC_13(VAR_6, VAR_7, "!))"));

  return VAR_1;
}
