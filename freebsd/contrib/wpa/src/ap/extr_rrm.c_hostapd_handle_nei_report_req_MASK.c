
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


typedef int u8 ;
typedef int u16 ;
struct wpa_ssid_value {int ssid_len; int ssid; } ;
struct TYPE_7__ {int dialog_token; int* variable; } ;
struct TYPE_8__ {TYPE_1__ rrm; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {int sa; TYPE_4__ u; } ;
struct hostapd_data {TYPE_6__* conf; } ;
struct TYPE_11__ {int ssid_len; int const* ssid; } ;
struct TYPE_12__ {int* radio_measurements; TYPE_5__ ssid; } ;




 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (int const*,size_t,int ) ;
 int FUNC_1 (int const*,int const) ;
 int FUNC_2 (struct hostapd_data*,int ,int,struct wpa_ssid_value*,int,int,int ) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (int ,char*,int const) ;

__attribute__((used)) static void FUNC_5(struct hostapd_data *VAR_5,
       const u8 *VAR_6, size_t VAR_7)
{
 const struct ieee80211_mgmt *VAR_8 = (const struct ieee80211_mgmt *) VAR_6;
 const u8 *VAR_9, *VAR_10, *VAR_11;
 struct wpa_ssid_value VAR_12 = {
  .ssid_len = 0
 };
 u8 VAR_13;
 u8 VAR_14 = 0, VAR_15 = 0;
 u16 VAR_16 = 0;

 if (!(VAR_5->conf->radio_measurements[0] &
       VAR_4))
  return;

 VAR_11 = VAR_6 + VAR_7;

 VAR_13 = VAR_8->u.action.u.rrm.dialog_token;
 VAR_9 = VAR_8->u.action.u.rrm.variable;
 VAR_7 = VAR_11 - VAR_9;

 VAR_10 = FUNC_0(VAR_9, VAR_7, VAR_3);
 if (VAR_10 && VAR_10[1] && VAR_10[1] <= VAR_1) {
  VAR_12.ssid_len = VAR_10[1];
  FUNC_3(VAR_12.ssid, VAR_10 + 2, VAR_12.ssid_len);
 } else {
  VAR_12.ssid_len = VAR_5->conf->ssid.ssid_len;
  FUNC_3(VAR_12.ssid, VAR_5->conf->ssid.ssid, VAR_12.ssid_len);
 }

 while ((VAR_10 = FUNC_0(VAR_9, VAR_7, VAR_2))) {
  if (VAR_10[1] < 3)
   break;

  FUNC_4(VAR_0,
      "Neighbor report request, measure type %u",
      VAR_10[4]);

  switch (VAR_10[4]) {
  case 129:
   VAR_14 = VAR_10[2];
   VAR_16 = FUNC_1(VAR_10 + 2,
          VAR_10[1]);
   break;
  case 128:
   VAR_15 = VAR_10[2];
   break;
  }

  VAR_9 = VAR_10 + VAR_10[1] + 2;
  VAR_7 = VAR_11 - VAR_9;
 }

 FUNC_2(VAR_5, VAR_8->sa, VAR_13, &VAR_12, VAR_14, VAR_15,
         VAR_16);
}
