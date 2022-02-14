
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_physp; } ;
typedef TYPE_1__ osm_qos_port_t ;
typedef int osm_physp_t ;


 scalar_t__ FUNC_0 (int,int) ;

osm_qos_port_t *FUNC_1(osm_physp_t *VAR_0)
{
 osm_qos_port_t *VAR_1 =
     (osm_qos_port_t *) FUNC_0(1, sizeof(osm_qos_port_t));
 if (VAR_1)
  VAR_1->p_physp = VAR_0;
 return VAR_1;
}
