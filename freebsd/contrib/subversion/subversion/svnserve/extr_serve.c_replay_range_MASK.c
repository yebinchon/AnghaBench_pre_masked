
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {TYPE_1__* repository; } ;
typedef TYPE_2__ server_baton_t ;
struct TYPE_10__ {int * conn; TYPE_2__* server; } ;
typedef TYPE_3__ authz_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_8__ {int repos; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_8 (int *,int *,char*) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *,char*,...) ;
 int FUNC_11 (int **,int ,scalar_t__,int ,TYPE_3__*,int *) ;
 int FUNC_12 (int *,int *,TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_ra_svn_conn_t *VAR_1,
             apr_pool_t *VAR_2,
             svn_ra_svn__list_t *VAR_3,
             void *VAR_4)
{
  svn_revnum_t VAR_5, VAR_6, VAR_7, VAR_8;
  svn_boolean_t VAR_9;
  server_baton_t *VAR_10 = VAR_4;
  apr_pool_t *VAR_11;
  authz_baton_t VAR_12;

  VAR_12.server = VAR_10;
  VAR_12.conn = VAR_1;

  FUNC_1(FUNC_7(VAR_3, "rrrb", &VAR_5,
                                 &VAR_6, &VAR_8,
                                 &VAR_9));

  FUNC_1(FUNC_12(VAR_1, VAR_2, VAR_10));

  VAR_11 = FUNC_5(VAR_2);
  for (VAR_7 = VAR_5; VAR_7 <= VAR_6; VAR_7++)
    {
      apr_hash_t *VAR_13;

      FUNC_4(VAR_11);

      FUNC_0(FUNC_11(&VAR_13,
                                                 VAR_10->repository->repos, VAR_7,
                                                 FUNC_2(VAR_10),
                                                 &VAR_12,
                                                 VAR_11));
      FUNC_1(FUNC_10(VAR_1, VAR_11, "w(!", "revprops"));
      FUNC_1(FUNC_9(VAR_1, VAR_11, VAR_13));
      FUNC_1(FUNC_10(VAR_1, VAR_11, "!)"));

      FUNC_1(FUNC_3(VAR_1, VAR_10, VAR_7, VAR_8,
                                  VAR_9, VAR_11));

    }
  FUNC_6(VAR_11);

  FUNC_1(FUNC_8(VAR_1, VAR_2, ""));

  return VAR_0;
}
