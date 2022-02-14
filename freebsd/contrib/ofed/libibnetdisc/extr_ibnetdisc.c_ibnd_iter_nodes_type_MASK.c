
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* type_next; } ;
typedef TYPE_1__ ibnd_node_t ;
typedef int (* ibnd_iter_node_func_t ) (TYPE_1__*,void*) ;
struct TYPE_7__ {TYPE_1__* routers; TYPE_1__* ch_adapters; TYPE_1__* switches; } ;
typedef TYPE_3__ ibnd_fabric_t ;


 int FUNC_0 (char*,...) ;




void FUNC_1(ibnd_fabric_t * VAR_0, ibnd_iter_node_func_t VAR_1,
     int VAR_2, void *VAR_3)
{
 ibnd_node_t *VAR_4 = ((void*)0);
 ibnd_node_t *VAR_5 = ((void*)0);

 if (!VAR_0) {
  FUNC_0("fabric parameter NULL\n");
  return;
 }

 if (!VAR_1) {
  FUNC_0("func parameter NULL\n");
  return;
 }

 switch (VAR_2) {
 case 128:
  VAR_4 = VAR_0->switches;
  break;
 case 130:
  VAR_4 = VAR_0->ch_adapters;
  break;
 case 129:
  VAR_4 = VAR_0->routers;
  break;
 default:
  FUNC_0("Invalid node_type specified %d\n", VAR_2);
  break;
 }

 for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->type_next)
  VAR_1(VAR_5, VAR_3);
}
