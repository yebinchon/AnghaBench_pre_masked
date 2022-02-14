
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int * attrs; struct cfg80211_registered_device** user_ptr; } ;
struct cfg80211_registered_device {int wiphy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net*) ;
 size_t VAR_1 ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net*) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct net*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = VAR_3->user_ptr[0];
 struct net *VAR_5;
 int VAR_6;
 u32 VAR_7;

 if (!VAR_3->attrs[VAR_1])
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_3->attrs[VAR_1]);

 VAR_5 = FUNC_3(VAR_7);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = 0;


 if (!FUNC_4(FUNC_7(&VAR_4->wiphy), VAR_5))
  VAR_6 = FUNC_2(VAR_4, VAR_5);

 FUNC_6(VAR_5);
 return VAR_6;
}
