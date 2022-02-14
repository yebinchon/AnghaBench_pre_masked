
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {int driver_ap_teardown; int drv_flags; TYPE_2__* conf; } ;
struct hapd_interfaces {size_t count; struct hostapd_iface** iface; } ;
struct TYPE_4__ {size_t num_bss; TYPE_1__** bss; } ;
struct TYPE_3__ {int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (struct hostapd_iface*,size_t) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;

int FUNC_4(struct hapd_interfaces *VAR_2, char *VAR_3)
{
 struct hostapd_iface *VAR_4;
 size_t VAR_5, VAR_6, VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++) {
  VAR_4 = VAR_2->iface[VAR_5];
  if (VAR_4 == ((void*)0))
   return -1;
  if (!FUNC_2(VAR_4->conf->bss[0]->iface, VAR_3)) {
   FUNC_3(VAR_0, "Remove interface '%s'", VAR_3);
   VAR_4->driver_ap_teardown =
    !!(VAR_4->drv_flags &
       VAR_1);

   FUNC_0(VAR_4);
   VAR_7 = VAR_5;
   while (VAR_7 < (VAR_2->count - 1)) {
    VAR_2->iface[VAR_7] =
     VAR_2->iface[VAR_7 + 1];
    VAR_7++;
   }
   VAR_2->count--;
   return 0;
  }

  for (VAR_6 = 0; VAR_6 < VAR_4->conf->num_bss; VAR_6++) {
   if (!FUNC_2(VAR_4->conf->bss[VAR_6]->iface, VAR_3)) {
    VAR_4->driver_ap_teardown =
     !(VAR_4->drv_flags &
       VAR_1);
    return FUNC_1(VAR_4, VAR_6);
   }
  }
 }
 return -1;
}
