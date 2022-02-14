
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wireless_dev {int ps; int ps_timeout; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int set_power_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct cfg80211_registered_device *VAR_7 = VAR_6->user_ptr[0];
 struct wireless_dev *VAR_8;
 struct net_device *VAR_9 = VAR_6->user_ptr[1];
 u8 VAR_10;
 bool VAR_11;
 int VAR_12;

 if (!VAR_6->attrs[VAR_2])
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_6->attrs[VAR_2]);

 if (VAR_10 != VAR_3 && VAR_10 != VAR_4)
  return -VAR_0;

 VAR_8 = VAR_9->ieee80211_ptr;

 if (!VAR_7->ops->set_power_mgmt)
  return -VAR_1;

 VAR_11 = (VAR_10 == VAR_4) ? 1 : 0;

 if (VAR_11 == VAR_8->ps)
  return 0;

 VAR_12 = FUNC_1(VAR_7, VAR_9, VAR_11, VAR_8->ps_timeout);
 if (!VAR_12)
  VAR_8->ps = VAR_11;
 return VAR_12;
}
