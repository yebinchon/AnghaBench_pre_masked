
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int flags; scalar_t__ max_remain_on_channel_duration; } ;
struct wireless_dev {TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; int * attrs; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct cfg80211_chan_def {int chan; } ;
struct TYPE_3__ {int remain_on_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (void*) ;
 int VAR_11 ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int FUNC_4 (struct wireless_dev*,struct genl_info*,struct cfg80211_chan_def*) ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct wireless_dev*,struct wireless_dev*,int ,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_12,
         struct genl_info *VAR_13)
{
 struct cfg80211_registered_device *VAR_14 = VAR_13->user_ptr[0];
 struct wireless_dev *VAR_15 = VAR_13->user_ptr[1];
 struct cfg80211_chan_def VAR_16;
 struct sk_buff *VAR_17;
 void *VAR_18;
 u64 VAR_19;
 u32 VAR_20;
 int VAR_21;

 if (!VAR_13->attrs[VAR_7] ||
     !VAR_13->attrs[VAR_6])
  return -VAR_0;

 VAR_20 = FUNC_6(VAR_13->attrs[VAR_6]);

 if (!VAR_14->ops->remain_on_channel ||
     !(VAR_14->wiphy.flags & VAR_11))
  return -VAR_3;





 if (VAR_20 < VAR_9 ||
     VAR_20 > VAR_14->wiphy.max_remain_on_channel_duration)
  return -VAR_0;

 VAR_21 = FUNC_4(VAR_14, VAR_13, &VAR_16);
 if (VAR_21)
  return VAR_21;

 VAR_17 = FUNC_9(VAR_10, VAR_4);
 if (!VAR_17)
  return -VAR_2;

 VAR_18 = FUNC_5(VAR_17, VAR_13->snd_pid, VAR_13->snd_seq, 0,
        VAR_8);

 if (FUNC_0(VAR_18)) {
  VAR_21 = FUNC_1(VAR_18);
  goto free_msg;
 }

 VAR_21 = FUNC_10(VAR_14, VAR_15, VAR_16.chan,
         VAR_20, &VAR_19);

 if (VAR_21)
  goto free_msg;

 if (FUNC_7(VAR_17, VAR_5, VAR_19))
  goto nla_put_failure;

 FUNC_2(VAR_17, VAR_18);

 return FUNC_3(VAR_17, VAR_13);

 nla_put_failure:
 VAR_21 = -VAR_1;
 free_msg:
 FUNC_8(VAR_17);
 return VAR_21;
}
