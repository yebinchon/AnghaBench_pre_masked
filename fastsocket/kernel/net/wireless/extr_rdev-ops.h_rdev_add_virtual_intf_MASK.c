
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {int dummy; } ;
struct vif_params {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {struct wireless_dev* (* add_virtual_intf ) (int *,char*,int,int *,struct vif_params*) ;} ;


 struct wireless_dev* FUNC_0 (int *,char*,int,int *,struct vif_params*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct wireless_dev*) ;

__attribute__((used)) static inline struct wireless_dev
*FUNC_3(struct cfg80211_registered_device *VAR_0, char *VAR_1,
         enum nl80211_iftype VAR_2, u32 *VAR_3,
         struct vif_params *VAR_4)
{
 struct wireless_dev *VAR_5;
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2);
 VAR_5 = VAR_0->ops->add_virtual_intf(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
       VAR_4);
 FUNC_2(&VAR_0->wiphy, VAR_5);
 return VAR_5;
}
