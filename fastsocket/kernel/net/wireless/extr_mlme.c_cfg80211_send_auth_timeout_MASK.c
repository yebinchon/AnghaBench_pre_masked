
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {scalar_t__ sme_state; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int const*,int *,int ,int *,int ,int ,int,int *) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int const*,int ) ;
 int FUNC_2 (struct net_device*,int const*) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_5 (struct wiphy*) ;

void FUNC_6(struct net_device *VAR_3, const u8 *VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_3->ieee80211_ptr;
 struct wiphy *VAR_6 = VAR_5->wiphy;
 struct cfg80211_registered_device *VAR_7 = FUNC_5(VAR_6);

 FUNC_2(VAR_3, VAR_4);
 FUNC_3(VAR_5);

 FUNC_1(VAR_7, VAR_3, VAR_4, VAR_1);
 if (VAR_5->sme_state == VAR_0)
  FUNC_0(VAR_3, VAR_4, ((void*)0), 0, ((void*)0), 0,
       VAR_2,
       0, ((void*)0));

 FUNC_4(VAR_5);
}
