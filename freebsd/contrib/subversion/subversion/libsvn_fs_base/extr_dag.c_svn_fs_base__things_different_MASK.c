
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {int data_key_uniquifier; int data_key; int prop_key; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_7__ {int id; int fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__**,int ,int ,int *,int *) ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_1,
                              svn_boolean_t *VAR_2,
                              dag_node_t *VAR_3,
                              dag_node_t *VAR_4,
                              trail_t *VAR_5,
                              apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7, *VAR_8;



  if (! VAR_1 && ! VAR_2)
    return VAR_0;


  FUNC_0(FUNC_2(&VAR_7, VAR_3->fs, VAR_3->id,
                                        VAR_5, VAR_6));
  FUNC_0(FUNC_2(&VAR_8, VAR_4->fs, VAR_4->id,
                                        VAR_5, VAR_6));


  if (VAR_1 != ((void*)0))
    *VAR_1 = (! FUNC_1(VAR_7->prop_key,
                                               VAR_8->prop_key));


  if (VAR_2 != ((void*)0))
    *VAR_2 =
      (! (FUNC_1(VAR_7->data_key,
                                 VAR_8->data_key)



          && (FUNC_1(VAR_7->data_key_uniquifier,
                                     VAR_8->data_key_uniquifier))));

  return VAR_0;
}
