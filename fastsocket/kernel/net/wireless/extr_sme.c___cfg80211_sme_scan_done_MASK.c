
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {scalar_t__ sme_state; TYPE_2__* conn; int netdev; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int conn_work; int wiphy; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_3__ {int bssid; } ;
struct TYPE_4__ {scalar_t__ state; TYPE_1__ params; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *,int ,int *,int ,int ,int,int *) ;
 struct cfg80211_bss* FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (int *,struct cfg80211_bss*) ;
 int FUNC_4 (int *) ;
 struct cfg80211_registered_device* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_4->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_6 = FUNC_5(VAR_5->wiphy);
 struct cfg80211_bss *VAR_7;

 FUNC_0(VAR_5);

 if (VAR_5->sme_state != VAR_2)
  return;

 if (!VAR_5->conn)
  return;

 if (VAR_5->conn->state != VAR_0 &&
     VAR_5->conn->state != VAR_1)
  return;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_3(&VAR_6->wiphy, VAR_7);
 } else {

  if (VAR_5->conn->state == VAR_1)
   FUNC_4(&VAR_6->conn_work);
  else
   FUNC_1(
     VAR_5->netdev,
     VAR_5->conn->params.bssid,
     ((void*)0), 0, ((void*)0), 0,
     VAR_3,
     0, ((void*)0));
 }
}
