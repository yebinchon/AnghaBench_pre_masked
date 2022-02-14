
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct things_changed_args {int* changed_p; int strict; int path2; int root2; int path1; int root1; } ;
typedef int dag_node_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int **,int *,TYPE_1__*,int ) ;
 int FUNC_4 (int*,int *,int *,int *,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1, trail_t *VAR_2)
{
  struct things_changed_args *VAR_3 = VAR_1;
  dag_node_t *VAR_4, *VAR_5;
  apr_hash_t *VAR_6, *VAR_7;

  FUNC_0(FUNC_1(&VAR_4, VAR_3->root1, VAR_3->path1, VAR_2, VAR_2->pool));
  FUNC_0(FUNC_1(&VAR_5, VAR_3->root2, VAR_3->path2, VAR_2, VAR_2->pool));
  FUNC_0(FUNC_4(VAR_3->changed_p, ((void*)0),
                                        VAR_4, VAR_5, VAR_2, VAR_2->pool));


  if (!VAR_3->strict || !*VAR_3->changed_p)
    return VAR_0;


  FUNC_0(FUNC_3(&VAR_6, VAR_4,
                                        VAR_2, VAR_2->pool));
  FUNC_0(FUNC_3(&VAR_7, VAR_5,
                                        VAR_2, VAR_2->pool));

  *VAR_3->changed_p = !FUNC_2(VAR_6, VAR_7,
                                               VAR_2->pool);
  return VAR_0;
}
