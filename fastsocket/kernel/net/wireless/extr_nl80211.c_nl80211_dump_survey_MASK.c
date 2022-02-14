
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wireless_dev {int netdev; } ;
struct survey_info {TYPE_2__* channel; } ;
struct sk_buff {int len; } ;
struct netlink_callback {int* args; TYPE_3__* nlh; int skb; } ;
struct ieee80211_channel {int flags; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_8__ {int pid; } ;
struct TYPE_7__ {int nlmsg_seq; } ;
struct TYPE_6__ {int center_freq; } ;
struct TYPE_5__ {int dump_survey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ FUNC_0 (int ) ;
 int VAR_4 ;
 struct ieee80211_channel* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cfg80211_registered_device*) ;
 int FUNC_3 (struct sk_buff*,struct netlink_callback*,struct cfg80211_registered_device**,struct wireless_dev**) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ,int ,struct survey_info*) ;
 int FUNC_5 (struct cfg80211_registered_device*,int ,int,struct survey_info*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5,
   struct netlink_callback *VAR_6)
{
 struct survey_info VAR_7;
 struct cfg80211_registered_device *VAR_8;
 struct wireless_dev *VAR_9;
 int VAR_10 = VAR_6->args[2];
 int VAR_11;

 VAR_11 = FUNC_3(VAR_5, VAR_6, &VAR_8, &VAR_9);
 if (VAR_11)
  return VAR_11;

 if (!VAR_9->netdev) {
  VAR_11 = -VAR_0;
  goto out_err;
 }

 if (!VAR_8->ops->dump_survey) {
  VAR_11 = -VAR_2;
  goto out_err;
 }

 while (1) {
  struct ieee80211_channel *VAR_12;

  VAR_11 = FUNC_5(VAR_8, VAR_9->netdev, VAR_10, &VAR_7);
  if (VAR_11 == -VAR_1)
   break;
  if (VAR_11)
   goto out_err;


  if (!VAR_7.channel) {
   VAR_11 = -VAR_0;
   goto out;
  }

  VAR_12 = FUNC_1(&VAR_8->wiphy,
          VAR_7.channel->center_freq);
  if (!VAR_12 || VAR_12->flags & VAR_3) {
   VAR_10++;
   continue;
  }

  if (FUNC_4(VAR_5,
    FUNC_0(VAR_6->skb).pid,
    VAR_6->nlh->nlmsg_seq, VAR_4,
    VAR_9->netdev, &VAR_7) < 0)
   goto out;
  VAR_10++;
 }

 out:
 VAR_6->args[2] = VAR_10;
 VAR_11 = VAR_5->len;
 out_err:
 FUNC_2(VAR_8);
 return VAR_11;
}
