
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
typedef int svn_error_t ;
struct TYPE_8__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int fs; TYPE_1__* fs_path; } ;
struct TYPE_6__ {int data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__*,int *,int *,char*) ;
 char* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,char*,char const**,int *,int *) ;
 int FUNC_4 (int *,int *,char*,int ) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (int ,char const*,int ,int ,int *,int *) ;
 int FUNC_7 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_svn_conn_t *VAR_1,
                apr_pool_t *VAR_2,
                svn_ra_svn__list_t *VAR_3,
                void *VAR_4)
{
  server_baton_t *VAR_5 = VAR_4;
  const char *VAR_6, *VAR_7;
  svn_revnum_t VAR_8;
  svn_revnum_t VAR_9;
  svn_revnum_t VAR_10;

  FUNC_0(FUNC_3(VAR_3, "crr",
                                 &VAR_6, &VAR_8, &VAR_9));
  VAR_7 = FUNC_2(VAR_5->repository->fs_path->data,
                               FUNC_5(VAR_6, VAR_2), VAR_2);
  FUNC_0(FUNC_1(VAR_5, VAR_1, VAR_2, "get-deleted-rev"));
  FUNC_0(FUNC_7(VAR_1, VAR_2, VAR_5));
  FUNC_0(FUNC_6(VAR_5->repository->fs, VAR_7, VAR_8,
                                VAR_9, &VAR_10, VAR_2));
  FUNC_0(FUNC_4(VAR_1, VAR_2, "r", VAR_10));
  return VAR_0;
}
