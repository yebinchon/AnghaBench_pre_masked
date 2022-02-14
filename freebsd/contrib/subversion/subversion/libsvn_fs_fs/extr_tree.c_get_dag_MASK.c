
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int * node; } ;
typedef TYPE_1__ parent_path_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int **,int *,char const*,int *) ;
 int FUNC_2 (TYPE_1__**,int *,char const*,int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char const*,int *) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(dag_node_t **VAR_4,
        svn_fs_root_t *VAR_5,
        const char *VAR_6,
        apr_pool_t *VAR_7)
{
  parent_path_t *VAR_8;
  dag_node_t *VAR_9 = ((void*)0);



  if (*VAR_6 == '/')
    FUNC_0(FUNC_1(&VAR_9, VAR_5, VAR_6, VAR_7));

  if (! VAR_9)
    {






      if (*VAR_6 != '/' || !FUNC_4(VAR_6))
        {
          VAR_6 = FUNC_3(VAR_6, VAR_7);
          FUNC_0(FUNC_1(&VAR_9, VAR_5, VAR_6, VAR_7));
        }

      if (! VAR_9)
        {


          FUNC_0(FUNC_2(&VAR_8, VAR_5, VAR_6,
                            VAR_3 | VAR_2,
                            VAR_0, VAR_7));
          VAR_9 = VAR_8->node;


        }
    }

  *VAR_4 = VAR_9;
  return VAR_1;
}
