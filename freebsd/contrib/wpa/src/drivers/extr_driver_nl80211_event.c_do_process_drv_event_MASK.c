
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct wpa_driver_nl80211_data {scalar_t__ ap_scan_as_station; int last_scan_cmd; int scan_complete_events; int ctx; int scan_state; int scan_for_auth; int first_bss; TYPE_1__ capa; } ;
struct nlattr {int dummy; } ;
struct i802_bss {int ifname; struct wpa_driver_nl80211_data* drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int ,struct wpa_driver_nl80211_data*,int ) ;
 int FUNC_1 (struct i802_bss*,int,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*) ;
 int FUNC_2 (struct wpa_driver_nl80211_data*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,int) ;
 int FUNC_3 (struct wpa_driver_nl80211_data*,int,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,int *,int *,int *,struct nlattr*,int *,struct nlattr*,struct nlattr*,struct nlattr*) ;
 int FUNC_4 (struct wpa_driver_nl80211_data*,struct i802_bss*,struct nlattr**) ;
 int FUNC_5 (struct wpa_driver_nl80211_data*,struct nlattr*,struct nlattr*,struct nlattr*) ;
 int FUNC_6 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_7 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_8 (struct i802_bss*,struct nlattr**) ;
 int FUNC_9 (struct wpa_driver_nl80211_data*,int,struct nlattr**) ;
 int FUNC_10 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_13 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_14 (struct wpa_driver_nl80211_data*,struct i802_bss*,struct nlattr**) ;
 int FUNC_15 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_16 (struct wpa_driver_nl80211_data*,struct i802_bss*,struct nlattr**) ;
 int FUNC_17 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_18 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_19 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_20 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_21 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_22 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_23 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_24 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_25 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_26 (struct wpa_driver_nl80211_data*,struct nlattr**) ;
 int FUNC_27 (struct wpa_driver_nl80211_data*,int,struct nlattr**,int) ;
 int FUNC_28 (int ,int ,char*,...) ;
 int VAR_34 ;
 int FUNC_29 (int ,scalar_t__) ;
 int FUNC_30 (int ,char*,...) ;
 int FUNC_31 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_32(struct i802_bss *VAR_35, int VAR_36,
     struct nlattr **VAR_37)
{
 struct wpa_driver_nl80211_data *VAR_38 = VAR_35->drv;
 int VAR_39 = 0;

 FUNC_30(VAR_2, "nl80211: Drv Event %d (%s) received for %s",
     VAR_36, FUNC_11(VAR_36), VAR_35->ifname);

 if (VAR_36 == 142 &&
     (VAR_38->capa.flags & VAR_33)) {




  FUNC_30(VAR_2,
      "nl80211: Ignore roam event (cmd=%d), device will use vendor event roam+auth",
      VAR_36);
  return;
 }

 if (VAR_38->ap_scan_as_station != VAR_26 &&
     (VAR_36 == 152 ||
      VAR_36 == 141)) {
  FUNC_29(VAR_38->first_bss,
         VAR_38->ap_scan_as_station);
  VAR_38->ap_scan_as_station = VAR_26;
 }

 switch (VAR_36) {
 case 133:
  FUNC_28(VAR_38->ctx, VAR_2, "nl80211: Scan trigger");
  VAR_38->scan_state = VAR_29;
  if (VAR_38->scan_for_auth) {






   FUNC_30(VAR_2, "nl80211: Do not indicate scan-start event due to internal scan_for_auth");
   break;
  }
  FUNC_31(VAR_38->ctx, VAR_0, ((void*)0));
  break;
 case 137:
  FUNC_28(VAR_38->ctx, VAR_2, "nl80211: Sched scan started");
  VAR_38->scan_state = VAR_31;
  break;
 case 139:
  FUNC_28(VAR_38->ctx, VAR_2, "nl80211: Sched scan stopped");
  VAR_38->scan_state = VAR_32;
  FUNC_31(VAR_38->ctx, VAR_1, ((void*)0));
  break;
 case 152:
  FUNC_28(VAR_38->ctx, VAR_2,
   "nl80211: New scan results available");
  if (VAR_38->last_scan_cmd != 129)
   VAR_38->scan_state = VAR_28;
  VAR_38->scan_complete_events = 1;
  if (VAR_38->last_scan_cmd == 133) {
   FUNC_0(VAR_34,
          VAR_38, VAR_38->ctx);
   VAR_38->last_scan_cmd = 0;
  } else {
   VAR_39 = 1;
  }
  FUNC_27(VAR_38, 0, VAR_37, VAR_39);
  break;
 case 140:
  FUNC_28(VAR_38->ctx, VAR_2,
   "nl80211: New sched scan results available");
  VAR_38->scan_state = VAR_30;
  FUNC_27(VAR_38, 0, VAR_37, 0);
  break;
 case 141:
  FUNC_28(VAR_38->ctx, VAR_2, "nl80211: Scan aborted");
  if (VAR_38->last_scan_cmd != 129)
   VAR_38->scan_state = VAR_27;
  if (VAR_38->last_scan_cmd == 133) {




   FUNC_0(VAR_34,
          VAR_38, VAR_38->ctx);
   VAR_38->last_scan_cmd = 0;
  } else {
   VAR_39 = 1;
  }
  FUNC_27(VAR_38, 1, VAR_37, VAR_39);
  break;
 case 167:
 case 168:
 case 161:
 case 159:
 case 157:
 case 132:
 case 131:
  FUNC_1(VAR_35, VAR_36, VAR_37[VAR_11],
      VAR_37[VAR_13], VAR_37[VAR_22],
      VAR_37[VAR_25], VAR_37[VAR_3],
      VAR_37[VAR_7],
      VAR_37[VAR_19],
      VAR_37[VAR_21],
      VAR_37[VAR_17]);
  break;
 case 163:
 case 142:
  FUNC_3(VAR_38, VAR_36,
       VAR_37[VAR_20],
       VAR_37[VAR_13],
       VAR_37[VAR_17],
       VAR_37[VAR_18],
       VAR_37[VAR_22],
       VAR_37[VAR_23],
       ((void*)0), ((void*)0), ((void*)0),
       VAR_37[VAR_10],
       ((void*)0),
       VAR_37[VAR_9],
       VAR_37[VAR_14],
       VAR_37[VAR_15]);
  break;
 case 164:
  FUNC_2(VAR_38,
         VAR_37[VAR_12],
         VAR_37[VAR_25],
         VAR_37[VAR_24],
         VAR_37[VAR_6],
         VAR_37[VAR_4],
         VAR_37[VAR_5],
         0);
  break;
 case 165:
  FUNC_2(VAR_38,
         VAR_37[VAR_12],
         VAR_37[VAR_25],
         VAR_37[VAR_24],
         VAR_37[VAR_6],
         VAR_37[VAR_4],
         VAR_37[VAR_5],
         1);
  break;
 case 158:
  FUNC_5(VAR_38, VAR_37[VAR_16],
          VAR_37[VAR_13],
          VAR_37[VAR_8]);
  break;
 case 154:
  FUNC_8(VAR_35, VAR_37);
  break;
 case 155:
  FUNC_7(VAR_38, VAR_37);
  break;
 case 143:
  FUNC_9(VAR_38, 0, VAR_37);
  break;
 case 166:
  FUNC_9(VAR_38, 1, VAR_37);
  break;
 case 150:
  FUNC_13(VAR_38, VAR_37);
  break;
 case 144:
 case 128:
  FUNC_21(VAR_38, VAR_37);
  break;
 case 145:
  FUNC_20(VAR_38, VAR_37);
  break;
 case 151:
  FUNC_16(VAR_38, VAR_35, VAR_37);
  break;
 case 160:
  FUNC_14(VAR_38, VAR_35, VAR_37);
  break;
 case 138:
  FUNC_22(VAR_38, VAR_37);
  break;
 case 149:
  FUNC_17(VAR_38, VAR_37);
  break;
 case 147:
  FUNC_10(VAR_38, VAR_37);
  break;
 case 134:
  FUNC_25(VAR_38, VAR_37);
  break;
 case 162:
  FUNC_12(VAR_38, VAR_37);
  break;
 case 156:
  FUNC_6(VAR_38, VAR_37);
  break;
 case 146:
  FUNC_19(VAR_38, VAR_37);
  break;
 case 135:
  FUNC_24(VAR_38, VAR_37);
  break;
 case 129:
  FUNC_26(VAR_38, VAR_37);
  break;
 case 153:
  FUNC_15(VAR_38, VAR_37);
  break;
 case 148:
  FUNC_18(VAR_38, VAR_37);
  break;
 case 136:
  FUNC_23(VAR_38, VAR_37);
  break;
 case 130:
  FUNC_4(VAR_38, VAR_35, VAR_37);
  break;
 default:
  FUNC_28(VAR_38->ctx, VAR_2, "nl80211: Ignored unknown event "
   "(cmd=%d)", VAR_36);
  break;
 }
}
