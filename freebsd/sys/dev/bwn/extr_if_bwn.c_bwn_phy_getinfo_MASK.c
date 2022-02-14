
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwn_softc {int sc_dev; } ;
struct bwn_phy {int gmode; int rf_on; int analog; int type; int rev; int rf_rev; int rf_ver; int rf_manuf; int phy_do_full_init; } ;
struct bwn_mac {struct bwn_softc* mac_sc; struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct bwn_mac*,int ,int ) ;
 int VAR_13 ;
 int FUNC_2 (int ,char*,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct bwn_mac *VAR_14, int VAR_15)
{
 struct bwn_phy *VAR_16 = &VAR_14->mac_phy;
 struct bwn_softc *VAR_17 = VAR_14->mac_sc;
 uint32_t VAR_18;


 VAR_18 = FUNC_0(VAR_14, VAR_5);
 VAR_16->gmode = VAR_15;
 VAR_16->rf_on = 1;
 VAR_16->analog = (VAR_18 & VAR_6) >> 12;
 VAR_16->type = (VAR_18 & VAR_7) >> 8;
 VAR_16->rev = (VAR_18 & VAR_8);
 if ((VAR_16->type == VAR_0 && VAR_16->rev >= 4) ||
     (VAR_16->type == VAR_1 && VAR_16->rev != 2 &&
  VAR_16->rev != 4 && VAR_16->rev != 6 && VAR_16->rev != 7) ||
     (VAR_16->type == VAR_2 && VAR_16->rev > 9) ||
     (VAR_16->type == VAR_4 && VAR_16->rev > 6) ||
     (VAR_16->type == VAR_3 && VAR_16->rev > 2))
  goto unsupphy;


 FUNC_1(VAR_14, VAR_9, VAR_10);
 VAR_18 = FUNC_0(VAR_14, VAR_12);
 FUNC_1(VAR_14, VAR_9, VAR_10);
 VAR_18 |= (uint32_t)FUNC_0(VAR_14, VAR_11) << 16;

 VAR_16->rf_rev = (VAR_18 & 0xf0000000) >> 28;
 VAR_16->rf_ver = (VAR_18 & 0x0ffff000) >> 12;
 VAR_16->rf_manuf = (VAR_18 & 0x00000fff);





 VAR_16->phy_do_full_init = 1;

 if (VAR_16->rf_manuf != 0x17f)
  goto unsupradio;
 if ((VAR_16->type == VAR_0 && (VAR_16->rf_ver != 0x2060 ||
      VAR_16->rf_rev != 1 || VAR_16->rf_manuf != 0x17f)) ||
     (VAR_16->type == VAR_1 && (VAR_16->rf_ver & 0xfff0) != 0x2050) ||
     (VAR_16->type == VAR_2 && VAR_16->rf_ver != 0x2050) ||
     (VAR_16->type == VAR_4 &&
      VAR_16->rf_ver != 0x2055 && VAR_16->rf_ver != 0x2056) ||
     (VAR_16->type == VAR_3 &&
      VAR_16->rf_ver != 0x2062 && VAR_16->rf_ver != 0x2063))
  goto unsupradio;

 return (0);
unsupphy:
 FUNC_2(VAR_17->sc_dev, "unsupported PHY (type %#x, rev %#x, "
     "analog %#x)\n",
     VAR_16->type, VAR_16->rev, VAR_16->analog);
 return (VAR_13);
unsupradio:
 FUNC_2(VAR_17->sc_dev, "unsupported radio (manuf %#x, ver %#x, "
     "rev %#x)\n",
     VAR_16->rf_manuf, VAR_16->rf_ver, VAR_16->rf_rev);
 return (VAR_13);
}
