
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_nl80211_data {int dummy; } ;
struct nl_msg {int dummy; } ;
struct i802_bss {struct wpa_driver_nl80211_data* drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nl_msg* FUNC_0 (struct i802_bss*,int ,int ) ;
 int FUNC_1 (struct wpa_driver_nl80211_data*,struct nl_msg*,int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct i802_bss *VAR_2)
{
 int VAR_3;
 struct nl_msg *VAR_4;
 struct wpa_driver_nl80211_data *VAR_5 = VAR_2->drv;

 FUNC_3(VAR_0, "nl80211: Abort scan");
 VAR_4 = FUNC_0(VAR_2, 0, VAR_1);
 VAR_3 = FUNC_1(VAR_5, VAR_4, ((void*)0), ((void*)0));
 if (VAR_3) {
  FUNC_3(VAR_0, "nl80211: Abort scan failed: ret=%d (%s)",
      VAR_3, FUNC_2(-VAR_3));
 }
 return VAR_3;
}
