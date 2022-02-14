
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* htnext; struct TYPE_7__* next; TYPE_1__* port; } ;
typedef TYPE_2__ ibnd_port_cache_t ;
struct TYPE_8__ {TYPE_2__** portscachetbl; TYPE_2__* ports_cache; } ;
typedef TYPE_3__ ibnd_fabric_cache_t ;
struct TYPE_6__ {int guid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(ibnd_port_cache_t * VAR_1,
        ibnd_fabric_cache_t * VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1->port->guid) % VAR_0;

 VAR_1->next = VAR_2->ports_cache;
 VAR_2->ports_cache = VAR_1;

 VAR_1->htnext = VAR_2->portscachetbl[VAR_3];
 VAR_2->portscachetbl[VAR_3] = VAR_1;
}
