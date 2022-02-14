
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
typedef int svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_8__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int fs; TYPE_1__* fs_path; } ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int FUNC_3 (TYPE_3__*,int *,int *,char*,int ,int ) ;
 int FUNC_4 (int *,int *,TYPE_3__*,int ,char const*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *,char const*,int *) ;
 int FUNC_6 (int **,int ,int ,int *) ;
 int FUNC_7 (int *,int ,int *) ;
 char* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char const*,int *) ;
 int FUNC_11 (int *,char*,char const**,int *) ;
 int FUNC_12 (int *,int *,char*,int ) ;
 int FUNC_13 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_ra_svn_conn_t *VAR_3,
           apr_pool_t *VAR_4,
           svn_ra_svn__list_t *VAR_5,
           void *VAR_6)
{
  server_baton_t *VAR_7 = VAR_6;
  svn_revnum_t VAR_8;
  const char *VAR_9, *VAR_10;
  svn_fs_root_t *VAR_11;
  svn_node_kind_t VAR_12;

  FUNC_1(FUNC_11(VAR_5, "c(?r)", &VAR_9, &VAR_8));
  VAR_10 = FUNC_8(VAR_7->repository->fs_path->data,
                               FUNC_13(VAR_9, VAR_4), VAR_4);


  FUNC_1(FUNC_4(VAR_3, VAR_4, VAR_7, VAR_2,
                           VAR_10, VAR_0));

  if (!FUNC_2(VAR_8))
    FUNC_0(FUNC_7(&VAR_8, VAR_7->repository->fs, VAR_4));

  FUNC_1(FUNC_3(VAR_7, VAR_3, VAR_4, "check-path %s@%d",
                      FUNC_10(VAR_10, VAR_4), VAR_8));

  FUNC_0(FUNC_6(&VAR_11, VAR_7->repository->fs, VAR_8, VAR_4));
  FUNC_0(FUNC_5(&VAR_12, VAR_11, VAR_10, VAR_4));
  FUNC_1(FUNC_12(VAR_3, VAR_4, "w",
                                         FUNC_9(VAR_12)));
  return VAR_1;
}
