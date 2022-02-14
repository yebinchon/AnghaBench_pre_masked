
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_stream_t ;
typedef int svn_stream_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int *,char const*,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_txdelta_stream_t **VAR_2,
                           svn_fs_root_t *VAR_3,
                           const char *VAR_4,
                           svn_fs_root_t *VAR_5,
                           const char *VAR_6,
                           apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8, *VAR_9;
  svn_txdelta_stream_t *VAR_10;


  if (VAR_3 && VAR_4)
    FUNC_0(FUNC_1(&VAR_8, VAR_3, VAR_4, VAR_7));
  else
    VAR_8 = FUNC_2(VAR_7);


  FUNC_0(FUNC_1(&VAR_9, VAR_5, VAR_6, VAR_7));


  FUNC_3(&VAR_10, VAR_8, VAR_9, VAR_1, VAR_7);

  *VAR_2 = VAR_10;
  return VAR_0;
}
