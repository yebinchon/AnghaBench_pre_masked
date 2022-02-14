
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ kind; scalar_t__ prop_key; scalar_t__ data_key; } ;
typedef TYPE_2__ node_revision_t ;
struct TYPE_11__ {int id; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_2__**,int ,int ,TYPE_1__*,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_3(dag_node_t *VAR_2,
                                 trail_t *VAR_3,
                                 apr_pool_t *VAR_4)
{
  node_revision_t *VAR_5;

  FUNC_0(FUNC_2(&VAR_5, VAR_3->fs, VAR_2->id,
                                        VAR_3, VAR_4));
  if ((VAR_5->kind == VAR_1) && VAR_5->data_key)
    FUNC_0(FUNC_1(VAR_5->data_key, VAR_3, VAR_4));
  if (VAR_5->prop_key)
    FUNC_0(FUNC_1(VAR_5->prop_key, VAR_3, VAR_4));

  return VAR_0;
}
