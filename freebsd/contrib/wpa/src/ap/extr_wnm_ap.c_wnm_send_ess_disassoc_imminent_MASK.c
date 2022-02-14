
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {char const* addr; } ;
struct TYPE_5__ {int dialog_token; int req_mode; int validity_interval; int * variable; int disassoc_timer; int action; } ;
struct TYPE_6__ {TYPE_1__ bss_tm_req; } ;
struct TYPE_7__ {TYPE_2__ u; int category; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; int * bssid; int * sa; int * da; int frame_control; } ;
struct hostapd_data {char const* own_addr; } ;
typedef int buf ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct hostapd_data*,int *,int,int ) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (int *,int ,int) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (struct hostapd_data*,struct sta_info*,int) ;
 int FUNC_7 (int ,char*) ;

int FUNC_8(struct hostapd_data *VAR_8,
       struct sta_info *VAR_9, const char *VAR_10,
       int VAR_11)
{
 u8 VAR_12[1000], *VAR_13;
 struct ieee80211_mgmt *VAR_14;
 size_t VAR_15;

 FUNC_4(VAR_12, 0, sizeof(VAR_12));
 VAR_14 = (struct ieee80211_mgmt *) VAR_12;
 VAR_14->frame_control = FUNC_0(VAR_4,
        VAR_3);
 FUNC_3(VAR_14->da, VAR_9->addr, VAR_0);
 FUNC_3(VAR_14->sa, VAR_8->own_addr, VAR_0);
 FUNC_3(VAR_14->bssid, VAR_8->own_addr, VAR_0);
 VAR_14->u.action.category = VAR_2;
 VAR_14->u.action.u.bss_tm_req.action = VAR_7;
 VAR_14->u.action.u.bss_tm_req.dialog_token = 1;
 VAR_14->u.action.u.bss_tm_req.req_mode =
  VAR_5 |
  VAR_6;
 VAR_14->u.action.u.bss_tm_req.disassoc_timer =
  FUNC_1(VAR_11);
 VAR_14->u.action.u.bss_tm_req.validity_interval = 0x01;

 VAR_13 = VAR_14->u.action.u.bss_tm_req.variable;


 VAR_15 = FUNC_5(VAR_10);
 if (VAR_15 > 255)
  return -1;
 *VAR_13++ = VAR_15;
 FUNC_3(VAR_13, VAR_10, VAR_15);
 VAR_13 += VAR_15;

 if (FUNC_2(VAR_8, VAR_12, VAR_13 - VAR_12, 0) < 0) {
  FUNC_7(VAR_1, "Failed to send BSS Transition "
      "Management Request frame");
  return -1;
 }

 if (VAR_11) {

  FUNC_6(VAR_8, VAR_9, VAR_11);
 }

 return 0;
}
