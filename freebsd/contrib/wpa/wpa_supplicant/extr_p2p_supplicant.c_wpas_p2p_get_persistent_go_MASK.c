
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {int disabled; scalar_t__ mode; struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct wpa_ssid *
FUNC_0(struct wpa_supplicant *VAR_1)
{
 struct wpa_ssid *VAR_2;

 for (VAR_2 = VAR_1->conf->ssid; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->disabled == 2 && VAR_2->mode == VAR_0)
   return VAR_2;
 }

 return ((void*)0);
}
