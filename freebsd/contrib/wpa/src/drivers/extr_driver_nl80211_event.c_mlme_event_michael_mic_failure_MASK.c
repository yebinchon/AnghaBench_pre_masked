
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unicast; int src; } ;
union wpa_event_data {TYPE_1__ michael_mic_failure; } ;
typedef int u8 ;
struct nlattr {int dummy; } ;
struct i802_bss {int ctx; } ;
typedef enum nl80211_key_type { ____Placeholder_nl80211_key_type } nl80211_key_type ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (union wpa_event_data*,int ,int) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_8(struct i802_bss *VAR_7,
        struct nlattr *VAR_8[])
{
 union wpa_event_data VAR_9;

 FUNC_6(VAR_1, "nl80211: MLME event Michael MIC failure");
 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_8[VAR_5]) {
  FUNC_5(VAR_1, "nl80211: Source MAC address",
       FUNC_0(VAR_8[VAR_5]),
       FUNC_3(VAR_8[VAR_5]));
  VAR_9.michael_mic_failure.src = FUNC_0(VAR_8[VAR_5]);
 }
 if (VAR_8[VAR_3]) {
  FUNC_5(VAR_1, "nl80211: TSC",
       FUNC_0(VAR_8[VAR_3]),
       FUNC_3(VAR_8[VAR_3]));
 }
 if (VAR_8[VAR_4]) {
  enum nl80211_key_type VAR_10 =
   FUNC_1(VAR_8[VAR_4]);
  FUNC_6(VAR_1, "nl80211: Key Type %d", VAR_10);
  if (VAR_10 == VAR_6)
   VAR_9.michael_mic_failure.unicast = 1;
 } else
  VAR_9.michael_mic_failure.unicast = 1;

 if (VAR_8[VAR_2]) {
  u8 VAR_11 = FUNC_2(VAR_8[VAR_2]);
  FUNC_6(VAR_1, "nl80211: Key Id %d", VAR_11);
 }

 FUNC_7(VAR_7->ctx, VAR_0, &VAR_9);
}
