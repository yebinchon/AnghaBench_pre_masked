
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fsap_data; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,TYPE_1__*,char const*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *) ;

svn_error_t *
FUNC_4(const svn_fs_id_t **VAR_1,
                   svn_fs_root_t *VAR_2,
                   const char *VAR_3,
                   apr_pool_t *VAR_4)
{
  if ((! VAR_2->is_txn_root)
      && (VAR_3[0] == '\0' || ((VAR_3[0] == '/') && (VAR_3[1] == '\0'))))
    {




      dag_node_t *VAR_5 = VAR_2->fsap_data;
      *VAR_1 = FUNC_3(FUNC_2(VAR_5), VAR_4);
    }
  else
    {
      dag_node_t *VAR_6;

      FUNC_0(FUNC_1(&VAR_6, VAR_2, VAR_3, VAR_4));
      *VAR_1 = FUNC_3(FUNC_2(VAR_6), VAR_4);
    }
  return VAR_0;
}
