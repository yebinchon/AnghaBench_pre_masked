
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wiphy {int features; } ;
struct TYPE_7__ {int beacon; } ;
struct TYPE_8__ {TYPE_3__ ap; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_2__* local; int vif; } ;
struct cfg80211_scan_request {int flags; int wdev; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int hw_scan; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (int ) ;
 int VAR_1 ;







 int VAR_2 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct cfg80211_scan_request*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_3,
     struct cfg80211_scan_request *VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5;

 VAR_5 = FUNC_0(VAR_4->wdev);

 switch (FUNC_2(&VAR_5->vif)) {
 case 128:
 case 134:
 case 132:
 case 131:
 case 130:
  break;
 case 129:
  if (VAR_5->local->ops->hw_scan)
   break;





 case 133:







  if (VAR_5->u.ap.beacon &&
      (!(VAR_3->features & VAR_1) ||
       !(VAR_4->flags & VAR_2)))
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_5, VAR_4);
}
