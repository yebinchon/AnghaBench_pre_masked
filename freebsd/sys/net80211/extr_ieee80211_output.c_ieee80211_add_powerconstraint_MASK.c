
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211vap {TYPE_2__* iv_ic; TYPE_1__* iv_bss; } ;
struct ieee80211_channel {scalar_t__ ic_maxregpower; } ;
typedef scalar_t__ int8_t ;
struct TYPE_4__ {int ic_txpowlimit; } ;
struct TYPE_3__ {struct ieee80211_channel* ni_chan; } ;


 int VAR_0 ;

__attribute__((used)) static uint8_t *
FUNC_0(uint8_t *VAR_1, struct ieee80211vap *VAR_2)
{
 const struct ieee80211_channel *VAR_3 = VAR_2->iv_bss->ni_chan;

 int8_t VAR_4 = VAR_2->iv_ic->ic_txpowlimit / 2;

 VAR_1[0] = VAR_0;
 VAR_1[1] = 1;
 VAR_1[2] = VAR_3->ic_maxregpower > VAR_4 ? VAR_3->ic_maxregpower - VAR_4 : 0;
 return VAR_1 + 3;
}
