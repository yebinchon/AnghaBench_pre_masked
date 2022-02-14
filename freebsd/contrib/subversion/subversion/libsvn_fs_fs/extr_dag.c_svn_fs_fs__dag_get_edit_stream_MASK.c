
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_5__ {scalar_t__ kind; int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int **,TYPE_1__*) ;
 int * FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int **,int ,int *,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_5(svn_stream_t **VAR_4,
                               dag_node_t *VAR_5,
                               apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7;
  svn_stream_t *VAR_8;


  if (VAR_5->kind != VAR_3)
    return FUNC_2
      (VAR_0, ((void*)0),
       "Attempted to set textual contents of a *non*-file node");


  if (! FUNC_3(VAR_5))
    return FUNC_2
      (VAR_1, ((void*)0),
       "Attempted to set textual contents of an immutable node");


  FUNC_0(FUNC_1(&VAR_7, VAR_5));

  FUNC_0(FUNC_4(&VAR_8, VAR_5->fs, VAR_7, VAR_6));

  *VAR_4 = VAR_8;

  return VAR_2;
}
