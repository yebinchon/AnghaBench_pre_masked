
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cfg80211_chan_def {scalar_t__ chan; scalar_t__ width; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cfg80211_chan_def const*,struct cfg80211_chan_def const*) ;
 int FUNC_2 (struct cfg80211_chan_def const*,scalar_t__*,scalar_t__*) ;

const struct cfg80211_chan_def *
FUNC_3(const struct cfg80211_chan_def *VAR_2,
       const struct cfg80211_chan_def *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;


 if (FUNC_1(VAR_2, VAR_3))
  return VAR_2;


 if (VAR_2->chan != VAR_3->chan)
  return ((void*)0);





 if (VAR_2->width == VAR_3->width)
  return ((void*)0);

 if (VAR_2->width == VAR_1 ||
     VAR_2->width == VAR_0)
  return VAR_3;

 if (VAR_3->width == VAR_1 ||
     VAR_3->width == VAR_0)
  return VAR_2;

 FUNC_2(VAR_2, &VAR_4, &VAR_5);
 FUNC_2(VAR_3, &VAR_6, &VAR_7);

 if (VAR_4 != VAR_6)
  return ((void*)0);

 FUNC_0(!VAR_5 && !VAR_7);
 if (VAR_5 && VAR_7 && VAR_5 != VAR_7)
  return ((void*)0);

 if (VAR_2->width > VAR_3->width)
  return VAR_2;
 return VAR_3;
}
