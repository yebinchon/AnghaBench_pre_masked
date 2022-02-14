
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* entry; int * copy_src_path; int copy_inherit; struct TYPE_5__* parent; int * node; } ;
typedef TYPE_1__ parent_path_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static parent_path_t *
FUNC_1(dag_node_t *VAR_1,
                 char *VAR_2,
                 parent_path_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  parent_path_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  VAR_5->node = VAR_1;
  VAR_5->entry = VAR_2;
  VAR_5->parent = VAR_3;
  VAR_5->copy_inherit = VAR_0;
  VAR_5->copy_src_path = ((void*)0);
  return VAR_5;
}
