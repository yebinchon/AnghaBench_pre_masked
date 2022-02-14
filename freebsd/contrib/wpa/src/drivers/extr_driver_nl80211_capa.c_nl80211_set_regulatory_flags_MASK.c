
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct wpa_driver_nl80211_data {int wiphy_idx; TYPE_1__ capa; } ;
struct phy_info_arg {int dummy; } ;
struct nl_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_driver_nl80211_data*,struct nl_msg*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct nl_msg*,int ,int ) ;
 struct nl_msg* FUNC_2 () ;
 int FUNC_3 (struct nl_msg*) ;
 int FUNC_4 (struct wpa_driver_nl80211_data*,struct nl_msg*,int ,struct phy_info_arg*) ;

__attribute__((used)) static int FUNC_5(struct wpa_driver_nl80211_data *VAR_5,
     struct phy_info_arg *VAR_6)
{
 struct nl_msg *VAR_7;

 VAR_7 = FUNC_2();
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_7, 0, VAR_2);
 if (VAR_5->capa.flags & VAR_3) {
  if (FUNC_1(VAR_7, VAR_1, VAR_5->wiphy_idx)) {
   FUNC_3(VAR_7);
   return -1;
  }
 }

 return FUNC_4(VAR_5, VAR_7, VAR_4, VAR_6);
}
