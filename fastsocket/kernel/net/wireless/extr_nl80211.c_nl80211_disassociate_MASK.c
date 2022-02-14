
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ iftype; } ;
struct TYPE_3__ {int disassoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct net_device*,struct net_device*,int const*,int const*,int,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct cfg80211_registered_device *VAR_10 = VAR_9->user_ptr[0];
 struct net_device *VAR_11 = VAR_9->user_ptr[1];
 const u8 *VAR_12 = ((void*)0), *VAR_13;
 int VAR_14 = 0;
 u16 VAR_15;
 bool VAR_16;

 if (!FUNC_1(VAR_9->attrs[VAR_2]))
  return -VAR_0;

 if (!VAR_9->attrs[VAR_4])
  return -VAR_0;

 if (!VAR_9->attrs[VAR_5])
  return -VAR_0;

 if (!VAR_10->ops->disassoc)
  return -VAR_1;

 if (VAR_11->ieee80211_ptr->iftype != VAR_7 &&
     VAR_11->ieee80211_ptr->iftype != VAR_6)
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_9->attrs[VAR_4]);

 VAR_15 = FUNC_3(VAR_9->attrs[VAR_5]);
 if (VAR_15 == 0) {

  return -VAR_0;
 }

 if (VAR_9->attrs[VAR_2]) {
  VAR_12 = FUNC_2(VAR_9->attrs[VAR_2]);
  VAR_14 = FUNC_4(VAR_9->attrs[VAR_2]);
 }

 VAR_16 = !!VAR_9->attrs[VAR_3];

 return FUNC_0(VAR_10, VAR_11, VAR_13, VAR_12, VAR_14, VAR_15,
          VAR_16);
}
