
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_lock_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_8__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int repos; TYPE_1__* fs_path; } ;
struct TYPE_6__ {int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *,int *,char*,int ) ;
 int FUNC_3 (int *,int *,TYPE_3__*,int ,char const*,int ) ;
 int VAR_2 ;
 char* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (int *,char*,char const**,char const**,int *,int *) ;
 int FUNC_7 (int *,int *,char*,...) ;
 int FUNC_8 (char const*,int *) ;
 int FUNC_9 (int **,int ,char const*,int *,char const*,int ,int ,int ,int ,int *) ;
 int FUNC_10 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_ra_svn_conn_t *VAR_3,
     apr_pool_t *VAR_4,
     svn_ra_svn__list_t *VAR_5,
     void *VAR_6)
{
  server_baton_t *VAR_7 = VAR_6;
  const char *VAR_8;
  const char *VAR_9;
  const char *VAR_10;
  svn_boolean_t VAR_11;
  svn_revnum_t VAR_12;
  svn_lock_t *VAR_13;

  FUNC_1(FUNC_6(VAR_5, "c(?c)b(?r)", &VAR_8, &VAR_9,
                                  &VAR_11, &VAR_12));
  VAR_10 = FUNC_4(VAR_7->repository->fs_path->data,
                               FUNC_8(VAR_8, VAR_4), VAR_4);

  FUNC_1(FUNC_3(VAR_3, VAR_4, VAR_7, VAR_2,
                           VAR_10, VAR_1));
  FUNC_1(FUNC_2(VAR_7, VAR_3, VAR_4, "%s",
                      FUNC_5(VAR_10, VAR_11, VAR_4)));

  FUNC_0(FUNC_9(&VAR_13, VAR_7->repository->repos, VAR_10, ((void*)0),
                                VAR_9, 0, 0,
                                VAR_12, VAR_11, VAR_4));

  FUNC_1(FUNC_7(VAR_3, VAR_4, "w(!", "success"));
  FUNC_1(FUNC_10(VAR_3, VAR_4, VAR_13));
  FUNC_1(FUNC_7(VAR_3, VAR_4, "!)"));

  return VAR_0;
}
