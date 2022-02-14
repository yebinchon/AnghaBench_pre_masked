
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211_node {TYPE_1__* ni_chan; } ;
struct ieee80211_ie_vht_operation {int dummy; } ;
struct TYPE_2__ {int ic_vht_ch_freq2; int ic_vht_ch_freq1; } ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,char,int) ;

uint8_t *
FUNC_3(uint8_t *VAR_1, struct ieee80211_node *VAR_2)
{
 FUNC_2(VAR_1, '\0', sizeof(struct ieee80211_ie_vht_operation));

 VAR_1[0] = VAR_0;
 VAR_1[1] = sizeof(struct ieee80211_ie_vht_operation) - 2;
 VAR_1 += 2;


 *VAR_1++ = FUNC_1(VAR_2->ni_chan);


 *VAR_1++ = VAR_2->ni_chan->ic_vht_ch_freq1;


 *VAR_1++ = VAR_2->ni_chan->ic_vht_ch_freq2;


 FUNC_0(VAR_1, 0xfffc);

 return (VAR_1);
}
