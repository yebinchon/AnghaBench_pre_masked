
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_9__ {int predecessor_count; int predecessor_id; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_10__ {int id; int fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__**,TYPE_2__*) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (int ,int ,TYPE_1__*,int ,int *) ;

svn_error_t *
FUNC_6(dag_node_t *VAR_2,
                               dag_node_t *VAR_3,
                               apr_pool_t *VAR_4)
{
  node_revision_t *VAR_5, *VAR_6;

  if (! FUNC_4(VAR_2))
    return FUNC_3
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to update ancestry of non-mutable node"));

  FUNC_0(FUNC_2(&VAR_5, VAR_3));
  FUNC_0(FUNC_2(&VAR_6, VAR_2));

  VAR_6->predecessor_id = VAR_3->id;
  VAR_6->predecessor_count = VAR_5->predecessor_count;
  VAR_6->predecessor_count++;

  return FUNC_5(VAR_2->fs, VAR_2->id, VAR_6,
                                      VAR_0, VAR_4);
}
