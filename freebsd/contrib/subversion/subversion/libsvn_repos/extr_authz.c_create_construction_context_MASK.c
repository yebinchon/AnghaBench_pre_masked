
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int node_segment_pair_t ;
struct TYPE_4__ {int path; } ;
typedef TYPE_1__ construction_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static construction_context_t *
FUNC_2(apr_pool_t *VAR_0)
{
  construction_context_t *VAR_1 = FUNC_1(VAR_0, sizeof(*VAR_1));



  VAR_1->path = FUNC_0(VAR_0, 32, sizeof(node_segment_pair_t));

  return VAR_1;
}
