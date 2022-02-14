
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {int key_mgmt; int disabled; struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;

int FUNC_0(struct wpa_supplicant *VAR_1)
{
 struct wpa_ssid *VAR_2;

 for (VAR_2 = VAR_1->conf->ssid; VAR_2; VAR_2 = VAR_2->next) {
  if ((VAR_2->key_mgmt & VAR_0) && !VAR_2->disabled)
   return 1;
 }

 return 0;
}
