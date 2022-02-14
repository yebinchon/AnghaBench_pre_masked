
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {int data_rep; int prop_rep; } ;
typedef TYPE_1__ node_revision_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int*,int *,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int*,int *,TYPE_1__*,TYPE_1__*,int *) ;

svn_error_t *
FUNC_6(svn_boolean_t *VAR_1,
                                svn_boolean_t *VAR_2,
                                dag_node_t *VAR_3,
                                dag_node_t *VAR_4,
                                svn_boolean_t VAR_5,
                                apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7, *VAR_8;



  if (! VAR_1 && ! VAR_2)
    return VAR_0;


  FUNC_0(FUNC_1(&VAR_7, VAR_3));
  FUNC_0(FUNC_1(&VAR_8, VAR_4));

  if (VAR_5)
    {






      svn_fs_t *VAR_9 = FUNC_2(VAR_3);
      svn_boolean_t VAR_10;


      if (VAR_1 != ((void*)0))
        {
          FUNC_0(FUNC_5(&VAR_10, VAR_9, VAR_7,
                                            VAR_8, VAR_6));
          *VAR_1 = !VAR_10;
        }


      if (VAR_2 != ((void*)0))
        {
          FUNC_0(FUNC_3(&VAR_10, VAR_9, VAR_7,
                                                 VAR_8, VAR_6));
          *VAR_2 = !VAR_10;
        }
    }
  else
    {



      if (VAR_1 != ((void*)0))
        *VAR_1 =
          !FUNC_4(VAR_7->prop_rep,
                                           VAR_8->prop_rep);


      if (VAR_2 != ((void*)0))
        *VAR_2 =
          !FUNC_4(VAR_7->data_rep,
                                           VAR_8->data_rep);
    }

  return VAR_0;
}
