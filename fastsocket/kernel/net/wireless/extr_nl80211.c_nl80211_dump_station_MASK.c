
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {int netdev; } ;
struct station_info {int dummy; } ;
struct sk_buff {int len; } ;
struct netlink_callback {int* args; TYPE_2__* nlh; int skb; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef int sinfo ;
struct TYPE_6__ {int pid; } ;
struct TYPE_5__ {int nlmsg_seq; } ;
struct TYPE_4__ {int dump_station; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct station_info*,int ,int) ;
 int FUNC_2 (struct cfg80211_registered_device*) ;
 int FUNC_3 (struct sk_buff*,struct netlink_callback*,struct cfg80211_registered_device**,struct wireless_dev**) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ,struct cfg80211_registered_device*,int ,int *,struct station_info*) ;
 int FUNC_5 (struct cfg80211_registered_device*,int ,int,int *,struct station_info*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5,
    struct netlink_callback *VAR_6)
{
 struct station_info VAR_7;
 struct cfg80211_registered_device *VAR_8;
 struct wireless_dev *VAR_9;
 u8 VAR_10[VAR_3];
 int VAR_11 = VAR_6->args[2];
 int VAR_12;

 VAR_12 = FUNC_3(VAR_5, VAR_6, &VAR_8, &VAR_9);
 if (VAR_12)
  return VAR_12;

 if (!VAR_9->netdev) {
  VAR_12 = -VAR_0;
  goto out_err;
 }

 if (!VAR_8->ops->dump_station) {
  VAR_12 = -VAR_2;
  goto out_err;
 }

 while (1) {
  FUNC_1(&VAR_7, 0, sizeof(VAR_7));
  VAR_12 = FUNC_5(VAR_8, VAR_9->netdev, VAR_11,
     VAR_10, &VAR_7);
  if (VAR_12 == -VAR_1)
   break;
  if (VAR_12)
   goto out_err;

  if (FUNC_4(VAR_5,
    FUNC_0(VAR_6->skb).pid,
    VAR_6->nlh->nlmsg_seq, VAR_4,
    VAR_8, VAR_9->netdev, VAR_10,
    &VAR_7) < 0)
   goto out;

  VAR_11++;
 }


 out:
 VAR_6->args[2] = VAR_11;
 VAR_12 = VAR_5->len;
 out_err:
 FUNC_2(VAR_8);

 return VAR_12;
}
