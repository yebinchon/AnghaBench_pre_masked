
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {unsigned int num_ports; } ;
typedef TYPE_1__ osm_switch_t ;
typedef int osm_opensm_t ;
typedef int ib_net64_t ;


 int FUNC_0 (TYPE_1__*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(osm_opensm_t * VAR_0, osm_switch_t * VAR_1,
    uint16_t VAR_2, ib_net64_t VAR_3,
    uint8_t VAR_4[], unsigned VAR_5)
{
 uint8_t VAR_6;

 if (VAR_5 > VAR_1->num_ports)
  VAR_5 = VAR_1->num_ports;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_0(VAR_1, VAR_2, VAR_6, VAR_4[VAR_6]);
}
