
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int del_mpath; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,struct net_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = VAR_3->user_ptr[0];
 struct net_device *VAR_5 = VAR_3->user_ptr[1];
 u8 *VAR_6 = ((void*)0);

 if (VAR_3->attrs[VAR_1])
  VAR_6 = FUNC_0(VAR_3->attrs[VAR_1]);

 if (!VAR_4->ops->del_mpath)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_5, VAR_6);
}
