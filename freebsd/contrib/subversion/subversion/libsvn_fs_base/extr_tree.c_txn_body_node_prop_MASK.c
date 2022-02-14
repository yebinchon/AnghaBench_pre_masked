
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct node_prop_args {int propname; int ** value_p; int path; int root; } ;
typedef int dag_node_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int **,int *,TYPE_1__*,int ) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                   trail_t *VAR_2)
{
  struct node_prop_args *VAR_3 = VAR_1;
  dag_node_t *VAR_4;
  apr_hash_t *VAR_5;

  FUNC_0(FUNC_1(&VAR_4, VAR_3->root, VAR_3->path, VAR_2, VAR_2->pool));
  FUNC_0(FUNC_2(&VAR_5, VAR_4,
                                        VAR_2, VAR_2->pool));
  *(VAR_3->value_p) = ((void*)0);
  if (VAR_5)
    *(VAR_3->value_p) = FUNC_3(VAR_5, VAR_3->propname);
  return VAR_0;
}
