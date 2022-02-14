
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct TYPE_9__ {TYPE_4__* node_revision; int fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_10__ {int noderev_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int ,int *,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,TYPE_4__*,int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;

svn_error_t *
FUNC_6(dag_node_t *VAR_2,
                           apr_hash_t *VAR_3,
                           apr_pool_t *VAR_4)
{

  if (! FUNC_2(VAR_2))
    {
      svn_string_t *VAR_5
        = FUNC_3(&VAR_2->node_revision->noderev_id,
                               VAR_4);
      return FUNC_1
        (VAR_0, ((void*)0),
         "Can't set proplist on *immutable* node-revision %s",
         VAR_5->data);
    }


  FUNC_0(FUNC_4(VAR_2->fs, VAR_2->node_revision, VAR_3,
                                 VAR_4));
  FUNC_5(VAR_2);

  return VAR_1;
}
