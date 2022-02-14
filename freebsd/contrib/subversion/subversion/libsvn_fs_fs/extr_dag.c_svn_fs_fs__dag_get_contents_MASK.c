
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int data_rep; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_7__ {scalar_t__ kind; int fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**,TYPE_2__*) ;
 int * FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (int **,int ,int ,int ,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_4(svn_stream_t **VAR_4,
                            dag_node_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7;
  svn_stream_t *VAR_8;


  if (VAR_5->kind != VAR_3)
    return FUNC_2
      (VAR_0, ((void*)0),
       "Attempted to get textual contents of a *non*-file node");


  FUNC_0(FUNC_1(&VAR_7, VAR_5));


  FUNC_0(FUNC_3(&VAR_8, VAR_5->fs,
                                  VAR_7->data_rep, VAR_2, VAR_6));

  *VAR_4 = VAR_8;

  return VAR_1;
}
