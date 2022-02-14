
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int repository_path; } ;
typedef TYPE_1__ svnfsfs__opt_state ;
typedef int svn_fs_t ;
typedef int svn_fs_fs__stats_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int **,int *,int ,int *,int ,int *,int *,int *) ;

svn_error_t *
FUNC_5(apr_getopt_t *VAR_3, void *VAR_4, apr_pool_t *VAR_5)
{
  svnfsfs__opt_state *VAR_6 = VAR_4;
  svn_fs_fs__stats_t *VAR_7;
  svn_fs_t *VAR_8;

  FUNC_3("Reading revisions\n");
  FUNC_0(FUNC_1(&VAR_8, VAR_6->repository_path, VAR_5));
  FUNC_0(FUNC_4(&VAR_7, VAR_8, VAR_2, ((void*)0),
                               VAR_1, ((void*)0), VAR_5, VAR_5));

  FUNC_2(VAR_7, VAR_5);

  return VAR_0;
}
