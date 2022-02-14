
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int trail_t ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int prop_key; } ;
typedef TYPE_2__ node_revision_t ;
struct TYPE_10__ {int id; int fs; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__**,int ,int ,int *,int *) ;
 int * FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int **,int *,int *) ;

svn_error_t *
FUNC_6(apr_hash_t **VAR_1,
                              dag_node_t *VAR_2,
                              trail_t *VAR_3,
                              apr_pool_t *VAR_4)
{
  node_revision_t *VAR_5;
  apr_hash_t *VAR_6 = ((void*)0);
  svn_string_t VAR_7;
  svn_skel_t *VAR_8;


  FUNC_0(FUNC_3(&VAR_5, VAR_2->fs, VAR_2->id,
                                        VAR_3, VAR_4));


  if (! VAR_5->prop_key)
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }



  FUNC_0(FUNC_2(&VAR_7,
                                    FUNC_1(VAR_2),
                                    VAR_5->prop_key, VAR_3, VAR_4));
  VAR_8 = FUNC_4(VAR_7.data, VAR_7.len, VAR_4);
  if (VAR_8)
    FUNC_0(FUNC_5(&VAR_6, VAR_8, VAR_4));

  *VAR_1 = VAR_6;
  return VAR_0;
}
