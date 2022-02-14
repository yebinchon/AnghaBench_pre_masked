
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int mcast_rate; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_1, struct net_device *VAR_2,
        int VAR_3[VAR_0])
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_4->vif.bss_conf.mcast_rate, VAR_3,
        sizeof(int) * VAR_0);

 return 0;
}
