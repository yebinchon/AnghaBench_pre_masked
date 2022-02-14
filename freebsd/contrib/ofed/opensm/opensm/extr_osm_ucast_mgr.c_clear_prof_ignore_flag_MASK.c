
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_ports; int p_node; } ;
typedef TYPE_1__ osm_switch_t ;
struct TYPE_5__ {scalar_t__ is_prof_ignored; } ;
typedef TYPE_2__ osm_physp_t ;
typedef int cl_map_item_t ;


 TYPE_2__* FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(cl_map_item_t * VAR_0, void *VAR_1)
{
 osm_switch_t *VAR_2 = (osm_switch_t *) VAR_0;
 int VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_2->num_ports; VAR_3++) {
  osm_physp_t *VAR_4 = FUNC_0(VAR_2->p_node, VAR_3);
  if (VAR_4)
   VAR_4->is_prof_ignored = 0;
 }
}
