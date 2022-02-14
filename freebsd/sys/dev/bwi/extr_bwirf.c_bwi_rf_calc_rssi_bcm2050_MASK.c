
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct bwi_rxbuf_hdr {int rxh_rssi; int rxh_phyinfo; int rxh_flags3; int rxh_flags1; } ;
struct bwi_rf {scalar_t__* rf_nrssi_table; } ;
struct TYPE_3__ {scalar_t__ phy_mode; } ;
struct bwi_mac {TYPE_2__* mac_sc; TYPE_1__ mac_phy; struct bwi_rf mac_rf; } ;
struct TYPE_4__ {int sc_card_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int,char*,int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(struct bwi_mac *VAR_8, const struct bwi_rxbuf_hdr *VAR_9)
{
 uint16_t VAR_10, VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = VAR_9->rxh_rssi;
 VAR_10 = FUNC_2(VAR_9->rxh_flags1);
 VAR_11 = FUNC_2(VAR_9->rxh_flags3);

 if (VAR_10 & VAR_4) {
  if (VAR_12 > 127)
   VAR_12 -= 256;
  if (VAR_11 & VAR_5)
   VAR_12 += 17;
  else
   VAR_12 -= 4;
  return VAR_12;
 }

 if (VAR_8->mac_sc->sc_card_flags & VAR_0) {
  struct bwi_rf *VAR_14 = &VAR_8->mac_rf;

  if (VAR_12 >= VAR_3)
   VAR_12 = VAR_3 - 1;

  VAR_12 = ((31 - (int)VAR_14->rf_nrssi_table[VAR_12]) * -131) / 128;
  VAR_12 -= 67;
 } else {
  VAR_12 = ((31 - VAR_12) * -149) / 128;
  VAR_12 -= 68;
 }

 if (VAR_8->mac_phy.phy_mode != VAR_7)
  return VAR_12;

 if (VAR_11 & VAR_5)
  VAR_12 += 20;

 VAR_13 = FUNC_1(FUNC_2(VAR_9->rxh_phyinfo),
         VAR_6);
 FUNC_0(VAR_8->mac_sc, VAR_1 | VAR_2,
  "lna_gain %d, phyinfo 0x%04x\n",
  VAR_13, FUNC_2(VAR_9->rxh_phyinfo));
 switch (VAR_13) {
 case 0:
  VAR_12 += 27;
  break;
 case 1:
  VAR_12 += 6;
  break;
 case 2:
  VAR_12 += 12;
  break;
 case 3:







  VAR_12 += 5;
  break;
 default:
  FUNC_3("impossible lna gain %d", VAR_13);
 }
 return VAR_12;
}
