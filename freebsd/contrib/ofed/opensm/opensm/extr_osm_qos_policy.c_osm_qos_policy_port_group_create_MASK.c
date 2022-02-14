
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port_map; } ;
typedef TYPE_1__ osm_qos_port_group_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

osm_qos_port_group_t *FUNC_2()
{
 osm_qos_port_group_t *VAR_0 =
     (osm_qos_port_group_t *) FUNC_0(1, sizeof(osm_qos_port_group_t));
 if (VAR_0)
  FUNC_1(&VAR_0->port_map);
 return VAR_0;
}
