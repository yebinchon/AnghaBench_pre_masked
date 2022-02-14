
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_flags; int ic_curchan; } ;
struct urtw_softc {int sc_flags; scalar_t__ sc_state; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct urtw_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct urtw_softc*) ;
 int FUNC_3 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_13, int VAR_14)
{
 struct urtw_softc *VAR_15 = VAR_13;
 struct ieee80211com *VAR_16 = &VAR_15->sc_ic;
 int VAR_17;

 FUNC_1(VAR_15);
 if ((VAR_15->sc_flags & VAR_10) == 0) {
  FUNC_2(VAR_15);
  return;
 }
 if (VAR_15->sc_flags & VAR_9) {
  FUNC_3(VAR_15, VAR_11, 0x22);
  if (FUNC_0(VAR_16->ic_curchan))
   FUNC_3(VAR_15, VAR_12, VAR_0);
  else
   FUNC_3(VAR_15, VAR_12, VAR_1);
  FUNC_3(VAR_15, VAR_4, 0x5b);
  FUNC_3(VAR_15, VAR_5, 0x5b);
 } else {
  FUNC_3(VAR_15, VAR_11, 0x22);
  if (VAR_15->sc_state == VAR_3 &&
      VAR_16->ic_flags & VAR_2)
   FUNC_3(VAR_15, VAR_12, VAR_0);
  else
   FUNC_3(VAR_15, VAR_12, VAR_1);
  if (FUNC_0(VAR_16->ic_curchan)) {
   FUNC_3(VAR_15, VAR_7, 0x14);
   FUNC_3(VAR_15, VAR_8, 0x5b - 0x14);
   FUNC_3(VAR_15, VAR_6, 0x73);
  } else {
   FUNC_3(VAR_15, VAR_7, 0x24);
   FUNC_3(VAR_15, VAR_8, 0x5b - 0x24);
   FUNC_3(VAR_15, VAR_6, 0xa5);
  }
 }
fail:
 FUNC_2(VAR_15);
}
