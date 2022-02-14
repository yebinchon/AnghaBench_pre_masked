
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ht_enabled; int ch_offset; void* freq; void* cf2; void* cf1; int ch_width; } ;
union wpa_event_data {TYPE_1__ ch_switch; } ;
struct wpa_driver_nl80211_data {void* assoc_freq; } ;
struct nlattr {int dummy; } ;
struct i802_bss {int ctx; void* freq; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (void*,void*,void*,void*) ;
 int FUNC_1 (void*) ;
 struct i802_bss* FUNC_2 (struct wpa_driver_nl80211_data*,int) ;
 void* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (union wpa_event_data*,int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_7(struct wpa_driver_nl80211_data *VAR_4,
     struct nlattr *VAR_5, struct nlattr *VAR_6,
     struct nlattr *VAR_7, struct nlattr *VAR_8,
     struct nlattr *VAR_9, struct nlattr *VAR_10,
     int VAR_11)
{
 struct i802_bss *VAR_12;
 union wpa_event_data VAR_13;
 int VAR_14 = 1;
 int VAR_15 = 0;
 int VAR_16;

 FUNC_5(VAR_2, "nl80211: Channel switch%s event",
     VAR_11 ? "" : " started");

 if (!VAR_6)
  return;

 VAR_16 = FUNC_3(VAR_5);
 VAR_12 = FUNC_2(VAR_4, VAR_16);
 if (VAR_12 == ((void*)0)) {
  FUNC_5(VAR_3, "nl80211: Unknown ifindex (%d) for channel switch, ignoring",
      VAR_16);
  return;
 }

 if (VAR_7) {
  enum nl80211_channel_type VAR_17 = FUNC_3(VAR_7);

  FUNC_5(VAR_2, "nl80211: Channel type: %d", VAR_17);
  switch (VAR_17) {
  case 128:
   VAR_14 = 0;
   break;
  case 131:
   break;
  case 129:
   VAR_15 = 1;
   break;
  case 130:
   VAR_15 = -1;
   break;
  }
 } else if (VAR_8 && VAR_9) {

  VAR_15 = FUNC_0(FUNC_3(VAR_8),
          FUNC_3(VAR_6),
          FUNC_3(VAR_9),
          VAR_10 ? FUNC_3(VAR_10) : 0);
 } else {
  FUNC_5(VAR_3, "nl80211: Unknown secondary channel information - following channel definition calculations may fail");
 }

 FUNC_4(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.ch_switch.freq = FUNC_3(VAR_6);
 VAR_13.ch_switch.ht_enabled = VAR_14;
 VAR_13.ch_switch.ch_offset = VAR_15;
 if (VAR_8)
  VAR_13.ch_switch.ch_width = FUNC_1(FUNC_3(VAR_8));
 if (VAR_9)
  VAR_13.ch_switch.cf1 = FUNC_3(VAR_9);
 if (VAR_10)
  VAR_13.ch_switch.cf2 = FUNC_3(VAR_10);

 if (VAR_11)
  VAR_12->freq = VAR_13.ch_switch.freq;
 VAR_4->assoc_freq = VAR_13.ch_switch.freq;

 FUNC_6(VAR_12->ctx, VAR_11 ?
        VAR_0 : VAR_1, &VAR_13);
}
