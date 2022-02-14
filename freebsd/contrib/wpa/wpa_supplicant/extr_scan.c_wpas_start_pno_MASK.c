
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wpa_supplicant {unsigned int max_sched_scan_ssids; int pno; int pno_sched_pending; scalar_t__ wpa_state; size_t max_match_sets; int sched_scan_plans_num; int mac_addr_rand_enable; scalar_t__ mac_addr_pno; int * manual_sched_scan_freqs; TYPE_2__* conf; struct sched_scan_plan* sched_scan_plans; scalar_t__ sched_scan_stop_req; scalar_t__ sched_scanning; int sched_scan_supported; } ;
struct wpa_ssid {struct wpa_ssid* pnext; int ssid_len; int ssid; scalar_t__ scan_ssid; struct wpa_ssid* next; } ;
struct wpa_driver_scan_params {size_t num_ssids; int sched_scan_plans_num; int mac_addr_rand; TYPE_3__* filter_ssids; scalar_t__ mac_addr_mask; scalar_t__ mac_addr; int * freqs; int sched_scan_start_delay; struct sched_scan_plan* sched_scan_plans; scalar_t__ filter_rssi; int num_filter_ssids; TYPE_1__* ssids; } ;
struct wpa_driver_scan_filter {int dummy; } ;
struct sched_scan_plan {int interval; scalar_t__ iterations; } ;
typedef int params ;
struct TYPE_7__ {int ssid_len; int ssid; } ;
struct TYPE_6__ {int num_prio; int sched_scan_interval; int sched_scan_start_delay; scalar_t__ filter_rssi; struct wpa_ssid** pssid; struct wpa_ssid* ssid; } ;
struct TYPE_5__ {int ssid_len; int ssid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct wpa_driver_scan_params*,int ,int) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_5 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 int FUNC_8 (struct wpa_supplicant*) ;
 int FUNC_9 (struct wpa_supplicant*) ;
 int FUNC_10 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 int FUNC_11 (struct wpa_supplicant*,struct wpa_ssid*) ;

int FUNC_12(struct wpa_supplicant *VAR_8)
{
 int VAR_9, VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 struct wpa_ssid *VAR_14;
 struct wpa_driver_scan_params VAR_15;
 struct sched_scan_plan VAR_16;
 unsigned int VAR_17;

 if (!VAR_8->sched_scan_supported)
  return -1;

 if (VAR_8->max_sched_scan_ssids > VAR_5)
  VAR_17 = VAR_5;
 else
  VAR_17 = VAR_8->max_sched_scan_ssids;
 if (VAR_17 < 1)
  return -1;

 if (VAR_8->pno || VAR_8->pno_sched_pending)
  return 0;

 if ((VAR_8->wpa_state > VAR_7) &&
     (VAR_8->wpa_state < VAR_6)) {
  FUNC_6(VAR_4, "PNO: In assoc process");
  return -VAR_0;
 }

 if (VAR_8->wpa_state == VAR_7) {
  FUNC_8(VAR_8);
  if (VAR_8->sched_scanning) {
   FUNC_6(VAR_3, "Schedule PNO on completion of "
       "ongoing sched scan");
   FUNC_9(VAR_8);
   VAR_8->pno_sched_pending = 1;
   return 0;
  }
 }

 if (VAR_8->sched_scan_stop_req) {
  FUNC_6(VAR_3,
      "Schedule PNO after previous sched scan has stopped");
  VAR_8->pno_sched_pending = 1;
  return 0;
 }

 FUNC_3(&VAR_15, 0, sizeof(VAR_15));

 VAR_12 = VAR_13 = 0;
 VAR_14 = VAR_8->conf->ssid;
 while (VAR_14) {
  if (!FUNC_11(VAR_8, VAR_14)) {
   VAR_13++;
   if (VAR_14->scan_ssid)
    VAR_12++;
  }
  VAR_14 = VAR_14->next;
 }

 if (VAR_13 == 0) {
  FUNC_6(VAR_3, "PNO: No configured SSIDs");
  return -1;
 }

 if (VAR_13 > VAR_12) {
  VAR_15.num_ssids++;
  VAR_12++;
 }

 if (VAR_12 > VAR_17) {
  FUNC_6(VAR_3, "PNO: Use only the first %u SSIDs from "
      "%u", VAR_17, (unsigned int) VAR_12);
  VAR_12 = VAR_17;
 }

 if (VAR_13 > VAR_8->max_match_sets) {
  VAR_13 = VAR_8->max_match_sets;
  FUNC_4(VAR_8, VAR_3, "PNO: Too many SSIDs to match");
 }
 VAR_15.filter_ssids = FUNC_0(VAR_13,
     sizeof(struct wpa_driver_scan_filter));
 if (VAR_15.filter_ssids == ((void*)0))
  return -1;

 VAR_11 = 0;
 VAR_10 = 0;
 VAR_14 = VAR_8->conf->pssid[VAR_10];
 while (VAR_14) {
  if (!FUNC_11(VAR_8, VAR_14)) {
   if (VAR_14->scan_ssid && VAR_15.num_ssids < VAR_12) {
    VAR_15.ssids[VAR_15.num_ssids].ssid =
     VAR_14->ssid;
    VAR_15.ssids[VAR_15.num_ssids].ssid_len =
      VAR_14->ssid_len;
    VAR_15.num_ssids++;
   }
   FUNC_2(VAR_15.filter_ssids[VAR_11].ssid, VAR_14->ssid,
      VAR_14->ssid_len);
   VAR_15.filter_ssids[VAR_11].ssid_len = VAR_14->ssid_len;
   VAR_15.num_filter_ssids++;
   VAR_11++;
   if (VAR_11 == VAR_13)
    break;
  }
  if (VAR_14->pnext)
   VAR_14 = VAR_14->pnext;
  else if (VAR_10 + 1 == VAR_8->conf->num_prio)
   break;
  else
   VAR_14 = VAR_8->conf->pssid[++VAR_10];
 }

 if (VAR_8->conf->filter_rssi)
  VAR_15.filter_rssi = VAR_8->conf->filter_rssi;

 if (VAR_8->sched_scan_plans_num) {
  VAR_15.sched_scan_plans = VAR_8->sched_scan_plans;
  VAR_15.sched_scan_plans_num = VAR_8->sched_scan_plans_num;
 } else {

  if (VAR_8->conf->sched_scan_interval)
   VAR_16.interval = VAR_8->conf->sched_scan_interval;
  else
   VAR_16.interval = 10;

  VAR_16.iterations = 0;
  VAR_15.sched_scan_plans = &VAR_16;
  VAR_15.sched_scan_plans_num = 1;
 }

 VAR_15.sched_scan_start_delay = VAR_8->conf->sched_scan_start_delay;

 if (VAR_15.freqs == ((void*)0) && VAR_8->manual_sched_scan_freqs) {
  FUNC_4(VAR_8, VAR_3, "Limit sched scan to specified channels");
  VAR_15.freqs = VAR_8->manual_sched_scan_freqs;
 }

 if ((VAR_8->mac_addr_rand_enable & VAR_2) &&
     VAR_8->wpa_state <= VAR_7) {
  VAR_15.mac_addr_rand = 1;
  if (VAR_8->mac_addr_pno) {
   VAR_15.mac_addr = VAR_8->mac_addr_pno;
   VAR_15.mac_addr_mask = VAR_8->mac_addr_pno + VAR_1;
  }
 }

 FUNC_7(VAR_8, &VAR_15);

 VAR_9 = FUNC_10(VAR_8, &VAR_15);
 FUNC_1(VAR_15.filter_ssids);
 if (VAR_9 == 0)
  VAR_8->pno = 1;
 else
  FUNC_5(VAR_8, VAR_4, "Failed to schedule PNO");
 return VAR_9;
}
