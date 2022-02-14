
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int network_select; int auto_select; int* manual_scan_freqs; scalar_t__ known_wps_freq; scalar_t__ after_wps; int scan_req; scalar_t__ normal_scans; int scan_res_handler; scalar_t__ fetch_osu_info; scalar_t__ fetch_all_anqp; scalar_t__ auto_network_select; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*,int ,int ) ;

int FUNC_4(struct wpa_supplicant *VAR_3, int VAR_4,
   int *VAR_5)
{
 FUNC_0(VAR_3);
 VAR_3->network_select = 1;
 VAR_3->auto_network_select = 0;
 VAR_3->auto_select = !!VAR_4;
 VAR_3->fetch_all_anqp = 0;
 VAR_3->fetch_osu_info = 0;
 FUNC_2(VAR_3, VAR_1,
  "Interworking: Start scan for network selection");
 VAR_3->scan_res_handler = VAR_2;
 VAR_3->normal_scans = 0;
 VAR_3->scan_req = VAR_0;
 FUNC_1(VAR_3->manual_scan_freqs);
 VAR_3->manual_scan_freqs = VAR_5;
 VAR_3->after_wps = 0;
 VAR_3->known_wps_freq = 0;
 FUNC_3(VAR_3, 0, 0);

 return 0;
}
