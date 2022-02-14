
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_5__ {TYPE_2__* node_revision; int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {scalar_t__ kind; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int **,int ,TYPE_2__*,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_4(svn_stream_t **VAR_4,
                              dag_node_t *VAR_5,
                              apr_pool_t *VAR_6)
{

  if (VAR_5->node_revision->kind != VAR_3)
    return FUNC_1
      (VAR_0, ((void*)0),
       "Attempted to set textual contents of a *non*-file node");


  if (! FUNC_2(VAR_5))
    return FUNC_1
      (VAR_1, ((void*)0),
       "Attempted to set textual contents of an immutable node");

  FUNC_0(FUNC_3(VAR_4, VAR_5->fs, VAR_5->node_revision,
                                 VAR_6));
  return VAR_2;
}
