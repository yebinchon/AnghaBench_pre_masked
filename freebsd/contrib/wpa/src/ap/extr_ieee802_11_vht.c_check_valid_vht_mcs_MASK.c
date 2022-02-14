
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int tx_map; int rx_map; } ;
struct ieee80211_vht_capabilities {TYPE_1__ vht_supported_mcs_set; } ;
struct hostapd_hw_modes {int vht_mcs_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct hostapd_hw_modes *VAR_2,
          const u8 *VAR_3)
{
 const struct ieee80211_vht_capabilities *VAR_4;
 struct ieee80211_vht_capabilities VAR_5;
 u16 VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_2)
  return 1;







 FUNC_1(&VAR_5.vht_supported_mcs_set, VAR_2->vht_mcs_set,
    sizeof(VAR_5.vht_supported_mcs_set));
 VAR_4 = (const struct ieee80211_vht_capabilities *) VAR_3;


 VAR_6 = FUNC_0(VAR_4->vht_supported_mcs_set.rx_map);
 VAR_7 = FUNC_0(VAR_5.vht_supported_mcs_set.tx_map);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if ((VAR_7 & (0x3 << (VAR_8 * 2))) == 3)
   continue;

  if ((VAR_6 & (0x3 << (VAR_8 * 2))) == 3)
   continue;

  return 1;
 }

 FUNC_2(VAR_0,
     "No matching VHT MCS found between AP TX and STA RX");
 return 0;
}
