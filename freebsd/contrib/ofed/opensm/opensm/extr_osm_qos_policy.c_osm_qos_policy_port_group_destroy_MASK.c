
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int port_map; int map_item; struct TYPE_5__* use; struct TYPE_5__* name; } ;
typedef TYPE_1__ osm_qos_port_t ;
typedef TYPE_1__ osm_qos_port_group_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(osm_qos_port_group_t * VAR_0)
{
 osm_qos_port_t * VAR_1;
 osm_qos_port_t * VAR_2;

 if (!VAR_0)
  return;

 if (VAR_0->name)
  FUNC_4(VAR_0->name);
 if (VAR_0->use)
  FUNC_4(VAR_0->use);

 VAR_1 = (osm_qos_port_t *) FUNC_1(&VAR_0->port_map);
 while (VAR_1 != (osm_qos_port_t *) FUNC_0(&VAR_0->port_map))
 {
  VAR_2 = VAR_1;
  VAR_1 = (osm_qos_port_t *) FUNC_2(&VAR_1->map_item);
  FUNC_4(VAR_2);
 }
 FUNC_3(&VAR_0->port_map);

 FUNC_4(VAR_0);
}
