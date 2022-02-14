
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_maxantgain; } ;
struct ath_hal {int dummy; } ;



__attribute__((used)) static inline int
FUNC_0(struct ath_hal *VAR_0,
    const struct ieee80211_channel *VAR_1)
{

 if (! VAR_1)
  return (0);

 return (VAR_1->ic_maxantgain);
}
