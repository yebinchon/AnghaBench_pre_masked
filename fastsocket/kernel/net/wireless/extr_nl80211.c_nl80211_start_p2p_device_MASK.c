
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int p2p_started; int devlist_mtx; int opencount; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {scalar_t__ iftype; int p2p_started; int devlist_mtx; int opencount; TYPE_1__* ops; } ;
struct TYPE_2__ {int start_p2p_device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wireless_dev*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wireless_dev*,struct wireless_dev*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = VAR_3->user_ptr[0];
 struct wireless_dev *VAR_5 = VAR_3->user_ptr[1];
 int VAR_6;

 if (!VAR_4->ops->start_p2p_device)
  return -VAR_0;

 if (VAR_5->iftype != VAR_1)
  return -VAR_0;

 if (VAR_5->p2p_started)
  return 0;

 FUNC_1(&VAR_4->devlist_mtx);
 VAR_6 = FUNC_0(VAR_4, VAR_5->iftype);
 FUNC_2(&VAR_4->devlist_mtx);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5->p2p_started = 1;
 FUNC_1(&VAR_4->devlist_mtx);
 VAR_4->opencount++;
 FUNC_2(&VAR_4->devlist_mtx);

 return 0;
}
