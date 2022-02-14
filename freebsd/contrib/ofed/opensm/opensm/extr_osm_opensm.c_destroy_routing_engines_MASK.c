
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct osm_routing_engine {int context; int (* destroy ) (int ) ;struct osm_routing_engine* next; } ;
struct TYPE_3__ {struct osm_routing_engine* routing_engine_list; } ;
typedef TYPE_1__ osm_opensm_t ;


 int FUNC_0 (struct osm_routing_engine*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(osm_opensm_t *VAR_0)
{
 struct osm_routing_engine *VAR_1, *VAR_2;

 VAR_2 = VAR_0->routing_engine_list;
 while (VAR_2) {
  VAR_1 = VAR_2;
  VAR_2 = VAR_1->next;
  if (VAR_1->destroy)
   VAR_1->destroy(VAR_1->context);
  FUNC_0(VAR_1);
 }
}
