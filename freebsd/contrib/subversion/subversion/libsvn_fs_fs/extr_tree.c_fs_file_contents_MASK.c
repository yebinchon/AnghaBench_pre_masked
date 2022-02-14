
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,char const*,int *) ;
 int FUNC_2 (int **,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_stream_t **VAR_1,
                 svn_fs_root_t *VAR_2,
                 const char *VAR_3,
                 apr_pool_t *VAR_4)
{
  dag_node_t *VAR_5;
  svn_stream_t *VAR_6;


  FUNC_0(FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4));


  FUNC_0(FUNC_2(&VAR_6, VAR_5, VAR_4));

  *VAR_1 = VAR_6;
  return VAR_0;
}
