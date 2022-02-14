
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_txn_root; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_root_t ;
struct dag_node_cache_t {int node; } ;
typedef int dag_node_t ;
struct TYPE_5__ {int node_cache; } ;
typedef TYPE_2__ base_root_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int *) ;
 struct dag_node_cache_t* FUNC_2 (int ,char const*) ;

__attribute__((used)) static dag_node_t *
FUNC_3(svn_fs_root_t *VAR_0,
                   const char *VAR_1,
                   apr_pool_t *VAR_2)
{
  base_root_data_t *VAR_3 = VAR_0->fsap_data;
  struct dag_node_cache_t *VAR_4;


  FUNC_0(*VAR_1 == '/');


  if (VAR_0->is_txn_root)
    return ((void*)0);


  VAR_4 = FUNC_2(VAR_3->node_cache, VAR_1);
  if (VAR_4)
    return FUNC_1(VAR_4->node, VAR_2);

  return ((void*)0);
}
