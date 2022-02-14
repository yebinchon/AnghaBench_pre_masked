
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trail_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const**,int *,char const*,int *,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int **,int ,int const*,int *,int *) ;
 int FUNC_6 (char const*) ;

svn_error_t *
FUNC_7(dag_node_t **VAR_2,
                      dag_node_t *VAR_3,
                      const char *VAR_4,
                      trail_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  const svn_fs_id_t *VAR_7;


  FUNC_0(FUNC_2(&VAR_7, VAR_3, VAR_4, VAR_5, VAR_6));
  if (! VAR_7)
    return FUNC_3
      (VAR_0, ((void*)0),
       FUNC_1("Attempted to open non-existent child node '%s'"), VAR_4);


  if (! FUNC_6(VAR_4))
    return FUNC_3
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to open node with an illegal name '%s'"), VAR_4);


  return FUNC_5(VAR_2, FUNC_4(VAR_3),
                                   VAR_7, VAR_5, VAR_6);
}
