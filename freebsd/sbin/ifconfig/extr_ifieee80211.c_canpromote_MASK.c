
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ieee80211_channel {int ic_flags; scalar_t__ ic_freq; } ;
struct TYPE_2__ {int ic_nchans; struct ieee80211_channel* ic_chans; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{
 const struct ieee80211_channel *VAR_4 = &VAR_0->ic_chans[VAR_1];
 u_int VAR_5;

 if ((VAR_4->ic_flags & VAR_2) != VAR_2)
  return VAR_1;

 if (VAR_1+1 < VAR_0->ic_nchans &&
     VAR_0->ic_chans[VAR_1+1].ic_freq == VAR_4->ic_freq &&
     (VAR_0->ic_chans[VAR_1+1].ic_flags & VAR_3) == VAR_3)
  return VAR_1+1;

 for (VAR_5 = 0; VAR_5 < VAR_0->ic_nchans; VAR_5++) {
  const struct ieee80211_channel *VAR_6 = &VAR_0->ic_chans[VAR_5];
  if (VAR_5 != VAR_1 &&
      VAR_6->ic_freq == VAR_4->ic_freq && (VAR_6->ic_flags & VAR_3) == VAR_3)
  return VAR_5;
 }
 return VAR_1;
}
