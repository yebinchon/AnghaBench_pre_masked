
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ wpa_state; int own_disconnect_req; int reassociate; int scan_req; struct wpa_ssid* connect_without_scan; scalar_t__ last_owe_group; int disconnected; int * next_scan_freqs; int eapol; struct wpa_ssid* current_ssid; TYPE_1__* conf; } ;
struct wpa_ssid {int disabled; scalar_t__ id; scalar_t__ mode; scalar_t__ owe_transition_bss_select_count; struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*,int ) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 int FUNC_5 (struct wpa_supplicant*,int ,int) ;
 int FUNC_6 (struct wpa_supplicant*,struct wpa_ssid*,int) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_8 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_9 (struct wpa_supplicant*) ;

void FUNC_10(struct wpa_supplicant *VAR_5,
       struct wpa_ssid *VAR_6)
{

 struct wpa_ssid *VAR_7;
 int VAR_8 = 0;

 if (VAR_6 && VAR_6 != VAR_5->current_ssid && VAR_5->current_ssid) {
  if (VAR_5->wpa_state >= VAR_4)
   VAR_5->own_disconnect_req = 1;
  FUNC_3(
   VAR_5, VAR_2);
  VAR_8 = 1;
 }

 if (VAR_6)
  FUNC_6(VAR_5, VAR_6, 1);





 for (VAR_7 = VAR_5->conf->ssid; VAR_7;
      VAR_7 = VAR_7->next) {
  int VAR_9 = VAR_7->disabled;
  if (VAR_9 == 2)
   continue;

  VAR_7->disabled = VAR_6 ? (VAR_6->id != VAR_7->id) : 0;
  if (VAR_9 && !VAR_7->disabled)
   FUNC_6(VAR_5, VAR_7, 0);

  if (VAR_9 != VAR_7->disabled)
   FUNC_7(VAR_5, VAR_7);
 }

 if (VAR_6 && VAR_6 == VAR_5->current_ssid && VAR_5->current_ssid &&
     VAR_5->wpa_state >= VAR_4) {

  FUNC_2(VAR_0, "Already associated with the "
      "selected network - do nothing");
  return;
 }

 if (VAR_6) {
  VAR_5->current_ssid = VAR_6;
  FUNC_0(VAR_5->eapol, ((void*)0), ((void*)0));
  VAR_5->connect_without_scan =
   (VAR_6->mode == VAR_3) ? VAR_6 : ((void*)0);





  FUNC_1(VAR_5->next_scan_freqs);
  VAR_5->next_scan_freqs = ((void*)0);
 } else {
  VAR_5->connect_without_scan = ((void*)0);
 }

 VAR_5->disconnected = 0;
 VAR_5->reassociate = 1;
 VAR_5->last_owe_group = 0;
 if (VAR_6)
  VAR_6->owe_transition_bss_select_count = 0;

 if (VAR_5->connect_without_scan ||
     FUNC_4(VAR_5) != 1) {
  VAR_5->scan_req = VAR_1;
  FUNC_9(VAR_5);
  FUNC_5(VAR_5, 0, VAR_8 ? 100000 : 0);
 }

 if (VAR_6)
  FUNC_8(VAR_5, VAR_6);
}
