
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int bss_tmp_disallowed; } ;
struct wpa_bss_tmp_disallowed {int rssi_threshold; int list; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,struct wpa_supplicant*,struct wpa_bss_tmp_disallowed*) ;
 int FUNC_2 (unsigned int,int ,int ,struct wpa_supplicant*,struct wpa_bss_tmp_disallowed*) ;
 struct wpa_bss_tmp_disallowed* FUNC_3 (int) ;
 int FUNC_4 (int ,int const*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpa_supplicant*) ;
 struct wpa_bss_tmp_disallowed* FUNC_7 (struct wpa_supplicant*,int const*) ;

void FUNC_8(struct wpa_supplicant *VAR_3, const u8 *VAR_4,
     unsigned int VAR_5, int VAR_6)
{
 struct wpa_bss_tmp_disallowed *VAR_7;

 VAR_7 = FUNC_7(VAR_3, VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_2, VAR_3, VAR_7);
  goto finish;
 }

 VAR_7 = FUNC_3(sizeof(*VAR_7));
 if (!VAR_7) {
  FUNC_5(VAR_1,
      "Failed to allocate memory for temp disallow BSS");
  return;
 }

 FUNC_4(VAR_7->bssid, VAR_4, VAR_0);
 FUNC_0(&VAR_3->bss_tmp_disallowed, &VAR_7->list);
 FUNC_6(VAR_3);

finish:
 VAR_7->rssi_threshold = VAR_6;
 FUNC_2(VAR_5, 0, VAR_2,
          VAR_3, VAR_7);
}
