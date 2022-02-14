
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prev_bssid_set; } ;
struct wpa_supplicant {scalar_t__ wpa_state; int own_disconnect_req; TYPE_2__* conf; struct wpa_ssid* last_ssid; int eapol; int wpa; TYPE_1__ sme; scalar_t__ current_ssid; scalar_t__ sched_scanning; } ;
struct wpa_ssid {int id; struct wpa_ssid* next; } ;
struct TYPE_4__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct wpa_supplicant*) ;
 int FUNC_8 (struct wpa_supplicant*,int ) ;
 int FUNC_9 (struct wpa_supplicant*,int) ;
 int FUNC_10 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static int FUNC_11(
 struct wpa_supplicant *VAR_3, char *VAR_4)
{
 int VAR_5;
 struct wpa_ssid *VAR_6;
 int VAR_7;


 if (FUNC_3(VAR_4, "all") == 0) {
  FUNC_5(VAR_0, "CTRL_IFACE: REMOVE_NETWORK all");
  if (VAR_3->sched_scanning)
   FUNC_7(VAR_3);

  FUNC_1(VAR_3->eapol);
  if (VAR_3->current_ssid) {



   FUNC_6(VAR_3->wpa, ((void*)0));
   FUNC_2(VAR_3->eapol, ((void*)0), ((void*)0));
   if (VAR_3->wpa_state >= VAR_2)
    VAR_3->own_disconnect_req = 1;
   FUNC_8(
    VAR_3, VAR_1);
  }
  VAR_6 = VAR_3->conf->ssid;
  while (VAR_6) {
   struct wpa_ssid *VAR_8 = VAR_6;
   VAR_5 = VAR_6->id;
   VAR_6 = VAR_6->next;
   if (VAR_3->last_ssid == VAR_8)
    VAR_3->last_ssid = ((void*)0);
   FUNC_10(VAR_3, VAR_8);
   FUNC_4(VAR_3->conf, VAR_5);
  }
  return 0;
 }

 VAR_5 = FUNC_0(VAR_4);
 FUNC_5(VAR_0, "CTRL_IFACE: REMOVE_NETWORK id=%d", VAR_5);

 VAR_7 = FUNC_9(VAR_3, VAR_5);
 if (VAR_7 == -1) {
  FUNC_5(VAR_0, "CTRL_IFACE: Could not find network "
      "id=%d", VAR_5);
  return -1;
 }
 if (VAR_7 == -2) {
  FUNC_5(VAR_0, "CTRL_IFACE: Not able to remove the "
      "network id=%d", VAR_5);
  return -1;
 }
 return 0;
}
