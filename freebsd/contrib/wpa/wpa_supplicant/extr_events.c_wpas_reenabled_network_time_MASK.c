
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {scalar_t__ disabled; struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; scalar_t__ cred; scalar_t__ interworking; scalar_t__ auto_interworking; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_0)
{
 struct wpa_ssid *VAR_1;
 int VAR_2, VAR_3 = 0;







 for (VAR_1 = VAR_0->conf->ssid; VAR_1; VAR_1 = VAR_1->next) {
  if (VAR_1->disabled)
   continue;

  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (!VAR_2)
   return 0;

  if (!VAR_3 || VAR_2 < VAR_3)
   VAR_3 = VAR_2;
 }

 return VAR_3;
}
