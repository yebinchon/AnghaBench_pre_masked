
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_channel {scalar_t__ ic_vht_ch_freq2; int ic_flags; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 int FUNC_1 (scalar_t__,int ) ;

uint32_t
FUNC_2(const struct ieee80211_channel *VAR_0)
{

 if (FUNC_0(VAR_0) && (VAR_0->ic_vht_ch_freq2 != 0))
  return (FUNC_1(VAR_0->ic_vht_ch_freq2, VAR_0->ic_flags));

 return (0);
}
