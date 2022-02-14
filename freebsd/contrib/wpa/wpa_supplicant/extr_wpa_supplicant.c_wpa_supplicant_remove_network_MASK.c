
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prev_bssid_set; } ;
struct wpa_supplicant {scalar_t__ wpa_state; int own_disconnect_req; scalar_t__ sched_scanning; int conf; int eapol; int wpa; struct wpa_ssid* current_ssid; TYPE_1__ sme; struct wpa_ssid* last_ssid; } ;
struct wpa_ssid {int disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 struct wpa_ssid* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct wpa_supplicant*) ;
 int FUNC_7 (struct wpa_supplicant*,int ) ;
 int FUNC_8 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_9 (struct wpa_supplicant*,struct wpa_ssid*) ;

int FUNC_10(struct wpa_supplicant *VAR_3, int VAR_4)
{
 struct wpa_ssid *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3->conf, VAR_4);
 if (!VAR_5)
  return -1;
 FUNC_9(VAR_3, VAR_5);

 if (VAR_3->last_ssid == VAR_5)
  VAR_3->last_ssid = ((void*)0);

 if (VAR_5 == VAR_3->current_ssid || !VAR_3->current_ssid) {







  FUNC_0(VAR_3->eapol);
 }

 if (VAR_5 == VAR_3->current_ssid) {
  FUNC_5(VAR_3->wpa, ((void*)0));
  FUNC_1(VAR_3->eapol, ((void*)0), ((void*)0));

  if (VAR_3->wpa_state >= VAR_2)
   VAR_3->own_disconnect_req = 1;
  FUNC_7(VAR_3,
           VAR_1);
 }

 VAR_6 = VAR_5->disabled;

 if (FUNC_3(VAR_3->conf, VAR_4) < 0)
  return -2;

 if (!VAR_6 && VAR_3->sched_scanning) {
  FUNC_4(VAR_0,
      "Stop ongoing sched_scan to remove network from filters");
  FUNC_6(VAR_3);
  FUNC_8(VAR_3, 0, 0);
 }

 return 0;
}
