
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_nl80211_data {int first_bss; } ;
struct nl_msg {int dummy; } ;
struct nl80211_dump_scan_ctx {scalar_t__ idx; struct wpa_driver_nl80211_data* drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nl_msg* FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct wpa_driver_nl80211_data*,struct nl_msg*,int ,struct nl80211_dump_scan_ctx*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct wpa_driver_nl80211_data *VAR_4)
{
 struct nl_msg *VAR_5;
 struct nl80211_dump_scan_ctx VAR_6;

 FUNC_2(VAR_0, "nl80211: Scan result dump");
 VAR_6.drv = VAR_4;
 VAR_6.idx = 0;
 VAR_5 = FUNC_0(VAR_4->first_bss, VAR_2, VAR_1);
 if (VAR_5)
  FUNC_1(VAR_4, VAR_5, VAR_3, &VAR_6);
}
