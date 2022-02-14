
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; struct TYPE_6__* type_next; } ;
typedef TYPE_1__ ibnd_node_t ;
struct TYPE_7__ {TYPE_1__* routers; TYPE_1__* switches; TYPE_1__* ch_adapters; } ;
typedef TYPE_2__ ibnd_fabric_t ;
struct TYPE_8__ {TYPE_2__ fabric; } ;
typedef TYPE_3__ f_internal_t ;






void FUNC_0(ibnd_node_t * VAR_0, f_internal_t * VAR_1)
{
 ibnd_fabric_t *VAR_2 = &VAR_1->fabric;
 switch (VAR_0->type) {
 case 130:
  VAR_0->type_next = VAR_2->ch_adapters;
  VAR_2->ch_adapters = VAR_0;
  break;
 case 128:
  VAR_0->type_next = VAR_2->switches;
  VAR_2->switches = VAR_0;
  break;
 case 129:
  VAR_0->type_next = VAR_2->routers;
  VAR_2->routers = VAR_0;
  break;
 }
}
