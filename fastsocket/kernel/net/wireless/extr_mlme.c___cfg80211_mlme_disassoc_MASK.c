
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wireless_dev {scalar_t__ sme_state; TYPE_2__* current_bss; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
struct cfg80211_disassoc_request {int local_state_change; int ie_len; TYPE_1__* bss; int const* ie; int reason_code; } ;
typedef int req ;
struct TYPE_3__ {int bssid; } ;
struct TYPE_4__ {TYPE_1__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int const*) ;
 int FUNC_3 (struct cfg80211_disassoc_request*,int ,int) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_disassoc_request*) ;

__attribute__((used)) static int FUNC_5(struct cfg80211_registered_device *VAR_2,
        struct net_device *VAR_3, const u8 *VAR_4,
        const u8 *VAR_5, int VAR_6, u16 VAR_7,
        bool VAR_8)
{
 struct wireless_dev *VAR_9 = VAR_3->ieee80211_ptr;
 struct cfg80211_disassoc_request VAR_10;

 FUNC_0(VAR_9);

 if (VAR_9->sme_state != VAR_0)
  return -VAR_1;

 if (FUNC_1(!VAR_9->current_bss, "sme_state=%d\n", VAR_9->sme_state))
  return -VAR_1;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.reason_code = VAR_7;
 VAR_10.local_state_change = VAR_8;
 VAR_10.ie = VAR_5;
 VAR_10.ie_len = VAR_6;
 if (FUNC_2(VAR_9->current_bss->pub.bssid, VAR_4))
  VAR_10.bss = &VAR_9->current_bss->pub;
 else
  return -VAR_1;

 return FUNC_4(VAR_2, VAR_3, &VAR_10);
}
