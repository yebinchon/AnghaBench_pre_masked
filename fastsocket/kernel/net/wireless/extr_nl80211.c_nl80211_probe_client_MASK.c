
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int * attrs; int snd_seq; int snd_pid; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int probe_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct net_device*,struct net_device*,int const*,int *) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_11,
    struct genl_info *VAR_12)
{
 struct cfg80211_registered_device *VAR_13 = VAR_12->user_ptr[0];
 struct net_device *VAR_14 = VAR_12->user_ptr[1];
 struct wireless_dev *VAR_15 = VAR_14->ieee80211_ptr;
 struct sk_buff *VAR_16;
 void *VAR_17;
 const u8 *VAR_18;
 u64 VAR_19;
 int VAR_20;

 if (VAR_15->iftype != VAR_8 &&
     VAR_15->iftype != VAR_9)
  return -VAR_3;

 if (!VAR_12->attrs[VAR_6])
  return -VAR_0;

 if (!VAR_13->ops->probe_client)
  return -VAR_3;

 VAR_16 = FUNC_8(VAR_10, VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_17 = FUNC_4(VAR_16, VAR_12->snd_pid, VAR_12->snd_seq, 0,
        VAR_7);

 if (FUNC_0(VAR_17)) {
  VAR_20 = FUNC_1(VAR_17);
  goto free_msg;
 }

 VAR_18 = FUNC_5(VAR_12->attrs[VAR_6]);

 VAR_20 = FUNC_9(VAR_13, VAR_14, VAR_18, &VAR_19);
 if (VAR_20)
  goto free_msg;

 if (FUNC_6(VAR_16, VAR_5, VAR_19))
  goto nla_put_failure;

 FUNC_2(VAR_16, VAR_17);

 return FUNC_3(VAR_16, VAR_12);

 nla_put_failure:
 VAR_20 = -VAR_1;
 free_msg:
 FUNC_7(VAR_16);
 return VAR_20;
}
