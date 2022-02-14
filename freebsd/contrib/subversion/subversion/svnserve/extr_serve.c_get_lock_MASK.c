
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_lock_t ;
typedef int svn_error_t ;
struct TYPE_8__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int fs; TYPE_1__* fs_path; } ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *,int *,char*,int ) ;
 int FUNC_3 (int *,int *,TYPE_3__*,int ,char const*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int **,int ,char const*,int *) ;
 char* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (int *,char*,char const**) ;
 int FUNC_8 (int *,int *,char*,...) ;
 int FUNC_9 (char const*,int *) ;
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
  svn_lock_t *VAR_10;

  FUNC_1(FUNC_7(VAR_5, "c", &VAR_8));

  VAR_9 = FUNC_5(VAR_7->repository->fs_path->data,
                               FUNC_9(VAR_8, VAR_4), VAR_4);

  FUNC_1(FUNC_3(VAR_3, VAR_4, VAR_7, VAR_2,
                           VAR_9, VAR_0));
  FUNC_1(FUNC_2(VAR_7, VAR_3, VAR_4, "get-lock %s",
                      FUNC_6(VAR_9, VAR_4)));

  FUNC_0(FUNC_4(&VAR_10, VAR_7->repository->fs, VAR_9, VAR_4));

  FUNC_1(FUNC_8(VAR_3, VAR_4, "w((!", "success"));
  if (VAR_10)
    FUNC_1(FUNC_10(VAR_3, VAR_4, VAR_10));
  FUNC_1(FUNC_8(VAR_3, VAR_4, "!))"));

  return VAR_1;
}
