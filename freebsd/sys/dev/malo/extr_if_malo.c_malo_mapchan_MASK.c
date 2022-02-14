
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int freqband; } ;
struct malo_hal_channel {TYPE_1__ flags; int channel; } ;
struct ieee80211_channel {int ic_ieee; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct malo_hal_channel *VAR_1, const struct ieee80211_channel *VAR_2)
{
 VAR_1->channel = VAR_2->ic_ieee;

 *(uint32_t *)&VAR_1->flags = 0;
 if (FUNC_0(VAR_2))
  VAR_1->flags.freqband = VAR_0;
}
