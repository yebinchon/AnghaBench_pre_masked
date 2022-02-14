
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {scalar_t__ iftype; int mesh_id_len; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct mesh_config {int dummy; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int update_mesh_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct genl_info*,struct mesh_config*,int *) ;
 int FUNC_1 (struct net_device*,struct net_device*,int ,struct mesh_config*) ;
 int FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3,
          struct genl_info *VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = VAR_4->user_ptr[0];
 struct net_device *VAR_6 = VAR_4->user_ptr[1];
 struct wireless_dev *VAR_7 = VAR_6->ieee80211_ptr;
 struct mesh_config VAR_8;
 u32 VAR_9;
 int VAR_10;

 if (VAR_7->iftype != VAR_2)
  return -VAR_1;

 if (!VAR_5->ops->update_mesh_config)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_4, &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_7);
 if (!VAR_7->mesh_id_len)
  VAR_10 = -VAR_0;

 if (!VAR_10)
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_9, &VAR_8);

 FUNC_3(VAR_7);

 return VAR_10;
}
