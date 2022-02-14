
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {TYPE_2__* connect_keys; struct net_device* netdev; int wiphy; } ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;
struct TYPE_4__ {int def; int defmgmt; TYPE_1__* params; } ;
struct TYPE_3__ {int cipher; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 scalar_t__ FUNC_2 (struct cfg80211_registered_device*,struct net_device*,int,int,int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct cfg80211_registered_device*,struct net_device*,int,int,int) ;
 scalar_t__ FUNC_4 (struct cfg80211_registered_device*,struct net_device*,int) ;
 struct cfg80211_registered_device* FUNC_5 (int ) ;

void FUNC_6(struct wireless_dev *VAR_0)
{
 struct cfg80211_registered_device *VAR_1 = FUNC_5(VAR_0->wiphy);
 struct net_device *VAR_2 = VAR_0->netdev;
 int VAR_3;

 if (!VAR_0->connect_keys)
  return;

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  if (!VAR_0->connect_keys->params[VAR_3].cipher)
   continue;
  if (FUNC_2(VAR_1, VAR_2, VAR_3, 0, ((void*)0),
     &VAR_0->connect_keys->params[VAR_3])) {
   FUNC_1(VAR_2, "failed to set key %d\n", VAR_3);
   continue;
  }
  if (VAR_0->connect_keys->def == VAR_3)
   if (FUNC_3(VAR_1, VAR_2, VAR_3, 1, 1)) {
    FUNC_1(VAR_2, "failed to set defkey %d\n", VAR_3);
    continue;
   }
  if (VAR_0->connect_keys->defmgmt == VAR_3)
   if (FUNC_4(VAR_1, VAR_2, VAR_3))
    FUNC_1(VAR_2, "failed to set mgtdef %d\n", VAR_3);
 }

 FUNC_0(VAR_0->connect_keys);
 VAR_0->connect_keys = ((void*)0);
}
