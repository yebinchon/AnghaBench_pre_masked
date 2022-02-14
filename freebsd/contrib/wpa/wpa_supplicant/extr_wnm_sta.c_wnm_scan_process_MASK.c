
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int wnm_dialog_token; scalar_t__ wnm_reply; TYPE_1__* current_bss; int wnm_cand_from_bss; int scan_trigger_time; int wnm_cand_valid_until; int wnm_neighbor_report_elements; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int dummy; } ;
struct wpa_bss {int dummy; } ;
typedef enum mbo_transition_reject_reason { ____Placeholder_mbo_transition_reject_reason } mbo_transition_reject_reason ;
typedef enum bss_trans_mgmt_status_code { ____Placeholder_bss_trans_mgmt_status_code } bss_trans_mgmt_status_code ;
struct TYPE_2__ {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wpa_bss* FUNC_0 (struct wpa_supplicant*,int ,int*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_bss*,struct wpa_ssid*,int) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 int FUNC_5 (struct wpa_supplicant*,int ,int,int,int ,int *) ;
 int FUNC_6 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_7 (int ,char*) ;

int FUNC_8(struct wpa_supplicant *VAR_5, int VAR_6)
{
 struct wpa_bss *VAR_7;
 struct wpa_ssid *VAR_8 = VAR_5->current_ssid;
 enum bss_trans_mgmt_status_code VAR_9 = VAR_4;
 enum mbo_transition_reject_reason VAR_10 =
  VAR_1;

 if (!VAR_5->wnm_neighbor_report_elements)
  return 0;

 FUNC_6(VAR_5, VAR_2,
  "WNM: Process scan results for BSS Transition Management");
 if (FUNC_2(&VAR_5->wnm_cand_valid_until,
         &VAR_5->scan_trigger_time)) {
  FUNC_7(VAR_2, "WNM: Previously stored BSS transition candidate list is not valid anymore - drop it");
  FUNC_4(VAR_5);
  return 0;
 }

 if (!VAR_5->current_bss ||
     FUNC_1(VAR_5->wnm_cand_from_bss, VAR_5->current_bss->bssid,
        VAR_0) != 0) {
  FUNC_7(VAR_2, "WNM: Stored BSS transition candidate list not from the current BSS - ignore it");
  return 0;
 }


 VAR_7 = FUNC_0(VAR_5, 0, &VAR_10);
 if (!VAR_7) {
  FUNC_7(VAR_2, "WNM: No BSS transition candidate match found");
  VAR_9 = VAR_3;
  goto send_bss_resp_fail;
 }


 FUNC_3(VAR_5, VAR_7, VAR_8, 1);
 return 1;

send_bss_resp_fail:
 if (!VAR_6)
  return 0;



 if (VAR_5->wnm_reply) {
  VAR_5->wnm_reply = 0;
  FUNC_5(VAR_5,
        VAR_5->wnm_dialog_token,
        VAR_9, VAR_10, 0, ((void*)0));
 }
 FUNC_4(VAR_5);

 return 0;
}
