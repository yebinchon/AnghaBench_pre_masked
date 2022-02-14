
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct upgt_softc {int sc_cur_rateset; } ;
struct ieee80211vap {struct ieee80211_txparam* iv_txparms; } ;
struct ieee80211com {scalar_t__ ic_curmode; int ic_curchan; struct upgt_softc* ic_softc; } ;
struct ieee80211_txparam {size_t ucastrate; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int ,int const,int) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211vap *VAR_4, struct ieee80211com *VAR_5)
{
 struct upgt_softc *VAR_6 = VAR_5->ic_softc;
 const struct ieee80211_txparam *VAR_7;
 const uint8_t VAR_8[] =
     { 0x13, 0x13, 0x12, 0x11, 0x11, 0x10, 0x10, 0x10 };
 const uint8_t VAR_9[] =
     { 0x0b, 0x0a, 0x09, 0x08, 0x07, 0x06, 0x04, 0x01 };
 const uint8_t VAR_10[] =
     { 0x10, 0x11, 0x12, 0x13, 0x01, 0x04, 0x06, 0x07,
       0x08, 0x09, 0x0a, 0x0b };

 VAR_7 = &VAR_4->iv_txparms[FUNC_0(VAR_5->ic_curchan)];


 if (VAR_7->ucastrate == VAR_0) {





  if (VAR_5->ic_curmode == VAR_1)
   FUNC_1(VAR_6->sc_cur_rateset, VAR_8,
       sizeof(VAR_6->sc_cur_rateset));
  if (VAR_5->ic_curmode == VAR_2 ||
      VAR_5->ic_curmode == VAR_3)
   FUNC_1(VAR_6->sc_cur_rateset, VAR_9,
       sizeof(VAR_6->sc_cur_rateset));
 } else {

  FUNC_2(VAR_6->sc_cur_rateset, VAR_10[VAR_7->ucastrate],
      sizeof(VAR_6->sc_cur_rateset));
 }
}
