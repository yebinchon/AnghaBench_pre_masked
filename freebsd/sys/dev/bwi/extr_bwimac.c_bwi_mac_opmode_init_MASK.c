
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211com {int ic_opmode; scalar_t__ ic_promisc; } ;
struct bwi_softc {scalar_t__ sc_bbp_id; int sc_bbp_rev; struct ieee80211com sc_ic; } ;
struct bwi_mac {int mac_rev; struct bwi_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (struct bwi_softc*,int ,int) ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int) ;
 int FUNC_3 (struct bwi_softc*,int ,int) ;
 int FUNC_4 (struct bwi_softc*,int ,int) ;



 int FUNC_5 (struct bwi_mac*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bwi_mac *VAR_12)
{
 struct bwi_softc *VAR_13 = VAR_12->mac_sc;
 struct ieee80211com *VAR_14 = &VAR_13->sc_ic;
 uint32_t VAR_15;
 uint16_t VAR_16;

 FUNC_0(VAR_13, VAR_4, VAR_5);
 FUNC_2(VAR_13, VAR_4, VAR_5);


 FUNC_5(VAR_12, VAR_1, VAR_2, 0);





 VAR_15 = FUNC_1(VAR_13, VAR_4);
 VAR_15 &= ~(VAR_6 |
   VAR_10 |
   VAR_9 |
   VAR_8 |
   VAR_7 |
   VAR_11);
 VAR_15 |= VAR_5;


 if (VAR_12->mac_rev < 5)
  VAR_15 |= VAR_11;

 switch (VAR_14->ic_opmode) {
 case 129:
  VAR_15 &= ~VAR_5;
  break;
 case 130:
  VAR_15 |= VAR_6;
  break;
 case 128:






  VAR_15 |= VAR_10;


  break;
 default:
  break;
 }

 if (VAR_14->ic_promisc > 0)
  VAR_15 |= VAR_11;

 FUNC_4(VAR_13, VAR_4, VAR_15);

 if (VAR_14->ic_opmode != 129 &&
     VAR_14->ic_opmode != 130) {
  if (VAR_13->sc_bbp_id == VAR_0 && VAR_13->sc_bbp_rev == 3)
   VAR_16 = 100;
  else
   VAR_16 = 50;
 } else {
  VAR_16 = 2;
 }
 FUNC_3(VAR_13, VAR_3, VAR_16);
}
