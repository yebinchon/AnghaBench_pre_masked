
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wireless_dev {scalar_t__ sme_state; TYPE_3__* conn; scalar_t__ ssid_len; TYPE_3__* connect_keys; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_5__ {int bssid; } ;
struct TYPE_6__ {scalar_t__ state; TYPE_2__ params; struct TYPE_6__* ie; } ;
struct TYPE_4__ {int deauth; int disconnect; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*,int *,int *,int ,int *,int ,int ,int,int *) ;
 int FUNC_2 (struct net_device*,int *,int ,int ,int) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*,int ,int *,int ,int ,int) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct net_device*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,int ) ;

int FUNC_7(struct cfg80211_registered_device *VAR_8,
     struct net_device *VAR_9, u16 VAR_10, bool VAR_11)
{
 struct wireless_dev *VAR_12 = VAR_9->ieee80211_ptr;
 int VAR_13;

 FUNC_0(VAR_12);

 if (VAR_12->sme_state == VAR_4)
  return -VAR_5;

 FUNC_5(VAR_12->connect_keys);
 VAR_12->connect_keys = ((void*)0);

 if (!VAR_8->ops->disconnect) {
  if (!VAR_8->ops->deauth)
   return -VAR_6;


  if (!VAR_12->conn) {
   FUNC_4(VAR_8, VAR_9);
   goto disconnect;
  }

  if (VAR_12->sme_state == VAR_3 &&
      (VAR_12->conn->state == VAR_0 ||
       VAR_12->conn->state == VAR_1)) {
   VAR_12->sme_state = VAR_4;
   FUNC_5(VAR_12->conn->ie);
   FUNC_5(VAR_12->conn);
   VAR_12->conn = ((void*)0);
   VAR_12->ssid_len = 0;
   return 0;
  }


  VAR_13 = FUNC_3(VAR_8, VAR_9,
          VAR_12->conn->params.bssid,
          ((void*)0), 0, VAR_10, 0);
  if (VAR_13)
   return VAR_13;
 } else {
  VAR_13 = FUNC_6(VAR_8, VAR_9, VAR_10);
  if (VAR_13)
   return VAR_13;
 }

 disconnect:
 if (VAR_12->sme_state == VAR_2)
  FUNC_2(VAR_9, ((void*)0), 0, 0, 0);
 else if (VAR_12->sme_state == VAR_3)
  FUNC_1(VAR_9, ((void*)0), ((void*)0), 0, ((void*)0), 0,
       VAR_7,
       VAR_11, ((void*)0));

 return 0;
}
