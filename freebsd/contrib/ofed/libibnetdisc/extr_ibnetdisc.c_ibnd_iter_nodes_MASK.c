
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ ibnd_node_t ;
typedef int (* ibnd_iter_node_func_t ) (TYPE_1__*,void*) ;
struct TYPE_7__ {TYPE_1__* nodes; } ;
typedef TYPE_3__ ibnd_fabric_t ;


 int FUNC_0 (char*) ;

void FUNC_1(ibnd_fabric_t * VAR_0, ibnd_iter_node_func_t VAR_1,
       void *VAR_2)
{
 ibnd_node_t *VAR_3 = ((void*)0);

 if (!VAR_0) {
  FUNC_0("fabric parameter NULL\n");
  return;
 }

 if (!VAR_1) {
  FUNC_0("func parameter NULL\n");
  return;
 }

 for (VAR_3 = VAR_0->nodes; VAR_3; VAR_3 = VAR_3->next)
  VAR_1(VAR_3, VAR_2);
}
