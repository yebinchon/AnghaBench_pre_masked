
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {unsigned int num_bss; TYPE_1__** bss; } ;
struct TYPE_2__ {scalar_t__ csa_in_progress; } ;



int FUNC_0(struct hostapd_iface *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_bss; VAR_1++)
  if (VAR_0->bss[VAR_1]->csa_in_progress)
   return 1;
 return 0;
}
