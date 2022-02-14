
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct station_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; } ;
struct genl_info {int snd_seq; int snd_pid; int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef int sinfo ;
struct TYPE_2__ {int get_station; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,struct genl_info*) ;
 int FUNC_1 (struct station_info*,int ,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ,struct net_device*,struct net_device*,int *,struct station_info*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net_device*,struct net_device*,int *,struct station_info*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = VAR_8->user_ptr[0];
 struct net_device *VAR_10 = VAR_8->user_ptr[1];
 struct station_info VAR_11;
 struct sk_buff *VAR_12;
 u8 *VAR_13 = ((void*)0);
 int VAR_14;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));

 if (!VAR_8->attrs[VAR_5])
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_8->attrs[VAR_5]);

 if (!VAR_9->ops->get_station)
  return -VAR_3;

 VAR_14 = FUNC_6(VAR_9, VAR_10, VAR_13, &VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_12 = FUNC_5(VAR_6, VAR_4);
 if (!VAR_12)
  return -VAR_2;

 if (FUNC_2(VAR_12, VAR_8->snd_pid, VAR_8->snd_seq, 0,
     VAR_9, VAR_10, VAR_13, &VAR_11) < 0) {
  FUNC_4(VAR_12);
  return -VAR_1;
 }

 return FUNC_0(VAR_12, VAR_8);
}
