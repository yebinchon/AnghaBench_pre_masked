
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* conn; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct cfg80211_registered_device {int conn_work; } ;
struct TYPE_2__ {int prev_bssid_valid; int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct cfg80211_registered_device* FUNC_2 (struct wiphy*) ;

bool FUNC_3(struct wireless_dev *VAR_1)
{
 struct wiphy *VAR_2 = VAR_1->wiphy;
 struct cfg80211_registered_device *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_0(!VAR_1->conn))
  return 0;

 if (!VAR_1->conn->prev_bssid_valid)
  return 0;





 VAR_1->conn->prev_bssid_valid = 0;
 VAR_1->conn->state = VAR_0;
 FUNC_1(&VAR_3->conn_work);

 return 1;
}
