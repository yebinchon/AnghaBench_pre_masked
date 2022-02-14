
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_stream_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,int *,int *,int *) ;
 int FUNC_2 (int **,int *,char const*,int *,int *) ;
 int FUNC_3 (int **,int *,char const*,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_txdelta_stream_t **VAR_1,
                        svn_fs_root_t *VAR_2,
                        const char *VAR_3,
                        svn_fs_root_t *VAR_4,
                        const char *VAR_5,
                        apr_pool_t *VAR_6)
{
  dag_node_t *VAR_7, *VAR_8;
  apr_pool_t *VAR_9 = FUNC_4(VAR_6);

  if (VAR_2 && VAR_3)
    FUNC_0(FUNC_2(&VAR_7, VAR_2, VAR_3,
                                   VAR_9, VAR_9));
  else
    VAR_7 = ((void*)0);
  FUNC_0(FUNC_3(&VAR_8, VAR_4, VAR_5,
                                      VAR_9));


  FUNC_0(FUNC_1(VAR_1, VAR_7,
                                              VAR_8, VAR_6,
                                              VAR_9));

  FUNC_5(VAR_9);
  return VAR_0;
}
