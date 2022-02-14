
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; int change_set; } ;
typedef TYPE_1__ svn_fs_x__id_t ;
typedef int svn_fs_x__change_set_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int **,int *,TYPE_1__*,int *,int *) ;

svn_error_t *
FUNC_1(dag_node_t **VAR_1,
                   svn_fs_t *VAR_2,
                   svn_fs_x__change_set_t VAR_3,
                   apr_pool_t *VAR_4,
                   apr_pool_t *VAR_5)
{
  svn_fs_x__id_t VAR_6;
  VAR_6.change_set = VAR_3;
  VAR_6.number = VAR_0;

  return FUNC_0(VAR_1, VAR_2, &VAR_6, VAR_4,
                                VAR_5);
}
