
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int repository_path; } ;
typedef TYPE_1__ svnfsfs__opt_state ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int **,int ,int *) ;

svn_error_t *
FUNC_3(apr_getopt_t *VAR_2, void *VAR_3, apr_pool_t *VAR_4)
{
  svnfsfs__opt_state *VAR_5 = VAR_3;
  svn_stream_t *VAR_6;

  FUNC_0(FUNC_2(&VAR_6, VAR_1, VAR_4));
  FUNC_0(FUNC_1(VAR_5->repository_path, VAR_6, VAR_4));

  return VAR_0;
}
