
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ wpa_state; int own_disconnect_req; scalar_t__ sched_scanning; struct wpa_ssid* current_ssid; TYPE_1__* conf; } ;
struct wpa_ssid {int disabled; struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int ) ;
 int FUNC_3 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpa_ssid*) ;

void FUNC_5(struct wpa_supplicant *VAR_3,
        struct wpa_ssid *VAR_4)
{
 struct wpa_ssid *VAR_5;
 int VAR_6;

 if (VAR_4 == ((void*)0)) {
  if (VAR_3->sched_scanning)
   FUNC_1(VAR_3);

  for (VAR_5 = VAR_3->conf->ssid; VAR_5;
       VAR_5 = VAR_5->next) {
   VAR_6 = VAR_5->disabled;
   if (VAR_6 == 2)
    continue;


   VAR_5->disabled = 1;

   if (VAR_6 != VAR_5->disabled)
    FUNC_4(
     VAR_3, VAR_5);
  }
  if (VAR_3->current_ssid) {
   if (VAR_3->wpa_state >= VAR_2)
    VAR_3->own_disconnect_req = 1;
   FUNC_2(
    VAR_3, VAR_1);
  }
 } else if (VAR_4->disabled != 2) {
  if (VAR_4 == VAR_3->current_ssid) {
   if (VAR_3->wpa_state >= VAR_2)
    VAR_3->own_disconnect_req = 1;
   FUNC_2(
    VAR_3, VAR_1);
  }

  VAR_6 = VAR_4->disabled;

  VAR_4->disabled = 1;

  if (VAR_6 != VAR_4->disabled) {
   FUNC_4(VAR_3, VAR_4);
   if (VAR_3->sched_scanning) {
    FUNC_0(VAR_0, "Stop ongoing sched_scan "
        "to remove network from filters");
    FUNC_1(VAR_3);
    FUNC_3(VAR_3, 0, 0);
   }
  }
 }
}
