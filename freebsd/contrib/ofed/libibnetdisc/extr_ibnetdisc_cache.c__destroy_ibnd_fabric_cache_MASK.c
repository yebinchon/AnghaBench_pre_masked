
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* port; int port_stored_to_fabric; struct TYPE_7__* next; struct TYPE_7__* ports_cache; TYPE_2__* nodes_cache; } ;
typedef TYPE_1__ ibnd_port_cache_t ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_2__ ibnd_node_cache_t ;
typedef TYPE_1__ ibnd_fabric_cache_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(ibnd_fabric_cache_t * VAR_0)
{
 ibnd_node_cache_t *VAR_1;
 ibnd_node_cache_t *VAR_2;
 ibnd_port_cache_t *VAR_3;
 ibnd_port_cache_t *VAR_4;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->nodes_cache;
 while (VAR_1) {
  VAR_2 = VAR_1->next;

  FUNC_0(VAR_1);

  VAR_1 = VAR_2;
 }

 VAR_3 = VAR_0->ports_cache;
 while (VAR_3) {
  VAR_4 = VAR_3->next;

  if (!VAR_3->port_stored_to_fabric && VAR_3->port)
   FUNC_1(VAR_3->port);
  FUNC_1(VAR_3);

  VAR_3 = VAR_4;
 }

 FUNC_1(VAR_0);
}
