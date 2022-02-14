
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wpa_driver_nl80211_data {int dummy; } ;
struct nl_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_driver_nl80211_data*,struct nl_msg*,int ,int ) ;
 struct nl_msg* FUNC_1 () ;
 int FUNC_2 (struct nl_msg*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct wpa_driver_nl80211_data*,struct nl_msg*,int ,int *) ;

__attribute__((used)) static u32 FUNC_4(struct wpa_driver_nl80211_data *VAR_2)
{
 u32 VAR_3 = 0;
 struct nl_msg *VAR_4;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return 0;

 if (!FUNC_0(VAR_2, VAR_4, 0, VAR_0)) {
  FUNC_2(VAR_4);
  return 0;
 }

 if (FUNC_3(VAR_2, VAR_4, VAR_1, &VAR_3) == 0)
  return VAR_3;

 return 0;
}
