
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int* next_scan_freqs; scalar_t__ normal_scans; scalar_t__ current_ssid; scalar_t__ extra_blacklist_count; scalar_t__ current_bss; scalar_t__ disconnected; scalar_t__ own_disconnect_req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int* FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct wpa_supplicant*,int const*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpa_supplicant*,int,int) ;
 int VAR_1 ;
 int FUNC_7 (struct wpa_supplicant*,char*) ;
 int FUNC_8 (struct wpa_supplicant*) ;

void FUNC_9(struct wpa_supplicant *VAR_2, const u8 *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int *VAR_6 = ((void*)0);

 FUNC_8(VAR_2);




 FUNC_0(VAR_1, VAR_2, ((void*)0));





 if (VAR_2->own_disconnect_req) {
  VAR_2->own_disconnect_req = 0;
  FUNC_4(VAR_2, VAR_0,
   "Ignore connection failure due to local request to disconnect");
  return;
 }
 if (VAR_2->disconnected) {
  FUNC_4(VAR_2, VAR_0, "Ignore connection failure "
   "indication since interface has been put into "
   "disconnected state");
  return;
 }
 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 == 1 && VAR_2->current_bss) {






  VAR_6 = FUNC_1(VAR_2);
  if (VAR_6) {
   FUNC_4(VAR_2, VAR_0, "Another BSS in this ESS "
    "has been seen; try it next");
   FUNC_3(VAR_2, VAR_3);





   FUNC_2(VAR_2->next_scan_freqs);
   VAR_2->next_scan_freqs = VAR_6;
  }
 }





 VAR_5 += VAR_2->extra_blacklist_count;

 if (VAR_5 > 3 && VAR_2->current_ssid) {
  FUNC_5(VAR_0, "Continuous association failures - "
      "consider temporary network disabling");
  FUNC_7(VAR_2, "CONN_FAILED");
 }

 switch (VAR_5) {
 case 1:
  VAR_4 = 100;
  break;
 case 2:
  VAR_4 = 500;
  break;
 case 3:
  VAR_4 = 1000;
  break;
 case 4:
  VAR_4 = 5000;
  break;
 default:
  VAR_4 = 10000;
  break;
 }

 FUNC_4(VAR_2, VAR_0, "Blacklist count %d --> request scan in %d "
  "ms", VAR_5, VAR_4);







 VAR_2->normal_scans = 0;
 FUNC_6(VAR_2, VAR_4 / 1000,
    1000 * (VAR_4 % 1000));
}
