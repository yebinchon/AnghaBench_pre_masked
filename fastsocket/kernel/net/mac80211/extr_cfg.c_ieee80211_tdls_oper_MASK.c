
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int flags; } ;
struct sta_info {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
typedef enum nl80211_tdls_operation { ____Placeholder_nl80211_tdls_operation } nl80211_tdls_operation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sta_info*,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int *) ;
 struct sta_info* FUNC_5 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*,int,int *) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_6, struct net_device *VAR_7,
          u8 *VAR_8, enum nl80211_tdls_operation VAR_9)
{
 struct sta_info *VAR_10;
 struct ieee80211_sub_if_data *VAR_11 = FUNC_0(VAR_7);

 if (!(VAR_6->flags & VAR_4))
  return -VAR_2;

 if (VAR_11->vif.type != VAR_3)
  return -VAR_0;

 FUNC_6(VAR_11, "TDLS oper %d peer %pM\n", VAR_9, VAR_8);

 switch (VAR_9) {
 case 130:
  FUNC_1();
  VAR_10 = FUNC_5(VAR_11, VAR_8);
  if (!VAR_10) {
   FUNC_2();
   return -VAR_1;
  }

  FUNC_3(VAR_10, VAR_5);
  FUNC_2();
  break;
 case 132:
  return FUNC_4(VAR_11, VAR_8);
 case 128:
 case 129:
 case 131:

  return -VAR_2;
 default:
  return -VAR_2;
 }

 return 0;
}
