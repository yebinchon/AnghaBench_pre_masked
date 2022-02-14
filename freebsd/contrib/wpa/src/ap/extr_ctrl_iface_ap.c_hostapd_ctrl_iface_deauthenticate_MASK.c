
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct sta_info {int dummy; } ;
struct TYPE_4__ {int reason_code; } ;
struct TYPE_5__ {TYPE_1__ deauth; } ;
struct ieee80211_mgmt {TYPE_2__ u; int bssid; int sa; int da; int frame_control; } ;
struct hostapd_data {int* own_addr; int drv_priv; TYPE_3__* driver; int msg_ctx; } ;
typedef int mgmt ;
struct TYPE_6__ {scalar_t__ (* send_frame ) (int ,int*,scalar_t__,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 struct sta_info* FUNC_1 (struct hostapd_data*,int*) ;
 int FUNC_2 (struct hostapd_data*,struct sta_info*,void*) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct hostapd_data*,int*,void*) ;
 int FUNC_6 (struct hostapd_data*,int*) ;
 int FUNC_7 (struct hostapd_data*) ;
 scalar_t__ FUNC_8 (char const*,int*) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (struct ieee80211_mgmt*,int ,int) ;
 char* FUNC_11 (char const*,char*) ;
 int FUNC_12 (struct hostapd_data*,int ,void*,int*) ;
 scalar_t__ FUNC_13 (int ,int*,scalar_t__,int) ;
 int FUNC_14 (int ,int ,char*,char const*) ;

int FUNC_15(struct hostapd_data *VAR_6,
          const char *VAR_7)
{
 u8 VAR_8[VAR_0];
 struct sta_info *VAR_9;
 const char *VAR_10;
 u16 VAR_11 = VAR_5;

 FUNC_14(VAR_6->msg_ctx, VAR_2, "CTRL_IFACE DEAUTHENTICATE %s",
  VAR_7);

 if (FUNC_8(VAR_7, VAR_8))
  return -1;

 VAR_10 = FUNC_11(VAR_7, " reason=");
 if (VAR_10)
  VAR_11 = FUNC_3(VAR_10 + 8);

 VAR_10 = FUNC_11(VAR_7, " test=");
 if (VAR_10) {
  struct ieee80211_mgmt VAR_12;
  int VAR_13;
  if (!VAR_6->drv_priv || !VAR_6->driver->send_frame)
   return -1;
  VAR_10 += 6;
  VAR_13 = FUNC_3(VAR_10);
  FUNC_10(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.frame_control = FUNC_0(VAR_4,
        VAR_3);
  FUNC_9(VAR_12.da, VAR_8, VAR_0);
  FUNC_9(VAR_12.sa, VAR_6->own_addr, VAR_0);
  FUNC_9(VAR_12.bssid, VAR_6->own_addr, VAR_0);
  VAR_12.u.deauth.reason_code = FUNC_4(VAR_11);
  if (VAR_6->driver->send_frame(VAR_6->drv_priv, (u8 *) &VAR_12,
          VAR_1 +
          sizeof(VAR_12.u.deauth),
          VAR_13) < 0)
   return -1;
  return 0;
 }
 if (FUNC_11(VAR_7, " tx=0"))
  FUNC_6(VAR_6, VAR_8);
 else
  FUNC_5(VAR_6, VAR_8, VAR_11);
 VAR_9 = FUNC_1(VAR_6, VAR_8);
 if (VAR_9)
  FUNC_2(VAR_6, VAR_9, VAR_11);
 else if (VAR_8[0] == 0xff)
  FUNC_7(VAR_6);

 return 0;
}
