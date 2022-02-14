
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int data_key; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_6__ {scalar_t__ kind; int fs; int id; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int **,int ,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_1__**,int ,int ,int *,int *) ;
 scalar_t__ VAR_2 ;

svn_error_t *
FUNC_5(svn_stream_t **VAR_3,
                              dag_node_t *VAR_4,
                              trail_t *VAR_5,
                              apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7;


  if (VAR_4->kind != VAR_2)
    return FUNC_2
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to get textual contents of a *non*-file node"));


  FUNC_0(FUNC_4(&VAR_7, VAR_4->fs, VAR_4->id,
                                        VAR_5, VAR_6));






  return FUNC_3(VAR_3, VAR_4->fs,
                                               VAR_7->data_key,
                                               VAR_0, VAR_5, VAR_6);




}
