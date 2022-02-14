
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int flags; unsigned int max_remain_on_channel_duration; } ;
struct wireless_dev {int iftype; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int* attrs; int snd_seq; int snd_pid; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {int iftype; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct cfg80211_chan_def {int chan; } ;
struct TYPE_3__ {int mgmt_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (void*) ;
 int VAR_14 ;
 int FUNC_2 (struct wireless_dev*,struct wireless_dev*,int ,int,unsigned int,int ,int ,int,int,int *) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 int FUNC_5 (struct wireless_dev*,struct genl_info*,struct cfg80211_chan_def*) ;
 void* FUNC_6 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 unsigned int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_15, struct genl_info *VAR_16)
{
 struct cfg80211_registered_device *VAR_17 = VAR_16->user_ptr[0];
 struct wireless_dev *VAR_18 = VAR_16->user_ptr[1];
 struct cfg80211_chan_def VAR_19;
 int VAR_20;
 void *VAR_21 = ((void*)0);
 u64 VAR_22;
 struct sk_buff *VAR_23 = ((void*)0);
 unsigned int VAR_24 = 0;
 bool VAR_25, VAR_26, VAR_27;

 VAR_27 = VAR_16->attrs[VAR_6];

 if (!VAR_16->attrs[VAR_8])
  return -VAR_0;

 if (!VAR_17->ops->mgmt_tx)
  return -VAR_3;

 switch (VAR_18->iftype) {
 case 128:
 case 135:
 case 131:
 case 134:
 case 133:
 case 132:
 case 129:
 case 130:
  break;
 default:
  return -VAR_3;
 }

 if (VAR_16->attrs[VAR_7]) {
  if (!(VAR_17->wiphy.flags & VAR_14))
   return -VAR_0;
  VAR_24 = FUNC_9(VAR_16->attrs[VAR_7]);





  if (VAR_24 < VAR_12 ||
      VAR_24 > VAR_17->wiphy.max_remain_on_channel_duration)
   return -VAR_0;

 }

 VAR_25 = VAR_16->attrs[VAR_9];

 if (VAR_25 && !(VAR_17->wiphy.flags & VAR_14))
  return -VAR_0;

 VAR_26 = FUNC_8(VAR_16->attrs[VAR_10]);

 VAR_20 = FUNC_5(VAR_17, VAR_16, &VAR_19);
 if (VAR_20)
  return VAR_20;

 if (!VAR_27) {
  VAR_23 = FUNC_13(VAR_13, VAR_4);
  if (!VAR_23)
   return -VAR_2;

  VAR_21 = FUNC_6(VAR_23, VAR_16->snd_pid, VAR_16->snd_seq, 0,
         VAR_11);

  if (FUNC_0(VAR_21)) {
   VAR_20 = FUNC_1(VAR_21);
   goto free_msg;
  }
 }

 VAR_20 = FUNC_2(VAR_17, VAR_18, VAR_19.chan, VAR_25, VAR_24,
        FUNC_7(VAR_16->attrs[VAR_8]),
        FUNC_10(VAR_16->attrs[VAR_8]),
        VAR_26, VAR_27, &VAR_22);
 if (VAR_20)
  goto free_msg;

 if (VAR_23) {
  if (FUNC_11(VAR_23, VAR_5, VAR_22))
   goto nla_put_failure;

  FUNC_3(VAR_23, VAR_21);
  return FUNC_4(VAR_23, VAR_16);
 }

 return 0;

 nla_put_failure:
 VAR_20 = -VAR_1;
 free_msg:
 FUNC_12(VAR_23);
 return VAR_20;
}
