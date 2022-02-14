
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpa_driver_scan_params {scalar_t__ sched_scan_plans_num; int filter_rssi; int relative_rssi; int relative_adjust_band; int sched_scan_start_delay; scalar_t__ relative_adjust_rssi; scalar_t__ relative_rssi_set; TYPE_1__* sched_scan_plans; } ;
struct TYPE_5__ {scalar_t__ max_sched_scan_plans; int max_match_sets; scalar_t__ max_sched_scan_plan_iterations; int sched_scan_supported; } ;
struct wpa_driver_nl80211_data {size_t num_filter_ssids; TYPE_3__* filter_ssids; TYPE_2__ capa; int ctx; } ;
struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;
struct nl80211_bss_select_rssi_adjust {scalar_t__ delta; int band; } ;
struct i802_bss {struct wpa_driver_nl80211_data* drv; } ;
typedef int rssi_adjust ;
struct TYPE_6__ {int ssid_len; struct nl80211_bss_select_rssi_adjust* ssid; } ;
struct TYPE_4__ {int interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 int FUNC_0 (struct i802_bss*,struct wpa_driver_scan_params*) ;
 struct nl_msg* FUNC_1 (struct i802_bss*,int ,struct wpa_driver_scan_params*) ;
 scalar_t__ FUNC_2 (struct wpa_driver_nl80211_data*,struct nl_msg*,struct wpa_driver_scan_params*) ;
 int FUNC_3 (struct nl_msg*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct nl_msg*,size_t) ;
 scalar_t__ FUNC_5 (struct nl_msg*,int ,int,struct nl80211_bss_select_rssi_adjust*) ;
 scalar_t__ FUNC_6 (struct nl_msg*,int ,int) ;
 int FUNC_7 (struct nl_msg*) ;
 int FUNC_8 (struct nl80211_bss_select_rssi_adjust*,int ,int) ;
 int FUNC_9 (struct wpa_driver_nl80211_data*,struct nl_msg*,int *,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,char*) ;
 int FUNC_12 (int ,char*,int,...) ;
 int FUNC_13 (struct nl80211_bss_select_rssi_adjust*,int) ;

int FUNC_14(void *VAR_13,
      struct wpa_driver_scan_params *VAR_14)
{
 struct i802_bss *VAR_15 = VAR_13;
 struct wpa_driver_nl80211_data *VAR_16 = VAR_15->drv;
 int VAR_17 = -1;
 struct nl_msg *VAR_18;
 size_t VAR_19;

 FUNC_11(VAR_16->ctx, VAR_0, "nl80211: sched_scan request");






 if (!VAR_14->sched_scan_plans_num ||
     VAR_14->sched_scan_plans_num > VAR_16->capa.max_sched_scan_plans) {
  FUNC_12(VAR_1,
      "nl80211: Invalid number of sched scan plans: %u",
      VAR_14->sched_scan_plans_num);
  return -1;
 }

 VAR_18 = FUNC_1(VAR_15, VAR_11, VAR_14);
 if (!VAR_18)
  goto fail;

 if (VAR_16->capa.max_sched_scan_plan_iterations) {
  if (FUNC_2(VAR_16, VAR_18, VAR_14))
   goto fail;
 } else {
  if (FUNC_6(VAR_18, VAR_4,
    VAR_14->sched_scan_plans[0].interval * 1000))
   goto fail;
 }

 if ((VAR_16->num_filter_ssids &&
     (int) VAR_16->num_filter_ssids <= VAR_16->capa.max_match_sets) ||
     VAR_14->filter_rssi) {
  struct nlattr *VAR_20;
  VAR_20 = FUNC_4(VAR_18, VAR_5);
  if (VAR_20 == ((void*)0))
   goto fail;

  for (VAR_19 = 0; VAR_19 < VAR_16->num_filter_ssids; VAR_19++) {
   struct nlattr *VAR_21;
   FUNC_12(VAR_2,
       "nl80211: Sched scan filter SSID %s",
       FUNC_13(VAR_16->filter_ssids[VAR_19].ssid,
      VAR_16->filter_ssids[VAR_19].ssid_len));

   VAR_21 = FUNC_4(VAR_18, VAR_19 + 1);
   if (VAR_21 == ((void*)0) ||
       FUNC_5(VAR_18, VAR_6,
        VAR_16->filter_ssids[VAR_19].ssid_len,
        VAR_16->filter_ssids[VAR_19].ssid) ||
       (VAR_14->filter_rssi &&
        FUNC_6(VAR_18,
      VAR_12,
      VAR_14->filter_rssi)))
    goto fail;

   FUNC_3(VAR_18, VAR_21);
  }







  if (VAR_14->filter_rssi) {
   struct nlattr *VAR_22;
   VAR_22 = FUNC_4(VAR_18, 0);
   if (VAR_22 == ((void*)0) ||
       FUNC_6(VAR_18, VAR_12,
     VAR_14->filter_rssi))
    goto fail;
   FUNC_12(VAR_2,
       "nl80211: Sched scan RSSI filter %d dBm",
       VAR_14->filter_rssi);
   FUNC_3(VAR_18, VAR_22);
  }

  FUNC_3(VAR_18, VAR_20);
 }

 if (VAR_14->relative_rssi_set) {
  struct nl80211_bss_select_rssi_adjust VAR_23;

  FUNC_8(&VAR_23, 0, sizeof(VAR_23));
  FUNC_12(VAR_0, "nl80211: Relative RSSI: %d",
      VAR_14->relative_rssi);
  if (FUNC_6(VAR_18, VAR_7,
    VAR_14->relative_rssi))
   goto fail;

  if (VAR_14->relative_adjust_rssi) {
   int VAR_24 = 1;

   switch (VAR_14->relative_adjust_band) {
   case 128:
    VAR_23.band = VAR_10;
    break;
   case 129:
    VAR_23.band = VAR_9;
    break;
   default:
    VAR_24 = 0;
    break;
   }
   VAR_23.delta = VAR_14->relative_adjust_rssi;

   if (VAR_24 &&
       FUNC_5(VAR_18, VAR_8,
        sizeof(VAR_23), &VAR_23))
    goto fail;
  }
 }

 if (VAR_14->sched_scan_start_delay &&
     FUNC_6(VAR_18, VAR_3,
   VAR_14->sched_scan_start_delay))
  goto fail;

 VAR_17 = FUNC_9(VAR_16, VAR_18, ((void*)0), ((void*)0));



 VAR_18 = ((void*)0);
 if (VAR_17) {
  FUNC_12(VAR_0, "nl80211: Sched scan start failed: "
      "ret=%d (%s)", VAR_17, FUNC_10(-VAR_17));
  goto fail;
 }

 FUNC_12(VAR_0, "nl80211: Sched scan requested (ret=%d)", VAR_17);

fail:
 FUNC_7(VAR_18);
 return VAR_17;
}
