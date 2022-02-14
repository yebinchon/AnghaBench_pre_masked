
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ crit_proto_nlportid; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {scalar_t__ crit_proto_nlportid; TYPE_1__* ops; } ;
struct TYPE_2__ {int crit_proto_stop; } ;


 int VAR_0 ;
 int FUNC_0 (struct wireless_dev*,struct wireless_dev*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1,
          struct genl_info *VAR_2)
{
 struct cfg80211_registered_device *VAR_3 = VAR_2->user_ptr[0];
 struct wireless_dev *VAR_4 = VAR_2->user_ptr[1];

 if (!VAR_3->ops->crit_proto_stop)
  return -VAR_0;

 if (VAR_3->crit_proto_nlportid) {
  VAR_3->crit_proto_nlportid = 0;
  FUNC_0(VAR_3, VAR_4);
 }
 return 0;
}
