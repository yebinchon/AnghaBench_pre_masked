
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {void* tx_highest; void* tx_mcs_map; void* rx_highest; void* rx_mcs_map; } ;
struct ieee80211_node {TYPE_1__ ni_vht_mcsinfo; int ni_vhtcap; } ;


 void* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

void
FUNC_2(struct ieee80211_node *VAR_0, const uint8_t *VAR_1)
{


 VAR_0->ni_vhtcap = FUNC_1(VAR_1 + 2);


 VAR_0->ni_vht_mcsinfo.rx_mcs_map = FUNC_0(VAR_1 + 6);
 VAR_0->ni_vht_mcsinfo.rx_highest = FUNC_0(VAR_1 + 8);
 VAR_0->ni_vht_mcsinfo.tx_mcs_map = FUNC_0(VAR_1 + 10);
 VAR_0->ni_vht_mcsinfo.tx_highest = FUNC_0(VAR_1 + 12);
}
