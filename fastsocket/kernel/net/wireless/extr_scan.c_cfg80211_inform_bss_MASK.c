
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef void* u16 ;
struct wiphy {scalar_t__ signal_type; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int signal; int capability; int ies; int beacon_ies; void* beacon_interval; struct ieee80211_channel* channel; int bssid; } ;
struct cfg80211_internal_bss {struct cfg80211_bss pub; } ;
struct cfg80211_bss_ies {size_t len; int data; int tsf; } ;
typedef int s32 ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 struct cfg80211_internal_bss* FUNC_1 (int ,struct cfg80211_internal_bss*) ;
 struct ieee80211_channel* FUNC_2 (struct wiphy*,int const*,size_t,struct ieee80211_channel*) ;
 struct cfg80211_bss_ies* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int const*,size_t) ;
 int FUNC_5 (int ,struct cfg80211_bss_ies*) ;
 int FUNC_6 (struct wiphy*,struct ieee80211_channel*,int ) ;
 int FUNC_7 (struct cfg80211_bss*) ;
 int FUNC_8 (struct wiphy*) ;

struct cfg80211_bss*
FUNC_9(struct wiphy *VAR_3,
      struct ieee80211_channel *VAR_4,
      const u8 *VAR_5, u64 VAR_6, u16 VAR_7,
      u16 VAR_8, const u8 *VAR_9, size_t VAR_10,
      s32 VAR_11, gfp_t VAR_12)
{
 struct cfg80211_bss_ies *VAR_13;
 struct cfg80211_internal_bss VAR_14 = {}, *VAR_15;

 if (FUNC_0(!VAR_3))
  return ((void*)0);

 if (FUNC_0(VAR_3->signal_type == VAR_0 &&
   (VAR_11 < 0 || VAR_11 > 100)))
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_3, VAR_9, VAR_10, VAR_4);
 if (!VAR_4)
  return ((void*)0);

 FUNC_4(VAR_14.pub.bssid, VAR_5, VAR_1);
 VAR_14.pub.channel = VAR_4;
 VAR_14.pub.signal = VAR_11;
 VAR_14.pub.beacon_interval = VAR_8;
 VAR_14.pub.capability = VAR_7;
 VAR_13 = FUNC_3(sizeof(*VAR_13) + VAR_10, VAR_12);
 if (!VAR_13)
  return ((void*)0);
 VAR_13->len = VAR_10;
 VAR_13->tsf = VAR_6;
 FUNC_4(VAR_13->data, VAR_9, VAR_10);

 FUNC_5(VAR_14.pub.beacon_ies, VAR_13);
 FUNC_5(VAR_14.pub.ies, VAR_13);

 VAR_15 = FUNC_1(FUNC_8(VAR_3), &VAR_14);
 if (!VAR_15)
  return ((void*)0);

 if (VAR_15->pub.capability & VAR_2)
  FUNC_6(VAR_3, VAR_4, VAR_12);

 FUNC_7(&VAR_15->pub);

 return &VAR_15->pub;
}
