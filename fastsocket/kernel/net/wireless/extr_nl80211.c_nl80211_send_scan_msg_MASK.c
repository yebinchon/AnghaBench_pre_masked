
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {TYPE_1__* netdev; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,struct cfg80211_registered_device*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_4,
     struct cfg80211_registered_device *VAR_5,
     struct wireless_dev *VAR_6,
     u32 VAR_7, u32 VAR_8, int VAR_9,
     u32 VAR_10)
{
 void *VAR_11;

 VAR_11 = FUNC_3(VAR_4, VAR_7, VAR_8, VAR_9, VAR_10);
 if (!VAR_11)
  return -1;

 if (FUNC_4(VAR_4, VAR_3, VAR_5->wiphy_idx) ||
     (VAR_6->netdev && FUNC_4(VAR_4, VAR_1,
      VAR_6->netdev->ifindex)) ||
     FUNC_5(VAR_4, VAR_2, FUNC_6(VAR_6)))
  goto nla_put_failure;


 FUNC_2(VAR_4, VAR_5);

 return FUNC_1(VAR_4, VAR_11);

 nla_put_failure:
 FUNC_0(VAR_4, VAR_11);
 return -VAR_0;
}
