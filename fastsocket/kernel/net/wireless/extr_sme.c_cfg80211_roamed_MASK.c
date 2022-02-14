
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {scalar_t__ sme_state; int ssid_len; int ssid; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 struct cfg80211_bss* FUNC_2 (int ,struct ieee80211_channel*,int const*,int ,int ,int ,int ) ;
 int FUNC_3 (struct net_device*,struct cfg80211_bss*,int const*,size_t,int const*,size_t,int ) ;

void FUNC_4(struct net_device *VAR_2,
       struct ieee80211_channel *VAR_3,
       const u8 *VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       const u8 *VAR_7, size_t VAR_8, gfp_t VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_2->ieee80211_ptr;
 struct cfg80211_bss *VAR_11;

 FUNC_0(VAR_10->sme_state != VAR_0);

 VAR_11 = FUNC_2(VAR_10->wiphy, VAR_3, VAR_4, VAR_10->ssid,
          VAR_10->ssid_len, VAR_1,
          VAR_1);
 if (FUNC_1(!VAR_11))
  return;

 FUNC_3(VAR_2, VAR_11, VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9);
}
