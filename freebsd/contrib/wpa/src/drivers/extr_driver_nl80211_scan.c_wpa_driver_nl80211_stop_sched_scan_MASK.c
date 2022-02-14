
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sched_scan_supported; } ;
struct wpa_driver_nl80211_data {TYPE_1__ capa; } ;
struct nl_msg {int dummy; } ;
struct i802_bss {struct wpa_driver_nl80211_data* drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i802_bss*) ;
 struct nl_msg* FUNC_1 (struct wpa_driver_nl80211_data*,int ,int ) ;
 int FUNC_2 (struct wpa_driver_nl80211_data*,struct nl_msg*,int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;

int FUNC_5(void *VAR_2)
{
 struct i802_bss *VAR_3 = VAR_2;
 struct wpa_driver_nl80211_data *VAR_4 = VAR_3->drv;
 int VAR_5;
 struct nl_msg *VAR_6;






 VAR_6 = FUNC_1(VAR_4, 0, VAR_1);
 VAR_5 = FUNC_2(VAR_4, VAR_6, ((void*)0), ((void*)0));
 if (VAR_5) {
  FUNC_4(VAR_0,
      "nl80211: Sched scan stop failed: ret=%d (%s)",
      VAR_5, FUNC_3(-VAR_5));
 } else {
  FUNC_4(VAR_0,
      "nl80211: Sched scan stop sent");
 }

 return VAR_5;
}
