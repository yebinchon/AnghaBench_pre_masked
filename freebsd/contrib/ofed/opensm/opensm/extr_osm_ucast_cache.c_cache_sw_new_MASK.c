
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {unsigned int num_ports; TYPE_1__* ports; } ;
typedef TYPE_2__ cache_switch_t ;
typedef int cache_port_t ;
struct TYPE_6__ {int is_leaf; int remote_lid_ho; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static cache_switch_t *FUNC_2(uint16_t VAR_1, unsigned VAR_2)
{
 cache_switch_t *VAR_3 = FUNC_0(sizeof(cache_switch_t) +
         VAR_2 * sizeof(cache_port_t));
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_3, 0,
        sizeof(*VAR_3) + VAR_2 * sizeof(cache_port_t));

 VAR_3->num_ports = VAR_2;


 VAR_3->ports[0].remote_lid_ho = VAR_1;
 VAR_3->ports[0].is_leaf = VAR_0;

 return VAR_3;
}
