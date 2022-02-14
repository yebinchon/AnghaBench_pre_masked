
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
struct file_baton {int path_end_revision; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int *,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_stream_t **VAR_2,
                 void *VAR_3,
                 apr_pool_t *VAR_4,
                 apr_pool_t *VAR_5)
{
  struct file_baton *VAR_6 = VAR_3;

  FUNC_0(FUNC_1(VAR_2, &VAR_6->path_end_revision, ((void*)0),
                                 VAR_1,
                                 VAR_4, VAR_5));

  return VAR_0;
}
