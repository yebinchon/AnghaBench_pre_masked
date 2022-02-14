
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_mcs_map; int rx_mcs_map; } ;
struct ieee80211com {TYPE_1__ ic_vht_mcsinfo; int ic_vhtcaps; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ieee80211com*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

void
FUNC_5(struct ieee80211com *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (! FUNC_0(VAR_2))
  return;


 FUNC_2(VAR_2, "[VHT] Channel Widths: 20MHz, 40MHz, 80MHz");
 if (FUNC_1(VAR_2->ic_vhtcaps, VAR_1) == 2)
  FUNC_3(" 80+80MHz");
 if (FUNC_1(VAR_2->ic_vhtcaps, VAR_1) >= 1)
  FUNC_3(" 160MHz");
 FUNC_3("\n");


 FUNC_2(VAR_2, "[VHT] Features: %b\n", VAR_2->ic_vhtcaps,
     VAR_0);


 for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {

  VAR_4 = (VAR_2->ic_vht_mcsinfo.tx_mcs_map >> (2*VAR_3)) & 0x3;
  VAR_5 = (VAR_2->ic_vht_mcsinfo.rx_mcs_map >> (2*VAR_3)) & 0x3;
  if (VAR_4 == 3 && VAR_5 == 3)
   continue;
  FUNC_2(VAR_2, "[VHT] NSS %d: TX MCS 0..%d, RX MCS 0..%d\n",
      VAR_3 + 1,
      FUNC_4(VAR_4),
      FUNC_4(VAR_5));
 }
}
