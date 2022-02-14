
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int * node; } ;
typedef TYPE_1__ parent_path_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,char const*,int *) ;
 int FUNC_2 (TYPE_1__**,int *,char const*,int ,int *,int *,int *) ;
 char* FUNC_3 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(dag_node_t **VAR_1,
        svn_fs_root_t *VAR_2,
        const char *VAR_3,
        trail_t *VAR_4,
        apr_pool_t *VAR_5)
{
  parent_path_t *VAR_6;
  dag_node_t *VAR_7 = ((void*)0);


  VAR_3 = FUNC_3(VAR_3, VAR_5);


  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_5);
  if (! VAR_7)
    {


      FUNC_0(FUNC_2(&VAR_6, VAR_2, VAR_3, 0, ((void*)0), VAR_4, VAR_5));
      VAR_7 = VAR_6->node;


    }

  *VAR_1 = VAR_7;
  return VAR_0;
}
