
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alpha2; int type; int initiator; } ;
union wpa_event_data {TYPE_1__ channel_list_changed; } ;
struct wpa_driver_nl80211_data {int ctx; } ;
struct nlattr {int dummy; } ;
typedef enum nl80211_reg_type { ____Placeholder_nl80211_reg_type } nl80211_reg_type ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (union wpa_event_data*,int ,int) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_6(struct wpa_driver_nl80211_data *VAR_13,
         struct nlattr *VAR_14[])
{
 union wpa_event_data VAR_15;
 enum nl80211_reg_initiator VAR_16;

 FUNC_4(VAR_1, "nl80211: Regulatory domain change");

 if (VAR_14[VAR_3] == ((void*)0))
  return;

 FUNC_2(&VAR_15, 0, sizeof(VAR_15));
 VAR_16 = FUNC_1(VAR_14[VAR_3]);
 FUNC_4(VAR_1, " * initiator=%d", VAR_16);
 switch (VAR_16) {
 case 135:
  VAR_15.channel_list_changed.initiator = VAR_5;
  break;
 case 132:
  VAR_15.channel_list_changed.initiator = VAR_8;
  break;
 case 133:
  VAR_15.channel_list_changed.initiator = VAR_7;
  break;
 case 134:
  VAR_15.channel_list_changed.initiator = VAR_6;
  break;
 }

 if (VAR_14[VAR_4]) {
  enum nl80211_reg_type VAR_17;
  VAR_17 = FUNC_1(VAR_14[VAR_4]);
  FUNC_4(VAR_1, " * type=%d", VAR_17);
  switch (VAR_17) {
  case 131:
   VAR_15.channel_list_changed.type = VAR_9;
   break;
  case 128:
   VAR_15.channel_list_changed.type = VAR_12;
   break;
  case 130:
   VAR_15.channel_list_changed.type =
    VAR_10;
   break;
  case 129:
   VAR_15.channel_list_changed.type =
    VAR_11;
   break;
  }
 }

 if (VAR_14[VAR_2]) {
  FUNC_3(VAR_15.channel_list_changed.alpha2,
      FUNC_0(VAR_14[VAR_2]),
      sizeof(VAR_15.channel_list_changed.alpha2));
  FUNC_4(VAR_1, " * alpha2=%s",
      VAR_15.channel_list_changed.alpha2);
 }

 FUNC_5(VAR_13->ctx, VAR_0, &VAR_15);
}
