
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int const**,int *,char const*,int *,int *) ;
 int * FUNC_2 (int ,int *,char*,char const*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int **,int ,int const*,int *) ;
 int FUNC_5 (char const*) ;

svn_error_t *
FUNC_6(dag_node_t **VAR_2,
                    dag_node_t *VAR_3,
                    const char *VAR_4,
                    apr_pool_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  const svn_fs_id_t *VAR_7;


  FUNC_0(FUNC_1(&VAR_7, VAR_3, VAR_4,
                                 VAR_6, VAR_6));
  if (! VAR_7)
    {
      *VAR_2 = ((void*)0);
      return VAR_1;
    }


  if (! FUNC_5(VAR_4))
    return FUNC_2
      (VAR_0, ((void*)0),
       "Attempted to open node with an illegal name '%s'", VAR_4);


  return FUNC_4(VAR_2, FUNC_3(VAR_3),
                                 VAR_7, VAR_5);
}
