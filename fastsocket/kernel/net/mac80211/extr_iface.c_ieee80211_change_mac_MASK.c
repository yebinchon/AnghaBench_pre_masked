
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct sockaddr*) ;
 scalar_t__ FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_0(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;
 int VAR_6;

 if (FUNC_2(VAR_4))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4, VAR_5->sa_data);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_5);

 if (VAR_6 == 0)
  FUNC_4(VAR_4->vif.addr, VAR_5->sa_data, VAR_1);

 return VAR_6;
}
