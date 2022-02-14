
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_8__ {int sa_data; int sa_family; } ;
struct TYPE_7__ {size_t length; } ;
union iwreq_data {TYPE_2__ ap_addr; TYPE_1__ data; } ;
typedef int u8 ;
struct TYPE_9__ {int prev_bssid_valid; int prev_bssid; } ;
struct wireless_dev {scalar_t__ iftype; scalar_t__ sme_state; int wiphy; int netdev; TYPE_3__ wext; TYPE_4__* current_bss; } ;
struct cfg80211_bss {int bssid; } ;
struct TYPE_10__ {struct cfg80211_bss pub; } ;


 int VAR_0 ;
 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (struct cfg80211_bss*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,struct cfg80211_bss*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (union iwreq_data*,int ,int) ;
 int FUNC_8 (int ,int ,int ,int const*,size_t,int const*,size_t,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,union iwreq_data*,int const*) ;

void FUNC_11(struct wireless_dev *VAR_9,
         struct cfg80211_bss *VAR_10,
         const u8 *VAR_11, size_t VAR_12,
         const u8 *VAR_13, size_t VAR_14)
{



 FUNC_0(VAR_9);

 if (FUNC_1(VAR_9->iftype != VAR_7 &&
      VAR_9->iftype != VAR_6))
  goto out;

 if (VAR_9->sme_state != VAR_1)
  goto out;


 if (FUNC_1(!VAR_9->current_bss)) {
  goto out;
 }

 FUNC_5(VAR_9->current_bss);
 FUNC_4(VAR_9->wiphy, &VAR_9->current_bss->pub);
 VAR_9->current_bss = ((void*)0);

 FUNC_3(FUNC_2(VAR_10));
 VAR_9->current_bss = FUNC_2(VAR_10);

 FUNC_8(FUNC_9(VAR_9->wiphy), VAR_9->netdev, VAR_10->bssid,
       VAR_11, VAR_12, VAR_13, VAR_14,
       VAR_3);
 return;
out:
 FUNC_4(VAR_9->wiphy, VAR_10);
}
