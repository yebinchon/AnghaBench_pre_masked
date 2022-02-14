
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wpa_driver_nl80211_data {int dummy; } ;
struct phy_info_arg {int* num_modes; int last_mode; TYPE_1__* modes; int dfs_domain; scalar_t__ failed; } ;
struct nl_msg {int dummy; } ;
struct i802_bss {struct wpa_driver_nl80211_data* drv; } ;
struct hostapd_hw_modes {int dummy; } ;
struct TYPE_3__ {struct TYPE_3__* rates; struct TYPE_3__* channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_driver_nl80211_data*) ;
 struct nl_msg* FUNC_1 (struct i802_bss*,int,int ) ;
 int FUNC_2 (struct hostapd_hw_modes*,int) ;
 int FUNC_3 (struct wpa_driver_nl80211_data*,struct phy_info_arg*) ;
 scalar_t__ FUNC_4 (struct nl_msg*,int ) ;
 int FUNC_5 (struct nl_msg*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (struct wpa_driver_nl80211_data*,struct nl_msg*,int ,struct phy_info_arg*) ;
 struct hostapd_hw_modes* FUNC_8 (TYPE_1__*,int*) ;

struct hostapd_hw_modes *
FUNC_9(void *VAR_5, u16 *VAR_6, u16 *VAR_7,
       u8 *VAR_8)
{
 u32 VAR_9;
 struct i802_bss *VAR_10 = VAR_5;
 struct wpa_driver_nl80211_data *VAR_11 = VAR_10->drv;
 int VAR_12 = 0;
 struct nl_msg *VAR_13;
 struct phy_info_arg VAR_14 = {
  .num_modes = VAR_6,
  .modes = ((void*)0),
  .last_mode = -1,
  .failed = 0,
  .dfs_domain = 0,
 };

 *VAR_6 = 0;
 *VAR_7 = 0;
 *VAR_8 = 0;

 VAR_9 = FUNC_0(VAR_11);
 if (VAR_9 & VAR_2)
  VAR_12 = VAR_3;
 if (!(VAR_13 = FUNC_1(VAR_10, VAR_12, VAR_1)) ||
     FUNC_4(VAR_13, VAR_0)) {
  FUNC_5(VAR_13);
  return ((void*)0);
 }

 if (FUNC_7(VAR_11, VAR_13, VAR_4, &VAR_14) == 0) {
  struct hostapd_hw_modes *VAR_15;

  FUNC_3(VAR_11, &VAR_14);
  if (VAR_14.failed) {
   int VAR_16;

   for (VAR_16 = 0; VAR_14.modes && VAR_16 < *VAR_6; VAR_16++) {
    FUNC_6(VAR_14.modes[VAR_16].channels);
    FUNC_6(VAR_14.modes[VAR_16].rates);
   }
   FUNC_6(VAR_14.modes);
   *VAR_6 = 0;
   return ((void*)0);
  }

  *VAR_8 = VAR_14.dfs_domain;

  VAR_15 = FUNC_8(VAR_14.modes,
            VAR_6);
  FUNC_2(VAR_15, *VAR_6);
  return VAR_15;
 }

 return ((void*)0);
}
