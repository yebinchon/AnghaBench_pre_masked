
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next_chassis_node; TYPE_2__* chassis; } ;
typedef TYPE_1__ ibnd_node_t ;
struct TYPE_6__ {TYPE_1__* nodes; } ;
typedef TYPE_2__ ibnd_chassis_t ;



__attribute__((used)) static void FUNC_0(ibnd_chassis_t * VAR_0, ibnd_node_t * VAR_1)
{
 VAR_1->chassis = VAR_0;
 VAR_1->next_chassis_node = VAR_0->nodes;
 VAR_0->nodes = VAR_1;
}
