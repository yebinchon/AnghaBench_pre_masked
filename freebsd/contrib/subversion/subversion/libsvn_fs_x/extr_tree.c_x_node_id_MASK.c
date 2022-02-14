
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_x__id_t ;
struct TYPE_4__ {int fs; int rev; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int **,TYPE_1__*,char const*,int *) ;
 int * FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const svn_fs_id_t **VAR_1,
          svn_fs_root_t *VAR_2,
          const char *VAR_3,
          apr_pool_t *VAR_4)
{
  svn_fs_x__id_t VAR_5;

  if ((! VAR_2->is_txn_root)
      && (VAR_3[0] == '\0' || ((VAR_3[0] == '/') && (VAR_3[1] == '\0'))))
    {




      FUNC_5(&VAR_5, VAR_2->rev);
    }
  else
    {
      apr_pool_t *VAR_6 = FUNC_6(VAR_4);
      dag_node_t *VAR_7;

      FUNC_0(FUNC_2(&VAR_7, VAR_2, VAR_3, VAR_6));
      VAR_5 = *FUNC_1(VAR_7);
      FUNC_7(VAR_6);
    }

  *VAR_1 = FUNC_3(FUNC_4(VAR_2->fs, VAR_4),
                              &VAR_5, VAR_4);

  return VAR_0;
}
