
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int reason_code; } ;
struct TYPE_4__ {TYPE_1__ deauth; } ;
struct ieee80211_mgmt {TYPE_2__ u; int bssid; int sa; int da; int frame_control; } ;
struct hostapd_data {int const* own_addr; } ;
typedef int reply ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hostapd_data*,struct ieee80211_mgmt*,int,int ) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (struct ieee80211_mgmt*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_7(struct hostapd_data *VAR_6, const u8 *VAR_7,
   u16 VAR_8)
{
 int VAR_9;
 struct ieee80211_mgmt VAR_10;

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.frame_control =
  FUNC_0(VAR_4, VAR_3);
 FUNC_3(VAR_10.da, VAR_7, VAR_0);
 FUNC_3(VAR_10.sa, VAR_6->own_addr, VAR_0);
 FUNC_3(VAR_10.bssid, VAR_6->own_addr, VAR_0);

 VAR_9 = VAR_1 + sizeof(VAR_10.u.deauth);
 VAR_10.u.deauth.reason_code = FUNC_1(VAR_8);

 if (FUNC_2(VAR_6, &VAR_10, VAR_9, 0) < 0)
  FUNC_6(VAR_2, "Failed to send deauth: %s",
      FUNC_5(VAR_5));
}
