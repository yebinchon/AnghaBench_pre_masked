
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ node; int node_stored_to_fabric; struct TYPE_4__* port_cache_keys; } ;
typedef TYPE_1__ ibnd_node_cache_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(ibnd_node_cache_t * VAR_0)
{
 FUNC_1(VAR_0->port_cache_keys);
 if (!VAR_0->node_stored_to_fabric && VAR_0->node)
  FUNC_0(VAR_0->node);
 FUNC_1(VAR_0);
}
