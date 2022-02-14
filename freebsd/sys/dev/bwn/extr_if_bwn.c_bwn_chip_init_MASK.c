
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct bwn_softc {int sc_dev; } ;
struct bwn_phy {scalar_t__ type; int (* set_antenna ) (struct bwn_mac*,int ) ;int (* set_im ) (struct bwn_mac*,int ) ;int (* switch_analog ) (struct bwn_mac*,int) ;scalar_t__ gmode; } ;
struct bwn_mac {struct bwn_phy mac_phy; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct bwn_mac*,int) ;
 int FUNC_1 (struct bwn_mac*,int) ;
 int VAR_17 ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 int FUNC_3 (struct bwn_mac*,int,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bwn_mac*) ;
 int FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (struct bwn_mac*) ;
 int FUNC_9 (struct bwn_mac*) ;
 int FUNC_10 (struct bwn_mac*,int) ;
 int FUNC_11 (struct bwn_mac*) ;
 int FUNC_12 (struct bwn_mac*) ;
 int FUNC_13 (struct bwn_mac*,int ) ;
 int FUNC_14 (struct bwn_mac*,int ,int,int) ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (struct bwn_mac*,int) ;
 int FUNC_17 (struct bwn_mac*,int ) ;
 int FUNC_18 (struct bwn_mac*,int ) ;

__attribute__((used)) static int
FUNC_19(struct bwn_mac *VAR_20)
{
 struct bwn_softc *VAR_21 = VAR_20->mac_sc;
 struct bwn_phy *VAR_22 = &VAR_20->mac_phy;
 uint32_t VAR_23;
 u_int VAR_24;
 int VAR_25;

 VAR_23 = VAR_12 | VAR_13 | VAR_14;
 if (VAR_22->gmode)
  VAR_23 |= VAR_11;
 FUNC_3(VAR_20, VAR_10, VAR_23);

 VAR_25 = FUNC_6(VAR_20);
 if (VAR_25)
  return (VAR_25);
 VAR_25 = FUNC_8(VAR_20);
 if (VAR_25)
  return (VAR_25);

 VAR_25 = FUNC_9(VAR_20);
 if (VAR_25)
  return (VAR_25);

 VAR_25 = FUNC_7(VAR_20);
 if (VAR_25)
  return (VAR_25);

 VAR_22->switch_analog(VAR_20, 1);
 VAR_25 = FUNC_11(VAR_20);
 if (VAR_25)
  return (VAR_25);

 if (VAR_22->set_im)
  VAR_22->set_im(VAR_20, VAR_8);
 if (VAR_22->set_antenna)
  VAR_22->set_antenna(VAR_20, VAR_1);
 FUNC_13(VAR_20, VAR_1);

 if (VAR_22->type == VAR_15)
  FUNC_2(VAR_20, 0x005e, FUNC_0(VAR_20, 0x005e) | 0x0004);
 FUNC_3(VAR_20, 0x0100, 0x01000000);
 if (FUNC_5(VAR_21->sc_dev) < 5)
  FUNC_3(VAR_20, 0x010c, 0x01000000);

 FUNC_3(VAR_20, VAR_10,
     FUNC_1(VAR_20, VAR_10) & ~VAR_14);
 FUNC_3(VAR_20, VAR_10,
     FUNC_1(VAR_20, VAR_10) | VAR_14);
 FUNC_14(VAR_20, VAR_17, 0x0074, 0x0000);

 FUNC_12(VAR_20);
 if (FUNC_5(VAR_21->sc_dev) < 3) {
  FUNC_2(VAR_20, 0x060e, 0x0000);
  FUNC_2(VAR_20, 0x0610, 0x8000);
  FUNC_2(VAR_20, 0x0604, 0x0000);
  FUNC_2(VAR_20, 0x0606, 0x0200);
 } else {
  FUNC_3(VAR_20, 0x0188, 0x80000000);
  FUNC_3(VAR_20, 0x018c, 0x02000000);
 }
 FUNC_3(VAR_20, VAR_9, 0x00004000);
 FUNC_3(VAR_20, VAR_2, 0x0001dc00);
 FUNC_3(VAR_20, VAR_3, 0x0000dc00);
 FUNC_3(VAR_20, VAR_4, 0x0000dc00);
 FUNC_3(VAR_20, VAR_5, 0x0001dc00);
 FUNC_3(VAR_20, VAR_6, 0x0000dc00);
 FUNC_3(VAR_20, VAR_7, 0x0000dc00);

 FUNC_10(VAR_20, 1);


 VAR_25 = FUNC_4(VAR_21->sc_dev, VAR_0, &VAR_24);
 if (VAR_25) {
  FUNC_15(VAR_21->sc_dev, "failed to fetch HT clock latency: "
      "%d\n", VAR_25);
  return (VAR_25);
 }

 if (VAR_24 > VAR_19) {
  FUNC_15(VAR_21->sc_dev, "invalid HT clock latency: %u\n",
      VAR_24);
  return (VAR_18);
 }

 FUNC_2(VAR_20, VAR_16, VAR_24);
 return (0);
}
