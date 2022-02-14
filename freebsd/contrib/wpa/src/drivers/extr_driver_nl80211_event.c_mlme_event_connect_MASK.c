
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int const* req_ies; int const* resp_ies; int authorized; int const* key_replay_ctr; int const* ptk_kck; int const* ptk_kek; int const* fils_pmk; int const* fils_pmkid; void* fils_pmk_len; scalar_t__ fils_erp_next_seq_num; scalar_t__ subnet_status; void* ptk_kek_len; void* ptk_kck_len; void* key_replay_ctr_len; int freq; void* resp_ies_len; void* req_ies_len; } ;
struct TYPE_6__ {int const* bssid; int const* resp_ies; char* timeout_reason; scalar_t__ fils_erp_next_seq_num; int timed_out; scalar_t__ status_code; void* resp_ies_len; } ;
union wpa_event_data {TYPE_4__ assoc_info; TYPE_2__ assoc_reject; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int flags; } ;
struct wpa_driver_nl80211_data {int associated; int const* bssid; int const* prev_bssid; int ssid_len; int const* ssid; int ctx; int assoc_freq; TYPE_3__* first_bss; int auth_attempt_bssid; int ignore_next_local_disconnect; scalar_t__ connect_reassoc; TYPE_1__ capa; } ;
struct nlattr {int dummy; } ;
typedef int event ;
typedef enum nl80211_timeout_reason { ____Placeholder_nl80211_timeout_reason } nl80211_timeout_reason ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;
struct TYPE_7__ {int freq; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int* FUNC_0 (int const*,void*,int ) ;
 int FUNC_1 (struct wpa_driver_nl80211_data*) ;
 int FUNC_2 (struct wpa_driver_nl80211_data*,int const*) ;
 int const* FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 void* FUNC_7 (struct nlattr*) ;
 scalar_t__ FUNC_8 (int const*,int ,int const) ;
 int FUNC_9 (int const*,int const*,int const) ;
 int FUNC_10 (union wpa_event_data*,int ,int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int const*,int) ;
 int FUNC_13 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_14(struct wpa_driver_nl80211_data *VAR_9,
          enum nl80211_commands VAR_10, struct nlattr *VAR_11,
          struct nlattr *VAR_12, struct nlattr *VAR_13,
          struct nlattr *VAR_14,
          struct nlattr *VAR_15,
          struct nlattr *VAR_16,
          struct nlattr *VAR_17,
          struct nlattr *VAR_18,
          struct nlattr *VAR_19,
          struct nlattr *VAR_20,
          struct nlattr *VAR_21,
          struct nlattr *VAR_22,
          struct nlattr *VAR_23,
          struct nlattr *VAR_24)
{
 union wpa_event_data VAR_25;
 const u8 *VAR_26 = ((void*)0);
 u16 VAR_27;
 int VAR_28;

 if (VAR_9->capa.flags & VAR_8) {




  FUNC_11(VAR_3, "nl80211: Ignore connect event (cmd=%d) "
      "when using userspace SME", VAR_10);
  return;
 }

 VAR_9->connect_reassoc = 0;

 VAR_27 = VAR_11 ? FUNC_4(VAR_11) : VAR_7;

 if (VAR_10 == VAR_4) {
  FUNC_11(VAR_3,
      "nl80211: Connect event (status=%u ignore_next_local_disconnect=%d)",
      VAR_27, VAR_9->ignore_next_local_disconnect);
 } else if (VAR_10 == VAR_5) {
  FUNC_11(VAR_3, "nl80211: Roam event");
 }

 FUNC_10(&VAR_25, 0, sizeof(VAR_25));
 if (VAR_10 == VAR_4 && VAR_27 != VAR_7) {
  if (VAR_12)
   VAR_25.assoc_reject.bssid = FUNC_3(VAR_12);
  if (VAR_9->ignore_next_local_disconnect) {
   VAR_9->ignore_next_local_disconnect = 0;
   if (!VAR_25.assoc_reject.bssid ||
       (FUNC_8(VAR_25.assoc_reject.bssid,
           VAR_9->auth_attempt_bssid,
           VAR_0) != 0)) {





    FUNC_11(VAR_3,
        "nl80211: Ignore connection failure event triggered during reassociation");
    return;
   }
  }
  if (VAR_14) {
   VAR_25.assoc_reject.resp_ies = FUNC_3(VAR_14);
   VAR_25.assoc_reject.resp_ies_len = FUNC_7(VAR_14);
  }
  VAR_25.assoc_reject.status_code = VAR_27;
  VAR_25.assoc_reject.timed_out = VAR_15 != ((void*)0);
  if (VAR_15 && VAR_16) {
   enum nl80211_timeout_reason VAR_29;

   VAR_29 = FUNC_5(VAR_16);
   switch (VAR_29) {
   case 128:
    VAR_25.assoc_reject.timeout_reason = "scan";
    break;
   case 129:
    VAR_25.assoc_reject.timeout_reason = "auth";
    break;
   case 130:
    VAR_25.assoc_reject.timeout_reason = "assoc";
    break;
   default:
    break;
   }
  }
  if (VAR_22)
   VAR_25.assoc_reject.fils_erp_next_seq_num =
    FUNC_4(VAR_22);
  FUNC_13(VAR_9->ctx, VAR_2, &VAR_25);
  return;
 }

 VAR_9->associated = 1;
 if (VAR_12) {
  FUNC_9(VAR_9->bssid, FUNC_3(VAR_12), VAR_0);
  FUNC_9(VAR_9->prev_bssid, VAR_9->bssid, VAR_0);
 }

 if (VAR_13) {
  VAR_25.assoc_info.req_ies = FUNC_3(VAR_13);
  VAR_25.assoc_info.req_ies_len = FUNC_7(VAR_13);

  if (VAR_10 == VAR_5) {
   VAR_26 = FUNC_0(VAR_25.assoc_info.req_ies,
          VAR_25.assoc_info.req_ies_len,
          VAR_6);
   if (VAR_26 && VAR_26[1] > 0 && VAR_26[1] <= 32) {
    VAR_9->ssid_len = VAR_26[1];
    FUNC_9(VAR_9->ssid, VAR_26 + 2, VAR_26[1]);
    FUNC_11(VAR_3,
        "nl80211: Set drv->ssid based on req_ie to '%s'",
        FUNC_12(VAR_9->ssid,
       VAR_9->ssid_len));
   }
  }
 }
 if (VAR_14) {
  VAR_25.assoc_info.resp_ies = FUNC_3(VAR_14);
  VAR_25.assoc_info.resp_ies_len = FUNC_7(VAR_14);
 }

 VAR_25.assoc_info.freq = FUNC_1(VAR_9);
 VAR_9->first_bss->freq = VAR_9->assoc_freq;

 if ((!VAR_26 || VAR_26[1] == 0 || VAR_26[1] > 32) &&
     (VAR_28 = FUNC_2(VAR_9, VAR_9->ssid)) > 0) {


  VAR_9->ssid_len = VAR_28;
  FUNC_11(VAR_3,
      "nl80211: Set drv->ssid based on scan res info to '%s'",
      FUNC_12(VAR_9->ssid, VAR_9->ssid_len));
 }

 if (VAR_17 && FUNC_6(VAR_17)) {
  VAR_25.assoc_info.authorized = 1;
  FUNC_11(VAR_3, "nl80211: connection authorized");
 }
 if (VAR_18) {
  VAR_25.assoc_info.key_replay_ctr = FUNC_3(VAR_18);
  VAR_25.assoc_info.key_replay_ctr_len = FUNC_7(VAR_18);
 }
 if (VAR_19) {
  VAR_25.assoc_info.ptk_kck = FUNC_3(VAR_19);
  VAR_25.assoc_info.ptk_kck_len = FUNC_7(VAR_19);
 }
 if (VAR_20) {
  VAR_25.assoc_info.ptk_kek = FUNC_3(VAR_20);
  VAR_25.assoc_info.ptk_kek_len = FUNC_7(VAR_20);
 }

 if (VAR_21) {







  VAR_25.assoc_info.subnet_status = FUNC_6(VAR_21);
 }

 if (VAR_22)
  VAR_25.assoc_info.fils_erp_next_seq_num =
   FUNC_4(VAR_22);

 if (VAR_23) {
  VAR_25.assoc_info.fils_pmk = FUNC_3(VAR_23);
  VAR_25.assoc_info.fils_pmk_len = FUNC_7(VAR_23);
 }

 if (VAR_24)
  VAR_25.assoc_info.fils_pmkid = FUNC_3(VAR_24);

 FUNC_13(VAR_9->ctx, VAR_1, &VAR_25);
}
