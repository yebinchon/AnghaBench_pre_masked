
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {scalar_t__ ic_opmode; } ;
struct bwn_softc {int sc_flags; struct ieee80211com sc_ic; } ;
struct bwn_mac {int mac_intr_mask; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_4(struct bwn_mac *VAR_8)
{
 struct bwn_softc *VAR_9 = VAR_8->mac_sc;
 struct ieee80211com *VAR_10 = &VAR_9->sc_ic;
 uint32_t VAR_11, VAR_12, VAR_13;

 if (VAR_10->ic_opmode == VAR_6 ||
     VAR_10->ic_opmode == VAR_7)
  return;

 VAR_8->mac_intr_mask &= ~VAR_1;

 VAR_11 = FUNC_0(VAR_8, VAR_3);
 VAR_12 = (VAR_11 & VAR_4);
 VAR_13 = (VAR_11 & VAR_5);

 if (VAR_12 && VAR_13) {
  FUNC_1(VAR_8, VAR_2, VAR_1);
  VAR_8->mac_intr_mask |= VAR_1;
  return;
 }

 if (VAR_9->sc_flags & VAR_0) {
  VAR_9->sc_flags &= ~VAR_0;
  FUNC_2(VAR_8);
  FUNC_3(VAR_8);
  VAR_11 = FUNC_0(VAR_8, VAR_3);
  VAR_11 |= VAR_4;
  FUNC_1(VAR_8, VAR_3, VAR_11);
 } else {
  if (!VAR_12) {
   FUNC_2(VAR_8);
   VAR_11 = FUNC_0(VAR_8, VAR_3);
   VAR_11 |= VAR_4;
   FUNC_1(VAR_8, VAR_3, VAR_11);
  } else if (!VAR_13) {
   FUNC_3(VAR_8);
   VAR_11 = FUNC_0(VAR_8, VAR_3);
   VAR_11 |= VAR_5;
   FUNC_1(VAR_8, VAR_3, VAR_11);
  }
 }
}
