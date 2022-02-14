
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct node_created_rev_args {int revision; int path; int root; } ;
typedef int dag_node_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int ,TYPE_1__*,int ) ;
 int * FUNC_2 (int *,int *,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0, trail_t *VAR_1)
{
  struct node_created_rev_args *VAR_2 = VAR_0;
  dag_node_t *VAR_3;

  FUNC_0(FUNC_1(&VAR_3, VAR_2->root, VAR_2->path, VAR_1, VAR_1->pool));
  return FUNC_2(&(VAR_2->revision), VAR_3,
                                       VAR_1, VAR_1->pool);
}
