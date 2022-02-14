
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wmm_tspec_element {int dummy; } ;
struct sta_info {int flags; } ;
struct ieee802_11_elems {int wmm_tspec_len; scalar_t__ wmm_tspec; } ;
struct TYPE_5__ {int action_code; } ;
struct TYPE_6__ {TYPE_1__ wmm_action; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {int sa; TYPE_4__ u; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 struct sta_info* FUNC_0 (struct hostapd_data*,int ) ;
 int FUNC_1 (struct hostapd_data*,int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (int const*,int,struct ieee802_11_elems*,int) ;
 int FUNC_3 (struct hostapd_data*,struct ieee80211_mgmt const*,struct wmm_tspec_element*,size_t) ;
 int FUNC_4 (struct hostapd_data*,struct ieee80211_mgmt const*,size_t) ;
 int FUNC_5 (struct hostapd_data*,struct ieee80211_mgmt const*,size_t) ;

void FUNC_6(struct hostapd_data *VAR_6,
   const struct ieee80211_mgmt *VAR_7, size_t VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_8 - VAR_2 - 4;
 const u8 *VAR_11 = ((const u8 *) VAR_7) + VAR_2 + 4;
 struct ieee802_11_elems VAR_12;
 struct sta_info *VAR_13 = FUNC_0(VAR_6, VAR_7->sa);


 if (!VAR_13 ||
     (VAR_13->flags & (VAR_4 | VAR_5)) !=
     (VAR_4 | VAR_5)) {
  FUNC_1(VAR_6, VAR_7->sa, VAR_1,
          VAR_0,
          "wmm action received is not from associated wmm"
          " station");

  return;
 }

 if (VAR_10 < 0)
  return;


 if (FUNC_2(VAR_11, VAR_10, &VAR_12, 1) == VAR_3) {
  FUNC_1(VAR_6, VAR_7->sa, VAR_1,
          VAR_0,
          "hostapd_wmm_action - could not parse wmm "
          "action");


  return;
 }

 if (!VAR_12.wmm_tspec ||
     VAR_12.wmm_tspec_len != (sizeof(struct wmm_tspec_element) - 2)) {
  FUNC_1(VAR_6, VAR_7->sa, VAR_1,
          VAR_0,
          "hostapd_wmm_action - missing or wrong length "
          "tspec");


  return;
 }




 VAR_9 = VAR_7->u.action.u.wmm_action.action_code;
 switch (VAR_9) {
 case 130:
  FUNC_3(VAR_6, VAR_7, (struct wmm_tspec_element *)
         (VAR_12.wmm_tspec - 2), VAR_8);
  return;
 }

 FUNC_1(VAR_6, VAR_7->sa, VAR_1,
         VAR_0,
         "hostapd_wmm_action - unknown action code %d",
         VAR_9);
}
