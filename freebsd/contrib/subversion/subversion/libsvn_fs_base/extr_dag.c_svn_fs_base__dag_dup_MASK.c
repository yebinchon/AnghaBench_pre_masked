
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int created_path; int kind; int id; int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;

dag_node_t *
FUNC_3(const dag_node_t *VAR_0,
                     apr_pool_t *VAR_1)
{

  dag_node_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->fs = VAR_0->fs;
  VAR_2->id = FUNC_2(VAR_0->id, VAR_1);
  VAR_2->kind = VAR_0->kind;
  VAR_2->created_path = FUNC_1(VAR_1, VAR_0->created_path);
  return VAR_2;
}
