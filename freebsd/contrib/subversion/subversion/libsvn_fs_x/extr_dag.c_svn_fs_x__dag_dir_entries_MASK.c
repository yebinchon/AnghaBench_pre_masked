
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int fs; TYPE_1__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;
 int * FUNC_2 (int **,int ,TYPE_1__*,int *,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_3(apr_array_header_t **VAR_2,
                          dag_node_t *VAR_3,
                          apr_pool_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  svn_fs_x__noderev_t *VAR_6 = VAR_3->node_revision;

  if (VAR_6->kind != VAR_1)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("Can't get entries of non-directory"));

  return FUNC_2(VAR_2, VAR_3->fs, VAR_6, VAR_4,
                                    VAR_5);
}
