
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211_node {TYPE_2__* ni_vap; } ;
struct TYPE_3__ {int tx_highest; int tx_mcs_map; int rx_highest; int rx_mcs_map; } ;
struct ieee80211_ie_vhtcap {TYPE_1__ supp_mcs; int vht_cap_info; } ;
struct TYPE_4__ {scalar_t__ iv_opmode; } ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ieee80211_node*,struct ieee80211_ie_vhtcap*,int) ;
 int FUNC_3 (int*,char,int) ;

uint8_t *
FUNC_4(uint8_t *VAR_2, struct ieee80211_node *VAR_3)
{
 struct ieee80211_ie_vhtcap VAR_4;
 int VAR_5;

 VAR_5 = 0;
 if (VAR_3->ni_vap->iv_opmode == VAR_1)
  VAR_5 = 1;

 FUNC_2(VAR_3, &VAR_4, VAR_5);

 FUNC_3(VAR_2, '\0', sizeof(struct ieee80211_ie_vhtcap));

 VAR_2[0] = VAR_0;
 VAR_2[1] = sizeof(struct ieee80211_ie_vhtcap) - 2;
 VAR_2 += 2;


 FUNC_1(VAR_2, VAR_4.vht_cap_info);


 FUNC_0(VAR_2, VAR_4.supp_mcs.rx_mcs_map);
 FUNC_0(VAR_2, VAR_4.supp_mcs.rx_highest);
 FUNC_0(VAR_2, VAR_4.supp_mcs.tx_mcs_map);
 FUNC_0(VAR_2, VAR_4.supp_mcs.tx_highest);

 return (VAR_2);
}
