
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ wpa_state; struct wpa_supplicant* next; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpa_supplicant* ifaces; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1)
{
 struct wpa_supplicant *VAR_2 = VAR_1;
 struct wpa_supplicant *VAR_3;

 for (VAR_3 = VAR_2->global->ifaces; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3 == VAR_2)
   continue;
  if (VAR_3->wpa_state > VAR_0)
   return 1;
 }
 return 0;
}
