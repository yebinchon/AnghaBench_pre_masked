
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_8__ {int sa_family; } ;
union iwreq_data {TYPE_2__ ap_addr; } ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ ssid_len; } ;
struct TYPE_10__ {TYPE_3__ connect; } ;
struct wireless_dev {scalar_t__ iftype; scalar_t__ sme_state; TYPE_4__ wext; TYPE_5__* conn; scalar_t__ ssid_len; TYPE_6__* current_bss; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_12__ {int pub; } ;
struct TYPE_11__ {struct TYPE_11__* ie; } ;
struct TYPE_7__ {scalar_t__ del_key; } ;


 int VAR_0 ;
 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (union iwreq_data*,int ,int) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,int ,int const*,size_t,int) ;
 int FUNC_7 (struct cfg80211_registered_device*,struct net_device*,int,int,int *) ;
 int FUNC_8 (int *) ;
 struct cfg80211_registered_device* FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*,int ,union iwreq_data*,int *) ;

void FUNC_11(struct net_device *VAR_7, const u8 *VAR_8,
        size_t VAR_9, u16 VAR_10, bool VAR_11)
{
 struct wireless_dev *VAR_12 = VAR_7->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_13 = FUNC_9(VAR_12->wiphy);
 int VAR_14;




 FUNC_0(VAR_12);

 if (FUNC_1(VAR_12->iftype != VAR_4 &&
      VAR_12->iftype != VAR_3))
  return;

 if (VAR_12->sme_state != VAR_1)
  return;

 if (VAR_12->current_bss) {
  FUNC_3(VAR_12->current_bss);
  FUNC_2(VAR_12->wiphy, &VAR_12->current_bss->pub);
 }

 VAR_12->current_bss = ((void*)0);
 VAR_12->sme_state = VAR_2;
 VAR_12->ssid_len = 0;

 if (VAR_12->conn) {
  FUNC_4(VAR_12->conn->ie);
  VAR_12->conn->ie = ((void*)0);
  FUNC_4(VAR_12->conn);
  VAR_12->conn = ((void*)0);
 }

 FUNC_6(VAR_13, VAR_7, VAR_10, VAR_8, VAR_9, VAR_11);





 if (VAR_13->ops->del_key)
  for (VAR_14 = 0; VAR_14 < 6; VAR_14++)
   FUNC_7(VAR_13, VAR_7, VAR_14, 0, ((void*)0));
 FUNC_8(&VAR_6);
}
