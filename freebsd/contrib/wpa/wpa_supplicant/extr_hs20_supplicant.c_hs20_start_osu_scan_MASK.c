
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int fetch_osu_waiting_scan; int scan_res_handler; int scan_req; int num_osu_scans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int ) ;

void FUNC_1(struct wpa_supplicant *VAR_2)
{
 VAR_2->fetch_osu_waiting_scan = 1;
 VAR_2->num_osu_scans++;
 VAR_2->scan_req = VAR_0;
 VAR_2->scan_res_handler = VAR_1;
 FUNC_0(VAR_2, 0, 0);
}
