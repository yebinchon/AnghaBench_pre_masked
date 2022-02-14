
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct mesh_setup {int dummy; } ;
struct mesh_config {int dummy; } ;
struct cfg80211_registered_device {int devlist_mtx; } ;


 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,struct mesh_setup*,struct mesh_config const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct wireless_dev*) ;

int FUNC_5(struct cfg80211_registered_device *VAR_0,
         struct net_device *VAR_1,
         struct mesh_setup *VAR_2,
         const struct mesh_config *VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_1->ieee80211_ptr;
 int VAR_5;

 FUNC_1(&VAR_0->devlist_mtx);
 FUNC_3(VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_4);
 FUNC_2(&VAR_0->devlist_mtx);

 return VAR_5;
}
