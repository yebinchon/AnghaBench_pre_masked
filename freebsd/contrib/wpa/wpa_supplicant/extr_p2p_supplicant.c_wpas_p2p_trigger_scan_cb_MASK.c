
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int own_scan_requested; struct wpa_radio_work* p2p_scan_work; scalar_t__ clear_driver_scan_cache; int scan_res_handler; int scan_trigger_time; TYPE_1__* global; int curr_scan_cookie; } ;
struct wpa_radio_work {struct wpa_driver_scan_params* ctx; int started; struct wpa_supplicant* wpa_s; } ;
struct wpa_driver_scan_params {int only_new_results; int scan_cookie; } ;
struct TYPE_2__ {int p2p; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct wpa_radio_work*) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpa_driver_scan_params*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct wpa_radio_work *VAR_2, int VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_2->wpa_s;
 struct wpa_driver_scan_params *VAR_5 = VAR_2->ctx;
 int VAR_6;

 if (VAR_3) {
  if (!VAR_2->started) {
   FUNC_5(VAR_5);
   return;
  }

  VAR_4->p2p_scan_work = ((void*)0);
  return;
 }

 if (VAR_4->clear_driver_scan_cache) {
  FUNC_4(VAR_0,
      "Request driver to clear scan cache due to local BSS flush");
  VAR_5->only_new_results = 1;
 }
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6 == 0)
  VAR_4->curr_scan_cookie = VAR_5->scan_cookie;
 FUNC_5(VAR_5);
 VAR_2->ctx = ((void*)0);
 if (VAR_6) {
  FUNC_2(VAR_2);
  FUNC_1(VAR_4->global->p2p, VAR_6);
  return;
 }

 FUNC_1(VAR_4->global->p2p, VAR_6);
 FUNC_0(&VAR_4->scan_trigger_time);
 VAR_4->scan_res_handler = VAR_1;
 VAR_4->own_scan_requested = 1;
 VAR_4->clear_driver_scan_cache = 0;
 VAR_4->p2p_scan_work = VAR_2;
}
