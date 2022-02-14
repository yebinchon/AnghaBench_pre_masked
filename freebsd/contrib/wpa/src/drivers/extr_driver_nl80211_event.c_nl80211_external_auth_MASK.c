
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ssid_len; void* key_mgmt_suite; int action; void* bssid; void* ssid; } ;
union wpa_event_data {TYPE_1__ external_auth; } ;
struct wpa_driver_nl80211_data {int ctx; } ;
struct nlattr {int dummy; } ;
typedef int event ;
typedef enum nl80211_external_auth_action { ____Placeholder_nl80211_external_auth_action } nl80211_external_auth_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;


 scalar_t__ VAR_8 ;
 void* FUNC_0 (struct nlattr*) ;
 void* FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct nlattr*) ;
 int FUNC_3 (union wpa_event_data*,int ,int) ;
 int FUNC_4 (int ,char*,int ,void*) ;
 int FUNC_5 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_6(struct wpa_driver_nl80211_data *VAR_9,
      struct nlattr **VAR_10)
{
 union wpa_event_data VAR_11;
 enum nl80211_external_auth_action VAR_12;

 if (!VAR_10[VAR_4] ||
     !VAR_10[VAR_6] ||
     !VAR_10[VAR_5] ||
     !VAR_10[VAR_7])
  return;

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 VAR_12 = FUNC_1(VAR_10[VAR_6]);
 switch (VAR_12) {
 case 128:
  VAR_11.external_auth.action = VAR_2;
  break;
 case 129:
  VAR_11.external_auth.action = VAR_1;
  break;
 default:
  return;
 }

 VAR_11.external_auth.key_mgmt_suite =
  FUNC_1(VAR_10[VAR_4]);

 VAR_11.external_auth.ssid_len = FUNC_2(VAR_10[VAR_7]);
 if (VAR_11.external_auth.ssid_len > VAR_8)
  return;
 VAR_11.external_auth.ssid = FUNC_0(VAR_10[VAR_7]);

 VAR_11.external_auth.bssid = FUNC_0(VAR_10[VAR_5]);

 FUNC_4(VAR_3,
     "nl80211: External auth action: %u, AKM: 0x%x",
     VAR_11.external_auth.action,
     VAR_11.external_auth.key_mgmt_suite);
 FUNC_5(VAR_9->ctx, VAR_0, &VAR_11);
}
