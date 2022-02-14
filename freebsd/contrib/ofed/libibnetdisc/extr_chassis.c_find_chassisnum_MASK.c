
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* chassis; } ;
typedef TYPE_1__ ibnd_fabric_t ;
struct TYPE_6__ {unsigned char chassisnum; struct TYPE_6__* next; } ;
typedef TYPE_2__ ibnd_chassis_t ;



__attribute__((used)) static ibnd_chassis_t *FUNC_0(ibnd_fabric_t * VAR_0,
           unsigned char VAR_1)
{
 ibnd_chassis_t *VAR_2;

 for (VAR_2 = VAR_0->chassis; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->chassisnum == VAR_1)
   return VAR_2;

 return ((void*)0);
}
