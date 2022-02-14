
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpa_driver_nl80211_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_driver_nl80211_data*,int *,size_t) ;
 int FUNC_1 (struct wpa_driver_nl80211_data*,int *,size_t) ;
 int FUNC_2 (struct wpa_driver_nl80211_data*,int,int *,size_t) ;
 int FUNC_3 (struct wpa_driver_nl80211_data*,int *,size_t) ;
 int FUNC_4 (struct wpa_driver_nl80211_data*,int *,size_t) ;
 int FUNC_5 (struct wpa_driver_nl80211_data*,int *,size_t) ;
 int FUNC_6 (struct wpa_driver_nl80211_data*,int *,size_t) ;
 int FUNC_7 (int ,char*,int *,size_t) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static void FUNC_9(struct wpa_driver_nl80211_data *VAR_1,
         u32 VAR_2, u8 *VAR_3, size_t VAR_4)
{
 switch (VAR_2) {
 case 129:
  FUNC_7(VAR_0, "nl80211: QCA test event", VAR_3, VAR_4);
  break;
 default:
  FUNC_8(VAR_0,
      "nl80211: Ignore unsupported QCA vendor event %u",
      VAR_2);
  break;
 }
}
