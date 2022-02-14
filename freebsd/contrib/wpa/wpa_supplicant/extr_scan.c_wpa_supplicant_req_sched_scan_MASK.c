
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct wpa_supplicant {unsigned int max_sched_scan_ssids; int normal_scans; int max_scan_ssids; size_t max_match_sets; int wpa_state; unsigned int sched_scan_timeout; int first_sched_scan; int enable_oce; int sched_scan_plans_num; int max_sched_scan_plan_interval; int mac_addr_rand_enable; struct wpa_ssid* prev_sched_ssid; scalar_t__ sched_scan_timed_out; scalar_t__ mac_addr_sched_scan; TYPE_2__* conf; struct sched_scan_plan* sched_scan_plans; struct wpa_driver_scan_params* autoscan_params; scalar_t__ sched_scanning; scalar_t__ sched_scan_stop_req; int sched_scan_supported; } ;
struct wpa_ssid {scalar_t__ key_mgmt; struct wpa_ssid* next; scalar_t__ scan_ssid; scalar_t__ ssid_len; scalar_t__ ssid; } ;
struct wpa_driver_scan_params {unsigned int num_ssids; size_t num_filter_ssids; int oce_scan; int sched_scan_plans_num; int sched_scan_start_delay; int mac_addr_rand; struct sched_scan_plan* sched_scan_plans; TYPE_3__* filter_ssids; scalar_t__ mac_addr_mask; scalar_t__ mac_addr; int freqs; scalar_t__ filter_rssi; int extra_ies_len; int extra_ies; TYPE_1__* ssids; } ;
struct wpa_driver_scan_filter {int dummy; } ;
struct sched_scan_plan {int interval; scalar_t__ iterations; } ;
typedef int params ;
typedef enum wpa_states { ____Placeholder_wpa_states } wpa_states ;
struct TYPE_7__ {scalar_t__ ssid_len; int ssid; } ;
struct TYPE_6__ {int sched_scan_interval; int sched_scan_start_delay; int freq_list; scalar_t__ filter_rssi; struct wpa_ssid* ssid; scalar_t__ disable_scan_offload; } ;
struct TYPE_5__ {scalar_t__ ssid_len; scalar_t__ ssid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (unsigned int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int *,int ) ;
 TYPE_3__* FUNC_2 (size_t,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct wpa_driver_scan_params*,int ,int) ;
 int FUNC_6 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_7 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_8 (int ,char*,int,int) ;
 int FUNC_9 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 int FUNC_10 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 struct wpabuf* FUNC_12 (struct wpa_supplicant*) ;
 int VAR_10 ;
 int FUNC_13 (struct wpa_supplicant*,int) ;
 int FUNC_14 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 int FUNC_15 (struct wpabuf*) ;
 int FUNC_16 (struct wpabuf*) ;
 int FUNC_17 (struct wpabuf*) ;
 scalar_t__ FUNC_18 (struct wpa_supplicant*,struct wpa_ssid*) ;

int FUNC_19(struct wpa_supplicant *VAR_11)
{
 struct wpa_driver_scan_params VAR_12;
 struct wpa_driver_scan_params *VAR_13;
 enum wpa_states VAR_14;
 struct wpa_ssid *VAR_15 = ((void*)0);
 struct wpabuf *VAR_16 = ((void*)0);
 int VAR_17;
 unsigned int VAR_18;
 int VAR_19 = 0;
 int VAR_20;
 struct sched_scan_plan VAR_21;

 if (!VAR_11->sched_scan_supported)
  return -1;

 if (VAR_11->max_sched_scan_ssids > VAR_5)
  VAR_18 = VAR_5;
 else
  VAR_18 = VAR_11->max_sched_scan_ssids;
 if (VAR_18 < 1 || VAR_11->conf->disable_scan_offload)
  return -1;

 VAR_11->sched_scan_stop_req = 0;

 if (VAR_11->sched_scanning) {
  FUNC_6(VAR_11, VAR_2, "Already sched scanning");
  return 0;
 }

 VAR_20 = 0;
 for (VAR_15 = VAR_11->conf->ssid; VAR_15; VAR_15 = VAR_15->next) {
  if (!FUNC_18(VAR_11, VAR_15) && !VAR_15->scan_ssid) {

   VAR_19 = 1;
  } else if (!FUNC_18(VAR_11, VAR_15) &&
      VAR_15->ssid_len)
   VAR_20++;
 }
 if (VAR_19)
  VAR_20++;

 if (VAR_11->normal_scans < 3 &&
     (VAR_20 <= VAR_11->max_scan_ssids ||
      VAR_11->max_scan_ssids >= (int) VAR_18)) {







  FUNC_6(VAR_11, VAR_2, "Use normal scan instead of "
   "sched_scan for initial scans (normal_scans=%d)",
   VAR_11->normal_scans);
  return -1;
 }

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));


 VAR_12.filter_ssids = FUNC_2(VAR_11->max_match_sets,
     sizeof(struct wpa_driver_scan_filter));

 VAR_14 = VAR_11->wpa_state;
 if (VAR_11->wpa_state == VAR_6 ||
     VAR_11->wpa_state == VAR_7)
  FUNC_13(VAR_11, VAR_9);

 if (VAR_11->autoscan_params != ((void*)0)) {
  VAR_13 = VAR_11->autoscan_params;
  goto scan;
 }


 VAR_15 = VAR_11->conf->ssid;
 if (VAR_11->prev_sched_ssid) {
  while (VAR_15) {
   if (VAR_15 == VAR_11->prev_sched_ssid) {
    VAR_15 = VAR_15->next;
    break;
   }
   VAR_15 = VAR_15->next;
  }
 }

 if (!VAR_15 || !VAR_11->prev_sched_ssid) {
  FUNC_6(VAR_11, VAR_2, "Beginning of SSID list");
  VAR_11->sched_scan_timeout = VAR_18 * 2;
  VAR_11->first_sched_scan = 1;
  VAR_15 = VAR_11->conf->ssid;
  VAR_11->prev_sched_ssid = VAR_15;
 }

 if (VAR_19) {
  FUNC_6(VAR_11, VAR_2, "Add wildcard SSID to sched_scan");
  VAR_12.num_ssids++;
 }

 while (VAR_15) {
  if (FUNC_18(VAR_11, VAR_15))
   goto next;

  if (VAR_12.num_filter_ssids < VAR_11->max_match_sets &&
      VAR_12.filter_ssids && VAR_15->ssid && VAR_15->ssid_len) {
   FUNC_6(VAR_11, VAR_2, "add to filter ssid: %s",
    FUNC_11(VAR_15->ssid, VAR_15->ssid_len));
   FUNC_4(VAR_12.filter_ssids[VAR_12.num_filter_ssids].ssid,
      VAR_15->ssid, VAR_15->ssid_len);
   VAR_12.filter_ssids[VAR_12.num_filter_ssids].ssid_len =
    VAR_15->ssid_len;
   VAR_12.num_filter_ssids++;
  } else if (VAR_12.filter_ssids && VAR_15->ssid && VAR_15->ssid_len)
  {
   FUNC_6(VAR_11, VAR_2, "Not enough room for SSID "
    "filter for sched_scan - drop filter");
   FUNC_3(VAR_12.filter_ssids);
   VAR_12.filter_ssids = ((void*)0);
   VAR_12.num_filter_ssids = 0;
  }

  if (VAR_15->scan_ssid && VAR_15->ssid && VAR_15->ssid_len) {
   if (VAR_12.num_ssids == VAR_18)
    break;
   FUNC_6(VAR_11, VAR_2,
    "add to active scan ssid: %s",
    FUNC_11(VAR_15->ssid, VAR_15->ssid_len));
   VAR_12.ssids[VAR_12.num_ssids].ssid =
    VAR_15->ssid;
   VAR_12.ssids[VAR_12.num_ssids].ssid_len =
    VAR_15->ssid_len;
   VAR_12.num_ssids++;
   if (VAR_12.num_ssids >= VAR_18) {
    VAR_11->prev_sched_ssid = VAR_15;
    do {
     VAR_15 = VAR_15->next;
    } while (VAR_15 &&
      (FUNC_18(VAR_11, VAR_15) ||
       !VAR_15->scan_ssid));
    break;
   }
  }

 next:
  VAR_11->prev_sched_ssid = VAR_15;
  VAR_15 = VAR_15->next;
 }

 if (VAR_12.num_filter_ssids == 0) {
  FUNC_3(VAR_12.filter_ssids);
  VAR_12.filter_ssids = ((void*)0);
 }

 VAR_16 = FUNC_12(VAR_11);
 if (VAR_16) {
  VAR_12.extra_ies = FUNC_16(VAR_16);
  VAR_12.extra_ies_len = FUNC_17(VAR_16);
 }

 if (VAR_11->conf->filter_rssi)
  VAR_12.filter_rssi = VAR_11->conf->filter_rssi;


 if (VAR_11->conf->freq_list && !VAR_12.freqs) {
  FUNC_6(VAR_11, VAR_2,
   "Optimize scan based on conf->freq_list");
  FUNC_1(&VAR_12.freqs, VAR_11->conf->freq_list);
 }






 VAR_13 = &VAR_12;

scan:
 VAR_11->sched_scan_timed_out = 0;






 if (VAR_11->sched_scan_plans_num == 1 ||
     (VAR_11->sched_scan_plans_num && !VAR_15 && VAR_11->first_sched_scan)) {
  VAR_12.sched_scan_plans = VAR_11->sched_scan_plans;
  VAR_12.sched_scan_plans_num = VAR_11->sched_scan_plans_num;
 } else if (VAR_11->sched_scan_plans_num > 1) {
  FUNC_6(VAR_11, VAR_2,
   "Too many SSIDs. Default to using single scheduled_scan plan");
  VAR_12.sched_scan_plans =
   &VAR_11->sched_scan_plans[VAR_11->sched_scan_plans_num -
       1];
  VAR_12.sched_scan_plans_num = 1;
 } else {
  if (VAR_11->conf->sched_scan_interval)
   VAR_21.interval = VAR_11->conf->sched_scan_interval;
  else
   VAR_21.interval = 10;

  if (VAR_21.interval > VAR_11->max_sched_scan_plan_interval) {
   FUNC_8(VAR_3,
       "Scan interval too long(%u), use the maximum allowed(%u)",
       VAR_21.interval,
       VAR_11->max_sched_scan_plan_interval);
   VAR_21.interval =
    VAR_11->max_sched_scan_plan_interval;
  }

  VAR_21.iterations = 0;
  VAR_12.sched_scan_plans = &VAR_21;
  VAR_12.sched_scan_plans_num = 1;
 }

 VAR_12.sched_scan_start_delay = VAR_11->conf->sched_scan_start_delay;

 if (VAR_15 || !VAR_11->first_sched_scan) {
  FUNC_6(VAR_11, VAR_2,
   "Starting sched scan after %u seconds: interval %u timeout %d",
   VAR_12.sched_scan_start_delay,
   VAR_12.sched_scan_plans[0].interval,
   VAR_11->sched_scan_timeout);
 } else {
  FUNC_6(VAR_11, VAR_2,
   "Starting sched scan after %u seconds (no timeout)",
   VAR_12.sched_scan_start_delay);
 }

 FUNC_10(VAR_11, VAR_13);

 if ((VAR_11->mac_addr_rand_enable & VAR_1) &&
     VAR_11->wpa_state <= VAR_9) {
  VAR_12.mac_addr_rand = 1;
  if (VAR_11->mac_addr_sched_scan) {
   VAR_12.mac_addr = VAR_11->mac_addr_sched_scan;
   VAR_12.mac_addr_mask = VAR_11->mac_addr_sched_scan +
    VAR_0;
  }
 }

 FUNC_9(VAR_11, VAR_13);

 VAR_17 = FUNC_14(VAR_11, VAR_13);
 FUNC_15(VAR_16);
 FUNC_3(VAR_12.filter_ssids);
 if (VAR_17) {
  FUNC_7(VAR_11, VAR_3, "Failed to initiate sched scan");
  if (VAR_14 != VAR_11->wpa_state)
   FUNC_13(VAR_11, VAR_14);
  return VAR_17;
 }


 if (VAR_15 || !VAR_11->first_sched_scan) {
  VAR_11->sched_scan_timed_out = 0;
  FUNC_0(VAR_11->sched_scan_timeout, 0,
           VAR_10,
           VAR_11, ((void*)0));
  VAR_11->first_sched_scan = 0;
  VAR_11->sched_scan_timeout /= 2;
  VAR_12.sched_scan_plans[0].interval *= 2;
  if ((unsigned int) VAR_11->sched_scan_timeout <
      VAR_12.sched_scan_plans[0].interval ||
      VAR_12.sched_scan_plans[0].interval >
      VAR_11->max_sched_scan_plan_interval) {
   VAR_12.sched_scan_plans[0].interval = 10;
   VAR_11->sched_scan_timeout = VAR_18 * 2;
  }
 }


 if (!VAR_15)
  VAR_11->prev_sched_ssid = ((void*)0);

 return 0;
}
