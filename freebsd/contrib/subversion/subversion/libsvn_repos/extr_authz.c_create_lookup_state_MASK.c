
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int node_t ;
struct TYPE_4__ {void* parent_path; void* scratch_pad; void* current; void* next; } ;
typedef TYPE_1__ lookup_state_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int,int *) ;

__attribute__((used)) static lookup_state_t *
FUNC_3(apr_pool_t *VAR_0)
{
  lookup_state_t *VAR_1 = FUNC_1(VAR_0, sizeof(*VAR_1));

  VAR_1->next = FUNC_0(VAR_0, 4, sizeof(node_t *));
  VAR_1->current = FUNC_0(VAR_0, 4, sizeof(node_t *));







  VAR_1->scratch_pad = FUNC_2(200, VAR_0);



  VAR_1->parent_path = FUNC_2(200, VAR_0);

  return VAR_1;
}
