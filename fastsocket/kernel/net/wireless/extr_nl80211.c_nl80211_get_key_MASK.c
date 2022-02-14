
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct net_device {TYPE_2__ wiphy; int ifindex; TYPE_1__* ops; } ;
struct get_key_cookie {int idx; scalar_t__ error; struct sk_buff* msg; } ;
struct genl_info {int snd_seq; int snd_pid; scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; int ifindex; TYPE_1__* ops; } ;
struct TYPE_3__ {int get_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (void*) ;
 int VAR_16 ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int VAR_17 ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*,size_t,int ,int const*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,size_t,int) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct net_device*,struct net_device*,int,int,int const*,struct get_key_cookie*,int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_18, struct genl_info *VAR_19)
{
 struct cfg80211_registered_device *VAR_20 = VAR_19->user_ptr[0];
 int VAR_21;
 struct net_device *VAR_22 = VAR_19->user_ptr[1];
 u8 VAR_23 = 0;
 const u8 *VAR_24 = ((void*)0);
 bool VAR_25;
 struct get_key_cookie VAR_26 = {
  .error = 0,
 };
 void *VAR_27;
 struct sk_buff *VAR_28;

 if (VAR_19->attrs[VAR_8])
  VAR_23 = FUNC_7(VAR_19->attrs[VAR_8]);

 if (VAR_23 > 5)
  return -VAR_0;

 if (VAR_19->attrs[VAR_10])
  VAR_24 = FUNC_5(VAR_19->attrs[VAR_10]);

 VAR_25 = !!VAR_24;
 if (VAR_19->attrs[VAR_9]) {
  u32 VAR_29 = FUNC_6(VAR_19->attrs[VAR_9]);
  if (VAR_29 >= VAR_15)
   return -VAR_0;
  if (VAR_29 != VAR_12 &&
      VAR_29 != VAR_13)
   return -VAR_0;
  VAR_25 = VAR_29 == VAR_13;
 }

 if (!VAR_20->ops->get_key)
  return -VAR_4;

 VAR_28 = FUNC_12(VAR_14, VAR_6);
 if (!VAR_28)
  return -VAR_3;

 VAR_27 = FUNC_4(VAR_28, VAR_19->snd_pid, VAR_19->snd_seq, 0,
        VAR_11);
 if (FUNC_0(VAR_27))
  return FUNC_1(VAR_27);

 VAR_26.msg = VAR_28;
 VAR_26.idx = VAR_23;

 if (FUNC_9(VAR_28, VAR_7, VAR_22->ifindex) ||
     FUNC_10(VAR_28, VAR_8, VAR_23))
  goto nla_put_failure;
 if (VAR_24 &&
     FUNC_8(VAR_28, VAR_10, VAR_5, VAR_24))
  goto nla_put_failure;

 if (VAR_25 && VAR_24 &&
     !(VAR_20->wiphy.flags & VAR_16))
  return -VAR_2;

 VAR_21 = FUNC_13(VAR_20, VAR_22, VAR_23, VAR_25, VAR_24, &VAR_26,
      VAR_17);

 if (VAR_21)
  goto free_msg;

 if (VAR_26.error)
  goto nla_put_failure;

 FUNC_2(VAR_28, VAR_27);
 return FUNC_3(VAR_28, VAR_19);

 nla_put_failure:
 VAR_21 = -VAR_1;
 free_msg:
 FUNC_11(VAR_28);
 return VAR_21;
}
