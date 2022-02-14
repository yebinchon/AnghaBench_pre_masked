
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_5__ {int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; int wiphy; int sme_state; TYPE_2__* current_bss; int ssid_len; int ssid; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_6__ {int pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (struct cfg80211_bss*) ;
 struct cfg80211_bss* FUNC_2 (int ,int *,int const*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct wireless_dev*) ;
 int FUNC_7 (int ,int const*,int ) ;
 int FUNC_8 (union iwreq_data*,int ,int) ;
 int FUNC_9 (int ,struct net_device*,int const*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct net_device*,int ,union iwreq_data*,int *) ;

void FUNC_12(struct net_device *VAR_6, const u8 *VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_6->ieee80211_ptr;
 struct cfg80211_bss *VAR_9;




 if (FUNC_0(VAR_8->iftype != VAR_3))
  return;

 if (!VAR_8->ssid_len)
  return;

 VAR_9 = FUNC_2(VAR_8->wiphy, ((void*)0), VAR_7,
          VAR_8->ssid, VAR_8->ssid_len,
          VAR_5, VAR_5);

 if (FUNC_0(!VAR_9))
  return;

 if (VAR_8->current_bss) {
  FUNC_5(VAR_8->current_bss);
  FUNC_4(VAR_8->wiphy, &VAR_8->current_bss->pub);
 }

 FUNC_3(FUNC_1(VAR_9));
 VAR_8->current_bss = FUNC_1(VAR_9);

 VAR_8->sme_state = VAR_0;
 FUNC_6(VAR_8);

 FUNC_9(FUNC_10(VAR_8->wiphy), VAR_6, VAR_7,
    VAR_2);





}
