
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int * node_revision; int * node_pool; int hint; int * fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int **,int *,int const*,int *,int *) ;

svn_error_t *
FUNC_3(dag_node_t **VAR_2,
                       svn_fs_t *VAR_3,
                       const svn_fs_x__id_t *VAR_4,
                       apr_pool_t *VAR_5,
                       apr_pool_t *VAR_6)
{
  dag_node_t *VAR_7;
  svn_fs_x__noderev_t *VAR_8;


  VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));
  VAR_7->fs = VAR_3;
  VAR_7->hint = VAR_0;


  FUNC_0(FUNC_2(&VAR_8, VAR_3, VAR_4,
                                      VAR_5, VAR_6));
  VAR_7->node_pool = VAR_5;
  VAR_7->node_revision = VAR_8;


  *VAR_2 = VAR_7;
  return VAR_1;
}
