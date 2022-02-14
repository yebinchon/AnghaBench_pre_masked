
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ ps; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int snd_seq; int snd_pid; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
typedef enum nl80211_ps_state { ____Placeholder_nl80211_ps_state } nl80211_ps_state ;
struct TYPE_2__ {int set_power_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct cfg80211_registered_device *VAR_11 = VAR_10->user_ptr[0];
 enum nl80211_ps_state VAR_12;
 struct wireless_dev *VAR_13;
 struct net_device *VAR_14 = VAR_10->user_ptr[1];
 struct sk_buff *VAR_15;
 void *VAR_16;
 int VAR_17;

 VAR_13 = VAR_14->ieee80211_ptr;

 if (!VAR_11->ops->set_power_mgmt)
  return -VAR_2;

 VAR_15 = FUNC_5(VAR_8, VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_2(VAR_15, VAR_10->snd_pid, VAR_10->snd_seq, 0,
        VAR_5);
 if (!VAR_16) {
  VAR_17 = -VAR_0;
  goto free_msg;
 }

 if (VAR_13->ps)
  VAR_12 = VAR_7;
 else
  VAR_12 = VAR_6;

 if (FUNC_3(VAR_15, VAR_4, VAR_12))
  goto nla_put_failure;

 FUNC_0(VAR_15, VAR_16);
 return FUNC_1(VAR_15, VAR_10);

 nla_put_failure:
 VAR_17 = -VAR_0;
 free_msg:
 FUNC_4(VAR_15);
 return VAR_17;
}
