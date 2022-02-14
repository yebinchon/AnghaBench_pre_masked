
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_5__ {int key; } ;
struct key_parse {int type; TYPE_2__ p; int idx; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_4__ {int add_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct net_device*,TYPE_2__*,int ,int,int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct genl_info*,struct key_parse*) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct net_device*,struct net_device*,int ,int,int const*,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct cfg80211_registered_device *VAR_7 = VAR_6->user_ptr[0];
 int VAR_8;
 struct net_device *VAR_9 = VAR_6->user_ptr[1];
 struct key_parse VAR_10;
 const u8 *VAR_11 = ((void*)0);

 VAR_8 = FUNC_2(VAR_6, &VAR_10);
 if (VAR_8)
  return VAR_8;

 if (!VAR_10.p.key)
  return -VAR_0;

 if (VAR_6->attrs[VAR_2])
  VAR_11 = FUNC_3(VAR_6->attrs[VAR_2]);

 if (VAR_10.type == -1) {
  if (VAR_11)
   VAR_10.type = VAR_4;
  else
   VAR_10.type = VAR_3;
 }


 if (VAR_10.type != VAR_4 &&
     VAR_10.type != VAR_3)
  return -VAR_0;

 if (!VAR_7->ops->add_key)
  return -VAR_1;

 if (FUNC_0(VAR_7, &VAR_10.p, VAR_10.idx,
        VAR_10.type == VAR_4,
        VAR_11))
  return -VAR_0;

 FUNC_5(VAR_9->ieee80211_ptr);
 VAR_8 = FUNC_1(VAR_9->ieee80211_ptr);
 if (!VAR_8)
  VAR_8 = FUNC_4(VAR_7, VAR_9, VAR_10.idx,
       VAR_10.type == VAR_4,
        VAR_11, &VAR_10.p);
 FUNC_6(VAR_9->ieee80211_ptr);

 return VAR_8;
}
