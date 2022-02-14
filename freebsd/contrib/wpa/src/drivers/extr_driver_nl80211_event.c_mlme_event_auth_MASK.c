
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t ies_len; int ies; void* status_code; void* auth_transaction; void* auth_type; int peer; } ;
union wpa_event_data {TYPE_4__ auth; } ;
typedef int u8 ;
struct TYPE_5__ {int flags; } ;
struct wpa_driver_nl80211_data {int ctx; union wpa_event_data* auth_attempt_bssid; int auth_bssid; scalar_t__ force_connect_cmd; TYPE_1__ capa; } ;
struct TYPE_6__ {int variable; int status_code; int auth_transaction; int auth_alg; } ;
struct TYPE_7__ {TYPE_2__ auth; } ;
struct ieee80211_mgmt {TYPE_3__ u; int sa; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (union wpa_event_data*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_5(struct wpa_driver_nl80211_data *VAR_4,
       const u8 *VAR_5, size_t VAR_6)
{
 const struct ieee80211_mgmt *VAR_7;
 union wpa_event_data VAR_8;

 if (!(VAR_4->capa.flags & VAR_3) &&
     VAR_4->force_connect_cmd) {




  FUNC_3(VAR_2,
      "nl80211: Ignore auth event when using driver SME");
  return;
 }

 FUNC_3(VAR_2, "nl80211: Authenticate event");
 VAR_7 = (const struct ieee80211_mgmt *) VAR_5;
 if (VAR_6 < 24 + sizeof(VAR_7->u.auth)) {
  FUNC_3(VAR_2, "nl80211: Too short association event "
      "frame");
  return;
 }

 FUNC_1(VAR_4->auth_bssid, VAR_7->sa, VAR_0);
 FUNC_2(VAR_4->auth_attempt_bssid, 0, VAR_0);
 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 FUNC_1(VAR_8.auth.peer, VAR_7->sa, VAR_0);
 VAR_8.auth.auth_type = FUNC_0(VAR_7->u.auth.auth_alg);
 VAR_8.auth.auth_transaction =
  FUNC_0(VAR_7->u.auth.auth_transaction);
 VAR_8.auth.status_code = FUNC_0(VAR_7->u.auth.status_code);
 if (VAR_6 > 24 + sizeof(VAR_7->u.auth)) {
  VAR_8.auth.ies = VAR_7->u.auth.variable;
  VAR_8.auth.ies_len = VAR_6 - 24 - sizeof(VAR_7->u.auth);
 }

 FUNC_4(VAR_4->ctx, VAR_1, &VAR_8);
}
