
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_txpwr_loctl {int tx_bias; int tx_magn; } ;
struct bwn_rfatt {int att; } ;
struct TYPE_2__ {int padmix; } ;
struct bwn_phy_g {int pg_txctl; TYPE_1__ pg_bbatt; TYPE_1__ pg_rfatt; struct bwn_txpwr_loctl pg_loctl; } ;
struct bwn_phy {int rf_ver; int rf_rev; struct bwn_phy_g phy_g; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
struct bwn_bbatt {int att; } ;


 scalar_t__ FUNC_0 (struct bwn_phy*) ;
 int FUNC_1 (struct bwn_mac*,int,int,int) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int ,int) ;
 int FUNC_6 (TYPE_1__*,struct bwn_rfatt const*,int) ;

__attribute__((used)) static void
FUNC_7(struct bwn_mac *VAR_3, const struct bwn_bbatt *VAR_4,
    const struct bwn_rfatt *VAR_5, uint8_t VAR_6)
{
 struct bwn_phy *VAR_7 = &VAR_3->mac_phy;
 struct bwn_phy_g *VAR_8 = &VAR_7->phy_g;
 struct bwn_txpwr_loctl *VAR_9 = &VAR_8->pg_loctl;
 uint16_t VAR_10, VAR_11;
 uint16_t VAR_12, VAR_13;

 VAR_10 = VAR_4->att;
 VAR_11 = VAR_5->att;
 VAR_12 = VAR_9->tx_bias;
 VAR_13 = VAR_9->tx_magn;
 if (VAR_12 == 0xff)
  VAR_12 = 0;

 VAR_8->pg_txctl = VAR_6;
 FUNC_6(&VAR_8->pg_rfatt, VAR_5, sizeof(*VAR_5));
 VAR_8->pg_rfatt.padmix = (VAR_6 & VAR_2) ? 1 : 0;
 FUNC_6(&VAR_8->pg_bbatt, VAR_4, sizeof(*VAR_4));
 FUNC_4(VAR_3, VAR_10);
 FUNC_5(VAR_3, VAR_0, VAR_1, VAR_11);
 if (VAR_7->rf_ver == 0x2050 && VAR_7->rf_rev == 8)
  FUNC_2(VAR_3, 0x43, (VAR_11 & 0x000f) | (VAR_6 & 0x0070));
 else {
  FUNC_1(VAR_3, 0x43, 0xfff0, (VAR_11 & 0x000f));
  FUNC_1(VAR_3, 0x52, ~0x0070, (VAR_6 & 0x0070));
 }
 if (FUNC_0(VAR_7))
  FUNC_2(VAR_3, 0x52, VAR_13 | VAR_12);
 else
  FUNC_1(VAR_3, 0x52, 0xfff0, (VAR_12 & 0x000f));
 FUNC_3(VAR_3);
}
