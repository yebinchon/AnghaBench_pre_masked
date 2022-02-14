
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int own_disconnect_req; TYPE_1__* conf; scalar_t__ current_ssid; } ;
struct wpa_ssid {int disabled; int disabled_for_connect; struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_1,
      struct wpa_ssid *VAR_2)
{
 struct wpa_ssid *VAR_3;

 if (VAR_1->current_ssid) {
  VAR_1->own_disconnect_req = 1;
  FUNC_0(
   VAR_1, VAR_0);
 }


 VAR_3 = VAR_1->conf->ssid;
 while (VAR_3) {
  int VAR_4 = VAR_3->disabled;
  VAR_3->disabled_for_connect = 0;






  if (VAR_4 != 2) {
   VAR_3->disabled = VAR_3 != VAR_2;
   if (VAR_4 != VAR_3->disabled) {
    if (VAR_3->disabled)
     VAR_3->disabled_for_connect = 1;
    FUNC_1(VAR_1,
            VAR_3);
   }
  }
  VAR_3 = VAR_3->next;
 }
}
