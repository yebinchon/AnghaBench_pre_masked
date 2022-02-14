
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {size_t resp_frame_len; size_t resp_ies_len; int wmm_params; int freq; int req_ies_len; int req_ies; int * resp_ies; int const* resp_frame; } ;
struct TYPE_8__ {size_t resp_ies_len; scalar_t__ status_code; int * resp_ies; int bssid; } ;
union wpa_event_data {TYPE_6__ assoc_info; TYPE_2__ assoc_reject; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_7__ {int flags; } ;
struct wpa_driver_nl80211_data {int associated; int ssid_len; int ctx; int assoc_freq; TYPE_5__* first_bss; int ssid; int prev_bssid; int bssid; scalar_t__ force_connect_cmd; TYPE_1__ capa; } ;
struct nlattr {int dummy; } ;
struct TYPE_9__ {scalar_t__ variable; int status_code; } ;
struct TYPE_10__ {TYPE_3__ assoc_resp; } ;
struct ieee80211_mgmt {TYPE_4__ u; int sa; int bssid; } ;
typedef int event ;
struct TYPE_11__ {int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wpa_driver_nl80211_data*,int ) ;
 int FUNC_2 (struct nlattr*,int *) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (union wpa_event_data*,int ,int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_10(struct wpa_driver_nl80211_data *VAR_6,
        const u8 *VAR_7, size_t VAR_8, struct nlattr *VAR_9,
        struct nlattr *VAR_10)
{
 const struct ieee80211_mgmt *VAR_11;
 union wpa_event_data VAR_12;
 u16 VAR_13;
 int VAR_14;

 if (!(VAR_6->capa.flags & VAR_5) &&
     VAR_6->force_connect_cmd) {




  FUNC_7(VAR_3,
      "nl80211: Ignore assoc event when using driver SME");
  return;
 }

 FUNC_7(VAR_3, "nl80211: Associate event");
 VAR_11 = (const struct ieee80211_mgmt *) VAR_7;
 if (VAR_8 < 24 + sizeof(VAR_11->u.assoc_resp)) {
  FUNC_7(VAR_3, "nl80211: Too short association event "
      "frame");
  return;
 }

 VAR_13 = FUNC_0(VAR_11->u.assoc_resp.status_code);
 if (VAR_13 != VAR_4) {
  FUNC_6(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.assoc_reject.bssid = VAR_11->bssid;
  if (VAR_8 > 24 + sizeof(VAR_11->u.assoc_resp)) {
   VAR_12.assoc_reject.resp_ies =
    (u8 *) VAR_11->u.assoc_resp.variable;
   VAR_12.assoc_reject.resp_ies_len =
    VAR_8 - 24 - sizeof(VAR_11->u.assoc_resp);
  }
  VAR_12.assoc_reject.status_code = VAR_13;

  FUNC_9(VAR_6->ctx, VAR_2, &VAR_12);
  return;
 }

 VAR_6->associated = 1;
 FUNC_5(VAR_6->bssid, VAR_11->sa, VAR_0);
 FUNC_5(VAR_6->prev_bssid, VAR_11->sa, VAR_0);

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.assoc_info.resp_frame = VAR_7;
 VAR_12.assoc_info.resp_frame_len = VAR_8;
 if (VAR_8 > 24 + sizeof(VAR_11->u.assoc_resp)) {
  VAR_12.assoc_info.resp_ies = (u8 *) VAR_11->u.assoc_resp.variable;
  VAR_12.assoc_info.resp_ies_len =
   VAR_8 - 24 - sizeof(VAR_11->u.assoc_resp);
 }

 if (VAR_10) {
  VAR_12.assoc_info.req_ies = FUNC_3(VAR_10);
  VAR_12.assoc_info.req_ies_len = FUNC_4(VAR_10);
 }



 VAR_14 = FUNC_1(VAR_6, VAR_6->ssid);
 if (VAR_14 > 0) {
  VAR_6->ssid_len = VAR_14;
  FUNC_7(VAR_3,
      "nl80211: Set drv->ssid based on scan res info to '%s'",
      FUNC_8(VAR_6->ssid, VAR_6->ssid_len));
 }

 VAR_12.assoc_info.freq = VAR_6->assoc_freq;
 VAR_6->first_bss->freq = VAR_6->assoc_freq;

 FUNC_2(VAR_9, &VAR_12.assoc_info.wmm_params);

 FUNC_9(VAR_6->ctx, VAR_1, &VAR_12);
}
