
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_nl80211_data {int dummy; } ;
struct nl_msg {int dummy; } ;
struct nl80211_noise_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nl_msg* FUNC_0 (struct wpa_driver_nl80211_data*,int ,int ) ;
 int FUNC_1 (struct nl80211_noise_info*,int ,int) ;
 int FUNC_2 (struct wpa_driver_nl80211_data*,struct nl_msg*,int ,struct nl80211_noise_info*) ;

__attribute__((used)) static int FUNC_3(
 struct wpa_driver_nl80211_data *VAR_3, struct nl80211_noise_info *VAR_4)
{
 struct nl_msg *VAR_5;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_0);
 return FUNC_2(VAR_3, VAR_5, VAR_2, VAR_4);
}
