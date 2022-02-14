
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int current_bss; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {struct nlattr** attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_gtk_rekey_data {int replay_ctr; int kck; int kek; } ;
struct TYPE_2__ {int set_rekey_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_13 ;
 int FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (struct net_device*,struct net_device*,struct cfg80211_gtk_rekey_data*) ;
 int FUNC_5 (struct wireless_dev*) ;
 int FUNC_6 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_14, struct genl_info *VAR_15)
{
 struct cfg80211_registered_device *VAR_16 = VAR_15->user_ptr[0];
 struct net_device *VAR_17 = VAR_15->user_ptr[1];
 struct wireless_dev *VAR_18 = VAR_17->ieee80211_ptr;
 struct nlattr *VAR_19[VAR_12];
 struct cfg80211_gtk_rekey_data VAR_20;
 int VAR_21;

 if (!VAR_15->attrs[VAR_5])
  return -VAR_0;

 VAR_21 = FUNC_3(VAR_19, VAR_4,
   FUNC_1(VAR_15->attrs[VAR_5]),
   FUNC_2(VAR_15->attrs[VAR_5]),
   VAR_13);
 if (VAR_21)
  return VAR_21;

 if (FUNC_2(VAR_19[VAR_10]) != VAR_11)
  return -VAR_3;
 if (FUNC_2(VAR_19[VAR_9]) != VAR_7)
  return -VAR_3;
 if (FUNC_2(VAR_19[VAR_8]) != VAR_6)
  return -VAR_3;

 FUNC_0(VAR_20.kek, FUNC_1(VAR_19[VAR_9]),
        VAR_7);
 FUNC_0(VAR_20.kck, FUNC_1(VAR_19[VAR_8]),
        VAR_6);
 FUNC_0(VAR_20.replay_ctr,
        FUNC_1(VAR_19[VAR_10]),
        VAR_11);

 FUNC_5(VAR_18);
 if (!VAR_18->current_bss) {
  VAR_21 = -VAR_1;
  goto out;
 }

 if (!VAR_16->ops->set_rekey_data) {
  VAR_21 = -VAR_2;
  goto out;
 }

 VAR_21 = FUNC_4(VAR_16, VAR_17, &VAR_20);
 out:
 FUNC_6(VAR_18);
 return VAR_21;
}
