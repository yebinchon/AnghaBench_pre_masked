
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {TYPE_1__* conn; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
struct TYPE_4__ {int bssid; } ;
struct cfg80211_internal_bss {TYPE_2__ pub; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int *,int *,int ,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 struct cfg80211_registered_device* FUNC_3 (int ) ;

void FUNC_4(struct net_device *VAR_3,
      struct cfg80211_internal_bss *VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_3->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_6 = FUNC_3(VAR_5->wiphy);
 u8 VAR_7[VAR_1];

 FUNC_0(VAR_5);

 if (!VAR_5->conn)
  return;

 if (VAR_5->conn->state == VAR_0)
  return;






 FUNC_2(VAR_7, VAR_4->pub.bssid, VAR_1);

 FUNC_1(VAR_6, VAR_3, VAR_7, ((void*)0), 0,
          VAR_2, 0);
}
