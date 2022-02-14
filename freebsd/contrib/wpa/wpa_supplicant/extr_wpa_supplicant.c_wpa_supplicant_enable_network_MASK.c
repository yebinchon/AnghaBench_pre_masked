
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ wpa_state; int scan_req; scalar_t__ sched_scanning; int current_ssid; int disconnected; scalar_t__ reassociate; TYPE_1__* conf; } ;
struct wpa_ssid {struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,int ) ;

void FUNC_5(struct wpa_supplicant *VAR_4,
       struct wpa_ssid *VAR_5)
{
 if (VAR_5 == ((void*)0)) {
  for (VAR_5 = VAR_4->conf->ssid; VAR_5; VAR_5 = VAR_5->next)
   FUNC_2(VAR_4, VAR_5);
 } else
  FUNC_2(VAR_4, VAR_5);

 if (VAR_4->reassociate && !VAR_4->disconnected &&
     (!VAR_4->current_ssid ||
      VAR_4->wpa_state == VAR_2 ||
      VAR_4->wpa_state == VAR_3)) {
  if (VAR_4->sched_scanning) {
   FUNC_0(VAR_0, "Stop ongoing sched_scan to add "
       "new network to scan filters");
   FUNC_1(VAR_4);
  }

  if (FUNC_3(VAR_4) != 1) {
   VAR_4->scan_req = VAR_1;
   FUNC_4(VAR_4, 0, 0);
  }
 }
}
