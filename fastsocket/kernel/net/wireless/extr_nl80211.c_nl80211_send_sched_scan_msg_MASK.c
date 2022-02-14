
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_3,
       struct cfg80211_registered_device *VAR_4,
       struct net_device *VAR_5,
       u32 VAR_6, u32 VAR_7, int VAR_8, u32 VAR_9)
{
 void *VAR_10;

 VAR_10 = FUNC_2(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
 if (!VAR_10)
  return -1;

 if (FUNC_3(VAR_3, VAR_2, VAR_4->wiphy_idx) ||
     FUNC_3(VAR_3, VAR_1, VAR_5->ifindex))
  goto nla_put_failure;

 return FUNC_1(VAR_3, VAR_10);

 nla_put_failure:
 FUNC_0(VAR_3, VAR_10);
 return -VAR_0;
}
