
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_txdelta_stream_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_5__ {scalar_t__ kind; int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,TYPE_1__*) ;
 int * FUNC_2 (int ,int *,char*) ;
 int * FUNC_3 (int **,int ,int *,int *,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_4(svn_txdelta_stream_t **VAR_2,
                                     dag_node_t *VAR_3,
                                     dag_node_t *VAR_4,
                                     apr_pool_t *VAR_5)
{
  node_revision_t *VAR_6;
  node_revision_t *VAR_7;


  if ((VAR_3 && VAR_3->kind != VAR_1)
      || VAR_4->kind != VAR_1)
    return FUNC_2
      (VAR_0, ((void*)0),
       "Attempted to get textual contents of a *non*-file node");


  if (VAR_3)
    FUNC_0(FUNC_1(&VAR_6, VAR_3));
  else
    VAR_6 = ((void*)0);
  FUNC_0(FUNC_1(&VAR_7, VAR_4));


  return FUNC_3(VAR_2, VAR_4->fs,
                                          VAR_6, VAR_7, VAR_5);
}
