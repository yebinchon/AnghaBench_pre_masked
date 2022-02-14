
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct net {int dummy; } ;
struct cfg80211_registered_device {int mtx; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 struct cfg80211_registered_device* FUNC_0 (int ) ;
 int VAR_1 ;
 struct net_device* FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct cfg80211_registered_device* FUNC_5 (int ) ;

struct cfg80211_registered_device *
FUNC_6(struct net *VAR_2, int VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = FUNC_0(-VAR_0);
 struct net_device *VAR_5;

 FUNC_3(&VAR_1);
 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5)
  goto out;
 if (VAR_5->ieee80211_ptr) {
  VAR_4 = FUNC_5(VAR_5->ieee80211_ptr->wiphy);
  FUNC_3(&VAR_4->mtx);
 } else
  VAR_4 = FUNC_0(-VAR_0);
 FUNC_2(VAR_5);
 out:
 FUNC_4(&VAR_1);
 return VAR_4;
}
