
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; int confname; } ;
struct wpa_ssid {scalar_t__ disabled; scalar_t__ disabled_for_connect; struct wpa_ssid* next; } ;
struct TYPE_2__ {scalar_t__ update_config; struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_2)
{
 struct wpa_ssid *VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_1, VAR_2, ((void*)0));

 for (VAR_3 = VAR_2->conf->ssid; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->disabled_for_connect && VAR_3->disabled) {
   VAR_3->disabled_for_connect = 0;
   VAR_3->disabled = 0;
   FUNC_3(VAR_2, VAR_3);
   VAR_4++;
  }
 }

 if (VAR_4) {

  if (VAR_2->conf->update_config &&
      FUNC_1(VAR_2->confname, VAR_2->conf)) {
   FUNC_2(VAR_0, "WPS: Failed to update "
       "configuration");
  }

 }
}
