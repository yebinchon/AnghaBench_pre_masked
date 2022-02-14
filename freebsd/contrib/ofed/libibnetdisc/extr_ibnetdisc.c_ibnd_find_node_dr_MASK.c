
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * node; } ;
typedef TYPE_1__ ibnd_port_t ;
typedef int ibnd_node_t ;
typedef int ibnd_fabric_t ;


 TYPE_1__* FUNC_0 (int *,char*) ;

ibnd_node_t *FUNC_1(ibnd_fabric_t * VAR_0, char *VAR_1)
{
 ibnd_port_t *VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2->node;
}
