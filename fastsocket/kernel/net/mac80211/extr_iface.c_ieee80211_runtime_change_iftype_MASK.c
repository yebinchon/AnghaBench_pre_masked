
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct ieee80211_sub_if_data {int wdev; TYPE_2__ vif; struct ieee80211_local* local; } ;
struct ieee80211_local {TYPE_1__* ops; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_3__ {int change_interface; } ;


 int FUNC_0 () ;
 int VAR_0 ;





 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_sub_if_data *VAR_1,
        enum nl80211_iftype VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_1->local;
 int VAR_4, VAR_5;
 enum nl80211_iftype VAR_6 = VAR_2;
 bool VAR_7 = 0;

 FUNC_0();

 if (!VAR_3->ops->change_interface)
  return -VAR_0;

 switch (VAR_1->vif.type) {
 case 131:
 case 128:
 case 132:






  break;
 default:
  return -VAR_0;
 }

 switch (VAR_2) {
 case 131:
 case 128:
 case 132:






  break;
 case 130:
  VAR_7 = 1;
  VAR_6 = 128;
  break;
 case 129:
  VAR_7 = 1;
  VAR_6 = 131;
  break;
 default:
  return -VAR_0;
 }

 VAR_4 = FUNC_3(VAR_1, VAR_6);
 if (VAR_4)
  return VAR_4;

 FUNC_6(VAR_1, 0);

 FUNC_8(VAR_1);

 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_6, VAR_7);
 if (VAR_4)
  VAR_2 = VAR_1->vif.type;






 FUNC_4(VAR_1);

 FUNC_7(VAR_1, VAR_2);

 VAR_5 = FUNC_5(&VAR_1->wdev, 0);
 FUNC_1(VAR_5, "type change: do_open returned %d", VAR_5);

 return VAR_4;
}
