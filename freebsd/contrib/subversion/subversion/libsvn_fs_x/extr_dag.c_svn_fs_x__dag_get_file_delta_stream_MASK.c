
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_txdelta_stream_t ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int fs; TYPE_1__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,char*) ;
 int * FUNC_1 (int **,int ,TYPE_1__*,TYPE_1__*,int *,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_2(svn_txdelta_stream_t **VAR_2,
                                    dag_node_t *VAR_3,
                                    dag_node_t *VAR_4,
                                    apr_pool_t *VAR_5,
                                    apr_pool_t *VAR_6)
{
  svn_fs_x__noderev_t *VAR_7 = VAR_3 ? VAR_3->node_revision : ((void*)0);
  svn_fs_x__noderev_t *VAR_8 = VAR_4->node_revision;


  if ((VAR_3 && VAR_7->kind != VAR_1)
      || VAR_8->kind != VAR_1)
    return FUNC_0
      (VAR_0, ((void*)0),
       "Attempted to get textual contents of a *non*-file node");


  return FUNC_1(VAR_2, VAR_4->fs,
                                         VAR_7, VAR_8,
                                         VAR_5, VAR_6);
}
