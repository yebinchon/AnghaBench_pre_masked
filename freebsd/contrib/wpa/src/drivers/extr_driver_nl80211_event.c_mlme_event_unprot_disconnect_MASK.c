
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* reason_code; int da; int sa; } ;
struct TYPE_7__ {void* reason_code; int da; int sa; } ;
union wpa_event_data {TYPE_4__ unprot_deauth; TYPE_3__ unprot_disassoc; } ;
typedef int u8 ;
typedef void* u16 ;
struct wpa_driver_nl80211_data {int ctx; } ;
struct TYPE_5__ {int reason_code; } ;
struct TYPE_6__ {TYPE_1__ deauth; } ;
struct ieee80211_mgmt {int da; int sa; TYPE_2__ u; } ;
typedef int event ;
typedef enum wpa_event_type { ____Placeholder_wpa_event_type } wpa_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (union wpa_event_data*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_4(struct wpa_driver_nl80211_data *VAR_3,
      enum wpa_event_type VAR_4,
      const u8 *VAR_5, size_t VAR_6)
{
 const struct ieee80211_mgmt *VAR_7;
 union wpa_event_data VAR_8;
 u16 VAR_9 = 0;

 if (VAR_4 == VAR_0)
  FUNC_2(VAR_2, "nl80211: Unprot Deauthenticate event");
 else
  FUNC_2(VAR_2, "nl80211: Unprot Disassociate event");

 if (VAR_6 < 24)
  return;

 VAR_7 = (const struct ieee80211_mgmt *) VAR_5;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));

 if (VAR_6 >= 24 + sizeof(VAR_7->u.deauth))
  VAR_9 = FUNC_0(VAR_7->u.deauth.reason_code);

 if (VAR_4 == VAR_1) {
  VAR_8.unprot_disassoc.sa = VAR_7->sa;
  VAR_8.unprot_disassoc.da = VAR_7->da;
  VAR_8.unprot_disassoc.reason_code = VAR_9;
 } else {
  VAR_8.unprot_deauth.sa = VAR_7->sa;
  VAR_8.unprot_deauth.da = VAR_7->da;
  VAR_8.unprot_deauth.reason_code = VAR_9;
 }

 FUNC_3(VAR_3->ctx, VAR_4, &VAR_8);
}
