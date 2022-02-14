
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int fetch_all_anqp; int fetch_osu_info; scalar_t__ fetch_osu_icon_in_progress; scalar_t__ network_select; int fetch_osu_waiting_scan; } ;
struct wpa_scan_results {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_1,
          struct wpa_scan_results *VAR_2)
{
 FUNC_1(VAR_0, "OSU provisioning fetch scan completed");
 if (!VAR_1->fetch_osu_waiting_scan) {
  FUNC_1(VAR_0, "OSU fetch have been canceled");
  return;
 }
 VAR_1->network_select = 0;
 VAR_1->fetch_all_anqp = 1;
 VAR_1->fetch_osu_info = 1;
 VAR_1->fetch_osu_icon_in_progress = 0;

 FUNC_0(VAR_1);
}
