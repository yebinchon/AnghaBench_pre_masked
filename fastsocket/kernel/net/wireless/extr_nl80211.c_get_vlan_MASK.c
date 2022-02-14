
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct genl_info {struct nlattr** attrs; } ;
struct cfg80211_registered_device {int wiphy; } ;
struct TYPE_2__ {scalar_t__ iftype; int * wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct net_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct genl_info*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct nlattr*) ;

__attribute__((used)) static struct net_device *FUNC_6(struct genl_info *VAR_7,
       struct cfg80211_registered_device *VAR_8)
{
 struct nlattr *VAR_9 = VAR_7->attrs[VAR_3];
 struct net_device *VAR_10;
 int VAR_11;

 if (!VAR_9)
  return ((void*)0);

 VAR_10 = FUNC_1(FUNC_3(VAR_7), FUNC_5(VAR_9));
 if (!VAR_10)
  return FUNC_0(-VAR_2);

 if (!VAR_10->ieee80211_ptr || VAR_10->ieee80211_ptr->wiphy != &VAR_8->wiphy) {
  VAR_11 = -VAR_0;
  goto error;
 }

 if (VAR_10->ieee80211_ptr->iftype != VAR_5 &&
     VAR_10->ieee80211_ptr->iftype != VAR_4 &&
     VAR_10->ieee80211_ptr->iftype != VAR_6) {
  VAR_11 = -VAR_0;
  goto error;
 }

 if (!FUNC_4(VAR_10)) {
  VAR_11 = -VAR_1;
  goto error;
 }

 return VAR_10;
 error:
 FUNC_2(VAR_10);
 return FUNC_0(VAR_11);
}
