
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int own_disconnect_req; TYPE_1__* conf; int eapol; int wpa; struct wpa_ssid* current_ssid; scalar_t__ known_wps_freq; scalar_t__ after_wps; } ;
struct wpa_ssid {int key_mgmt; int id; struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct wpa_supplicant*,int ) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_6 (struct wpa_supplicant*) ;
 int VAR_2 ;
 int FUNC_7 (struct wpa_supplicant*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct wpa_supplicant *VAR_4)
{
 int VAR_5;
 struct wpa_ssid *VAR_6, *VAR_7 = ((void*)0), *VAR_8;

 VAR_4->after_wps = 0;
 VAR_4->known_wps_freq = 0;

 VAR_8 = VAR_4->current_ssid;


 FUNC_7(VAR_4);

 FUNC_1(VAR_3, VAR_4, ((void*)0));
 FUNC_1(VAR_2, VAR_4, ((void*)0));


 VAR_6 = VAR_4->conf->ssid;
 while (VAR_6) {
  if (VAR_6->key_mgmt & VAR_1) {
   if (VAR_6 == VAR_4->current_ssid) {
    VAR_4->own_disconnect_req = 1;
    FUNC_4(
     VAR_4, VAR_0);
   }
   VAR_5 = VAR_6->id;
   VAR_7 = VAR_6;
  } else
   VAR_5 = -1;
  VAR_6 = VAR_6->next;
  if (VAR_5 >= 0) {
   if (VAR_8 == VAR_7) {
    FUNC_3(VAR_4->wpa, ((void*)0));
    FUNC_0(VAR_4->eapol, ((void*)0),
             ((void*)0));
   }
   FUNC_5(VAR_4, VAR_7);
   FUNC_2(VAR_4->conf, VAR_5);
  }
 }

 FUNC_6(VAR_4);
}
