
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int reason_code; } ;
struct TYPE_4__ {TYPE_1__ disassoc; } ;
struct ieee80211_mgmt {TYPE_2__ u; int bssid; int sa; int da; int frame_control; } ;
struct hostap_driver_data {int dummy; } ;
typedef int mgmt ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hostap_driver_data*,int *,scalar_t__,int ,int ,int *,int ) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (struct ieee80211_mgmt*,int ,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, const u8 *VAR_5, const u8 *VAR_6,
          u16 VAR_7)
{
 struct hostap_driver_data *VAR_8 = VAR_4;
 struct ieee80211_mgmt VAR_9;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.frame_control = FUNC_0(VAR_3,
       VAR_2);
 FUNC_3(VAR_9.da, VAR_6, VAR_0);
 FUNC_3(VAR_9.sa, VAR_5, VAR_0);
 FUNC_3(VAR_9.bssid, VAR_5, VAR_0);
 VAR_9.u.disassoc.reason_code = FUNC_1(VAR_7);
 return FUNC_2(VAR_8, (u8 *) &VAR_9, VAR_1 +
     sizeof(VAR_9.u.disassoc), 0, 0, ((void*)0), 0);
}
