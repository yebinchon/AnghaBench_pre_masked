
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; TYPE_1__** bss; } ;
struct TYPE_2__ {scalar_t__ started; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct hostapd_iface *VAR_0)
{
 size_t VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_bss; VAR_1++) {
  if (VAR_0->bss[VAR_1]->started &&
      FUNC_0(VAR_0->bss[VAR_1]) < 0)
   VAR_2 = -1;
 }

 return VAR_2;
}
