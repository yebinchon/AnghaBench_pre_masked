
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct wi_softc {scalar_t__ sc_firmware_type; } ;
struct ieee80211vap {struct ieee80211_txparam* iv_txparms; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_bsschan; } ;
struct ieee80211_txparam {int ucastrate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct wi_softc*,int ,int const) ;

__attribute__((used)) static int
FUNC_2(struct wi_softc *VAR_3, struct ieee80211vap *VAR_4)
{
 static const uint16_t VAR_5[12] = {
     [ 0] = 3,
     [ 1] = 1,
     [ 2] = 2,
     [ 5] = 4,
     [11] = 5
 };
 static const uint16_t VAR_6[12] = {
     [ 0] = 0xf,
     [ 1] = 0,
     [ 2] = 1,
     [ 5] = 2,
     [11] = 3,
 };
 const uint16_t *VAR_7 = VAR_3->sc_firmware_type == VAR_1 ?
     VAR_5 : VAR_6;
 struct ieee80211com *VAR_8 = VAR_4->iv_ic;
 const struct ieee80211_txparam *VAR_9;

 VAR_9 = &VAR_4->iv_txparms[FUNC_0(VAR_8->ic_bsschan)];
 return FUNC_1(VAR_3, VAR_2,
     (VAR_9->ucastrate == VAR_0 ?
  VAR_7[0] : VAR_7[VAR_9->ucastrate / 2]));
}
