
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wireless_dev {scalar_t__ crit_proto_nlportid; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__ snd_pid; scalar_t__* attrs; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {scalar_t__ crit_proto_nlportid; TYPE_1__* ops; } ;
typedef enum nl80211_crit_proto_id { ____Placeholder_nl80211_crit_proto_id } nl80211_crit_proto_id ;
struct TYPE_2__ {int crit_proto_stop; int crit_proto_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wireless_dev*,struct wireless_dev*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_9,
           struct genl_info *VAR_10)
{
 struct cfg80211_registered_device *VAR_11 = VAR_10->user_ptr[0];
 struct wireless_dev *VAR_12 = VAR_10->user_ptr[1];
 enum nl80211_crit_proto_id VAR_13 = VAR_7;
 u16 VAR_14;
 int VAR_15;

 if (!VAR_11->ops->crit_proto_start)
  return -VAR_2;

 if (FUNC_0(!VAR_11->ops->crit_proto_stop))
  return -VAR_1;

 if (VAR_11->crit_proto_nlportid)
  return -VAR_0;


 if (VAR_10->attrs[VAR_4])
  VAR_13 = FUNC_1(VAR_10->attrs[VAR_4]);

 if (VAR_13 >= VAR_8)
  return -VAR_1;


 if (!VAR_10->attrs[VAR_5])
  return -VAR_1;

 VAR_14 =
  FUNC_1(VAR_10->attrs[VAR_5]);

 if (VAR_14 > VAR_6)
  return -VAR_3;

 VAR_15 = FUNC_2(VAR_11, VAR_12, VAR_13, VAR_14);
 if (!VAR_15)
  VAR_11->crit_proto_nlportid = VAR_10->snd_pid;

 return VAR_15;
}
