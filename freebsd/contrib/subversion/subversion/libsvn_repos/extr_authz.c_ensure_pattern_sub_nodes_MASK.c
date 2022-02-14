
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pattern_sub_nodes; } ;
typedef TYPE_1__ node_t ;
typedef int node_pattern_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int) ;

__attribute__((used)) static node_pattern_t *
FUNC_1(node_t *VAR_0,
                         apr_pool_t *VAR_1)
{
  if (VAR_0->pattern_sub_nodes == ((void*)0))
    VAR_0->pattern_sub_nodes = FUNC_0(VAR_1,
                                          sizeof(*VAR_0->pattern_sub_nodes));

  return VAR_0->pattern_sub_nodes;
}
