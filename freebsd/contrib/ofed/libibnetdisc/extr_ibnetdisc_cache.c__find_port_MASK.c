
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* port; struct TYPE_9__* htnext; } ;
typedef TYPE_2__ ibnd_port_cache_t ;
struct TYPE_10__ {scalar_t__ guid; scalar_t__ portnum; } ;
typedef TYPE_3__ ibnd_port_cache_key_t ;
struct TYPE_11__ {TYPE_2__** portscachetbl; } ;
typedef TYPE_4__ ibnd_fabric_cache_t ;
struct TYPE_8__ {scalar_t__ guid; scalar_t__ portnum; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static ibnd_port_cache_t *FUNC_1(ibnd_fabric_cache_t * VAR_1,
         ibnd_port_cache_key_t * VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2->guid) % VAR_0;
 ibnd_port_cache_t *VAR_4;

 for (VAR_4 = VAR_1->portscachetbl[VAR_3];
      VAR_4; VAR_4 = VAR_4->htnext) {
  if (VAR_4->port->guid == VAR_2->guid
      && VAR_4->port->portnum == VAR_2->portnum)
   return VAR_4;
 }

 return ((void*)0);
}
