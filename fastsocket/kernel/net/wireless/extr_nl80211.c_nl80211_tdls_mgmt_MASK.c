
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct net_device {TYPE_2__* ops; TYPE_1__ wiphy; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ops; TYPE_1__ wiphy; } ;
struct TYPE_4__ {int tdls_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,struct net_device*,int *,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct cfg80211_registered_device *VAR_10 = VAR_9->user_ptr[0];
 struct net_device *VAR_11 = VAR_9->user_ptr[1];
 u8 VAR_12, VAR_13;
 u16 VAR_14;
 u8 *VAR_15;

 if (!(VAR_10->wiphy.flags & VAR_7) ||
     !VAR_10->ops->tdls_mgmt)
  return -VAR_1;

 if (!VAR_9->attrs[VAR_5] ||
     !VAR_9->attrs[VAR_4] ||
     !VAR_9->attrs[VAR_6] ||
     !VAR_9->attrs[VAR_2] ||
     !VAR_9->attrs[VAR_3])
  return -VAR_0;

 VAR_15 = FUNC_0(VAR_9->attrs[VAR_3]);
 VAR_12 = FUNC_2(VAR_9->attrs[VAR_5]);
 VAR_14 = FUNC_1(VAR_9->attrs[VAR_4]);
 VAR_13 = FUNC_2(VAR_9->attrs[VAR_6]);

 return FUNC_4(VAR_10, VAR_11, VAR_15, VAR_12,
         VAR_13, VAR_14,
         FUNC_0(VAR_9->attrs[VAR_2]),
         FUNC_3(VAR_9->attrs[VAR_2]));
}
