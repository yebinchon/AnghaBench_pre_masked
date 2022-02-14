
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_10__ {TYPE_1__* node_revision; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int has_mergeinfo; int noderev_id; } ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_3__*,int *) ;
 int * FUNC_1 (int ,int *,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int *,int *) ;

svn_error_t *
FUNC_4(dag_node_t *VAR_1,
                                svn_boolean_t VAR_2,
                                apr_pool_t *VAR_3)
{

  if (! FUNC_2(VAR_1))
    {
      svn_string_t *VAR_4
        = FUNC_3(&VAR_1->node_revision->noderev_id,
                               VAR_3);
      return FUNC_1
        (VAR_0, ((void*)0),
         "Can't set mergeinfo flag on *immutable* node-revision %s",
         VAR_4->data);
    }

  VAR_1->node_revision->has_mergeinfo = VAR_2;


  return FUNC_0(VAR_1, VAR_3);
}
