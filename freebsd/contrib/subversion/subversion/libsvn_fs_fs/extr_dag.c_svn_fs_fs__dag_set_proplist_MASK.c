
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_8__ {int fs; int id; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,TYPE_2__*) ;
 int * FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,int *,int *,int *) ;

svn_error_t *
FUNC_6(dag_node_t *VAR_1,
                            apr_hash_t *VAR_2,
                            apr_pool_t *VAR_3)
{
  node_revision_t *VAR_4;


  if (! FUNC_3(VAR_1))
    {
      svn_string_t *VAR_5 = FUNC_4(VAR_1->id, VAR_3);
      return FUNC_2
        (VAR_0, ((void*)0),
         "Can't set proplist on *immutable* node-revision %s",
         VAR_5->data);
    }


  FUNC_0(FUNC_1(&VAR_4, VAR_1));


  return FUNC_5(VAR_1->fs, VAR_4, VAR_2, VAR_3);
}
