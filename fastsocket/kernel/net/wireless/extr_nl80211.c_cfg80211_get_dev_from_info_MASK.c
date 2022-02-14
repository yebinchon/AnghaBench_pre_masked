
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct genl_info {int attrs; } ;
struct cfg80211_registered_device {int mtx; } ;


 int FUNC_0 (struct cfg80211_registered_device*) ;
 struct cfg80211_registered_device* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct cfg80211_registered_device *
FUNC_4(struct net *VAR_1, struct genl_info *VAR_2)
{
 struct cfg80211_registered_device *VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = FUNC_1(VAR_1, VAR_2->attrs);




 if (!FUNC_0(VAR_3))
  FUNC_2(&VAR_3->mtx);

 FUNC_3(&VAR_0);

 return VAR_3;
}
