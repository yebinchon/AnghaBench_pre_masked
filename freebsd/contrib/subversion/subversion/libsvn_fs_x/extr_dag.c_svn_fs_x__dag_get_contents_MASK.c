
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_5__ {TYPE_1__* node_revision; int fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {scalar_t__ kind; int data_rep; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int **,int ,int ,int ,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_3(svn_stream_t **VAR_4,
                           dag_node_t *VAR_5,
                           apr_pool_t *VAR_6)
{

  if (VAR_5->node_revision->kind != VAR_3)
    return FUNC_1
      (VAR_0, ((void*)0),
       "Attempted to get textual contents of a *non*-file node");


  FUNC_0(FUNC_2(VAR_4, VAR_5->fs,
                                 VAR_5->node_revision->data_rep, VAR_2,
                                 VAR_6));

  return VAR_1;
}
