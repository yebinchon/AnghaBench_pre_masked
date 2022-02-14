
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {int data_key; int prop_key; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_8__ {int id; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,char const*,int *,int *) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__**,int *,int ,int *,int *) ;

svn_error_t *
FUNC_4(dag_node_t *VAR_1,
                         dag_node_t *VAR_2,
                         svn_boolean_t VAR_3,
                         const char *VAR_4,
                         trail_t *VAR_5,
                         apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7, *VAR_8;
  svn_fs_t *VAR_9 = FUNC_2(VAR_1);


  FUNC_0(FUNC_3(&VAR_8, VAR_9, VAR_1->id,
                                        VAR_5, VAR_6));
  FUNC_0(FUNC_3(&VAR_7, VAR_9, VAR_2->id,
                                        VAR_5, VAR_6));



  FUNC_0(FUNC_1(VAR_8->prop_key, VAR_7->prop_key,
                                    VAR_4, VAR_5, VAR_6));




  if (! VAR_3)
    FUNC_0(FUNC_1(VAR_8->data_key, VAR_7->data_key,
                                      VAR_4, VAR_5, VAR_6));

  return VAR_0;
}
