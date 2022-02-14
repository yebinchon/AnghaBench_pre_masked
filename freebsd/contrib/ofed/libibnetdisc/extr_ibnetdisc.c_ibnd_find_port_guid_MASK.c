
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ guid; struct TYPE_5__* htnext; } ;
typedef TYPE_1__ ibnd_port_t ;
struct TYPE_6__ {TYPE_1__** portstbl; } ;
typedef TYPE_2__ ibnd_fabric_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

ibnd_port_t *FUNC_2(ibnd_fabric_t * VAR_1, uint64_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2) % VAR_0;
 ibnd_port_t *VAR_4;

 if (!VAR_1) {
  FUNC_1("fabric parameter NULL\n");
  return ((void*)0);
 }

 for (VAR_4 = VAR_1->portstbl[VAR_3]; VAR_4; VAR_4 = VAR_4->htnext)
  if (VAR_4->guid == VAR_2)
   return VAR_4;

 return ((void*)0);
}
