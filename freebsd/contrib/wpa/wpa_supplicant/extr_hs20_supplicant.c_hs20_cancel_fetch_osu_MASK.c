
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ fetch_osu_icon_in_progress; scalar_t__ fetch_osu_info; scalar_t__ network_select; scalar_t__ fetch_osu_waiting_scan; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct wpa_supplicant *VAR_1)
{
 FUNC_1(VAR_0, "Cancel OSU fetch");
 FUNC_0(VAR_1);
 VAR_1->fetch_osu_waiting_scan = 0;
 VAR_1->network_select = 0;
 VAR_1->fetch_osu_info = 0;
 VAR_1->fetch_osu_icon_in_progress = 0;
}
