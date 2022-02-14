
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ieee80211_channel {int ic_ieee; } ;
struct TYPE_4__ {int ChnlWidth; int ExtChnlOffset; int FreqBand; } ;
struct TYPE_5__ {TYPE_1__ channelFlags; int channel; } ;
typedef TYPE_2__ MWL_HAL_CHANNEL ;


 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(MWL_HAL_CHANNEL *VAR_6, const struct ieee80211_channel *VAR_7)
{
 VAR_6->channel = VAR_7->ic_ieee;

 *(uint32_t *)&VAR_6->channelFlags = 0;
 if (FUNC_0(VAR_7))
  VAR_6->channelFlags.FreqBand = VAR_4;
 else if (FUNC_1(VAR_7))
  VAR_6->channelFlags.FreqBand = VAR_5;
 if (FUNC_2(VAR_7)) {
  VAR_6->channelFlags.ChnlWidth = VAR_1;
  if (FUNC_3(VAR_7))
   VAR_6->channelFlags.ExtChnlOffset = VAR_2;
  else
   VAR_6->channelFlags.ExtChnlOffset = VAR_3;
 } else
  VAR_6->channelFlags.ChnlWidth = VAR_0;

}
