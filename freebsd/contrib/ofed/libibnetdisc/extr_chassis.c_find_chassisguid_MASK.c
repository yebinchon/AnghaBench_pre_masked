
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int ibnd_node_t ;
struct TYPE_5__ {TYPE_2__* chassis; } ;
typedef TYPE_1__ ibnd_fabric_t ;
struct TYPE_6__ {scalar_t__ chassisguid; struct TYPE_6__* next; } ;
typedef TYPE_2__ ibnd_chassis_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static ibnd_chassis_t *FUNC_1(ibnd_fabric_t * VAR_0,
     ibnd_node_t * VAR_1)
{
 ibnd_chassis_t *VAR_2;
 uint64_t VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 for (VAR_2 = VAR_0->chassis; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->chassisguid == VAR_3)
   return VAR_2;

 return ((void*)0);
}
