
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_6__ {TYPE_1__* repository; } ;
typedef TYPE_2__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {char const* repos_url; int fs_path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ,char const**) ;
 int FUNC_3 (TYPE_2__*,int *,int *,char*,int ) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (int *,char*,char const**) ;
 int FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (int ,char const*) ;
 char* FUNC_9 (char const*,int *) ;
 int FUNC_10 (int *,int *,TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_ra_svn_conn_t *VAR_1,
         apr_pool_t *VAR_2,
         svn_ra_svn__list_t *VAR_3,
         void *VAR_4)
{
  server_baton_t *VAR_5 = VAR_4;
  const char *VAR_6;
  const char *VAR_7;

  FUNC_1(FUNC_6(VAR_3, "c", &VAR_6));
  VAR_6 = FUNC_9(VAR_6, VAR_2);
  FUNC_1(FUNC_10(VAR_1, VAR_2, VAR_5));
  FUNC_0(FUNC_2(FUNC_5(VAR_5->repository->repos_url, VAR_2),
                          FUNC_5(VAR_6, VAR_2),
                          &VAR_7));
  FUNC_1(FUNC_3(VAR_5, VAR_1, VAR_2, "%s", FUNC_4(VAR_7, VAR_2)));
  FUNC_8(VAR_5->repository->fs_path, VAR_7);
  FUNC_1(FUNC_7(VAR_1, VAR_2, ""));
  return VAR_0;
}
