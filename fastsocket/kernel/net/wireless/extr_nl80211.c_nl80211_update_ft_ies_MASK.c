
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_update_ft_ies_params {int ie_len; int ie; int md; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef int ft_params ;
struct TYPE_2__ {int update_ft_ies; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfg80211_update_ft_ies_params*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,struct net_device*,struct cfg80211_update_ft_ies_params*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = VAR_5->user_ptr[0];
 struct cfg80211_update_ft_ies_params VAR_7;
 struct net_device *VAR_8 = VAR_5->user_ptr[1];

 if (!VAR_6->ops->update_ft_ies)
  return -VAR_1;

 if (!VAR_5->attrs[VAR_3] ||
     !FUNC_0(VAR_5->attrs[VAR_2]))
  return -VAR_0;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.md = FUNC_3(VAR_5->attrs[VAR_3]);
 VAR_7.ie = FUNC_2(VAR_5->attrs[VAR_2]);
 VAR_7.ie_len = FUNC_4(VAR_5->attrs[VAR_2]);

 return FUNC_5(VAR_6, VAR_8, &VAR_7);
}
