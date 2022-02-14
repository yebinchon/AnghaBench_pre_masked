
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;



__attribute__((used)) static int FUNC_0(struct wpa_supplicant *VAR_0,
      struct wpa_ssid *VAR_1)
{
 struct wpa_ssid *VAR_2;

 for (VAR_2 = VAR_0->conf->ssid; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2 == VAR_1)
   return 1;
 }

 return 0;
}
