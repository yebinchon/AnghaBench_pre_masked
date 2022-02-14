
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ieee80211_channel {scalar_t__ ic_freq; int ic_flags; int ic_vht_ch_freq1; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

uint32_t
FUNC_4(const struct ieee80211_channel *VAR_0)
{





 if (FUNC_2(VAR_0))
  return (FUNC_3(VAR_0->ic_vht_ch_freq1, VAR_0->ic_flags));

 if (FUNC_1(VAR_0)) {
  return (VAR_0->ic_freq + 10);
 }
 if (FUNC_0(VAR_0)) {
  return (VAR_0->ic_freq - 10);
 }

 return (VAR_0->ic_freq);
}
