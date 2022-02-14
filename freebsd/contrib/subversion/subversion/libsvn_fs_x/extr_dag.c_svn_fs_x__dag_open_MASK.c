
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__id_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int **,int ,int *,int *,int *) ;
 int FUNC_3 (int *,int *,char const*,int *) ;
 int FUNC_4 (int *) ;

svn_error_t *
FUNC_5(dag_node_t **VAR_1,
                   dag_node_t *VAR_2,
                   const char *VAR_3,
                   apr_pool_t *VAR_4,
                   apr_pool_t *VAR_5)
{
  svn_fs_x__id_t VAR_6;


  FUNC_0(FUNC_3(&VAR_6, VAR_2, VAR_3, VAR_5));
  if (! FUNC_4(&VAR_6))
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }


  return FUNC_2(VAR_1, FUNC_1(VAR_2),
                                &VAR_6, VAR_4, VAR_5);
}
