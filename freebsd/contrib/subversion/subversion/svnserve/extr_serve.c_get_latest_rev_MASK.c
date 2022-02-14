
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_6__ {TYPE_1__* repository; } ;
typedef TYPE_2__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int fs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *,int *,char*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int *,char*,int ) ;
 int FUNC_5 (int *,int *,TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_ra_svn_conn_t *VAR_1,
               apr_pool_t *VAR_2,
               svn_ra_svn__list_t *VAR_3,
               void *VAR_4)
{
  server_baton_t *VAR_5 = VAR_4;
  svn_revnum_t VAR_6;

  FUNC_1(FUNC_2(VAR_5, VAR_1, VAR_2, "get-latest-rev"));

  FUNC_1(FUNC_5(VAR_1, VAR_2, VAR_5));
  FUNC_0(FUNC_3(&VAR_6, VAR_5->repository->fs, VAR_2));
  FUNC_1(FUNC_4(VAR_1, VAR_2, "r", VAR_6));
  return VAR_0;
}
