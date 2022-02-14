
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;


 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct cfg80211_registered_device *VAR_0,
   struct net_device *VAR_1,
   u16 VAR_2, bool VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1->ieee80211_ptr);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_1->ieee80211_ptr);

 return VAR_4;
}
