
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int bssid; struct wmm_tspec_element*** tspecs; int wmm_ac_assoc_info; } ;
struct wmm_tspec_element {int dummy; } ;
typedef enum ts_dir_idx { ____Placeholder_ts_dir_idx } ts_dir_idx ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int,int) ;
 int FUNC_1 (struct wpa_supplicant*,int ,int*) ;
 int FUNC_2 (struct wpa_supplicant*,struct wmm_tspec_element*,int ) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct wpa_supplicant *VAR_1, u8 VAR_2)
{
 struct wmm_tspec_element VAR_3;
 int VAR_4;
 enum ts_dir_idx VAR_5;

 if (!VAR_1->wmm_ac_assoc_info) {
  FUNC_3(VAR_0,
      "WMM AC: Failed to delete TS, WMM AC is disabled");
  return -1;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_3(VAR_0, "WMM AC: TS does not exist");
  return -1;
 }

 VAR_3 = *VAR_1->tspecs[VAR_4][VAR_5];

 FUNC_0(VAR_1, VAR_4, VAR_5);

 FUNC_2(VAR_1, &VAR_3, VAR_1->bssid);

 return 0;
}
