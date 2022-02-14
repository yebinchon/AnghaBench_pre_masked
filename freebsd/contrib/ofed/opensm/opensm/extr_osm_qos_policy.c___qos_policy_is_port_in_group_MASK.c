
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int osm_subn_t ;
struct TYPE_3__ {int node_types; int port_map; } ;
typedef TYPE_1__ osm_qos_port_group_t ;
typedef int osm_physp_t ;
typedef int osm_node_t ;
typedef int ib_net64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static boolean_t
FUNC_6(osm_subn_t * VAR_2,
         const osm_physp_t * VAR_3,
         osm_qos_port_group_t * VAR_4)
{
 osm_node_t *VAR_5 = FUNC_4(VAR_3);
 ib_net64_t VAR_6 = FUNC_5(VAR_3);
 uint64_t VAR_7 = FUNC_0(VAR_6);



 if ( VAR_4->node_types &
      (((uint8_t)1)<<FUNC_3(VAR_5)) )
  return VAR_1;



 if (FUNC_2(&VAR_4->port_map, VAR_7) !=
     FUNC_1(&VAR_4->port_map))
  return VAR_1;

 return VAR_0;
}
