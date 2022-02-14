
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {scalar_t__ ic_freq; int ic_flags; } ;


 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(const void *VAR_1, const void *VAR_2)
{
 const struct ieee80211_channel *VAR_3 = VAR_1;
 const struct ieee80211_channel *VAR_4 = VAR_2;

 return (VAR_3->ic_freq == VAR_4->ic_freq) ?
  (VAR_3->ic_flags & VAR_0) -
      (VAR_4->ic_flags & VAR_0) :
  VAR_3->ic_freq - VAR_4->ic_freq;
}
