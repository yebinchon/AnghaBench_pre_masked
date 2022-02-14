
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_11__ {int id; int has_mergeinfo; } ;
typedef TYPE_2__ node_revision_t ;
struct TYPE_12__ {int fs; int id; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__**,TYPE_3__*) ;
 int * FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,int ,TYPE_2__*,int ,int *) ;

svn_error_t *
FUNC_6(dag_node_t *VAR_2,
                                 svn_boolean_t VAR_3,
                                 apr_pool_t *VAR_4)
{
  node_revision_t *VAR_5;


  if (! FUNC_3(VAR_2))
    {
      svn_string_t *VAR_6 = FUNC_4(VAR_2->id, VAR_4);
      return FUNC_2
        (VAR_1, ((void*)0),
         "Can't set mergeinfo flag on *immutable* node-revision %s",
         VAR_6->data);
    }


  FUNC_0(FUNC_1(&VAR_5, VAR_2));

  VAR_5->has_mergeinfo = VAR_3;


  return FUNC_5(VAR_2->fs, VAR_5->id,
                                      VAR_5, VAR_0, VAR_4);
}
