
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct ieee80211com {int ic_flags; int ic_rt; } ;
struct rtwn_softc {struct ieee80211com sc_ic; } ;
struct r12a_tx_desc {int txdw5; int txdw4; int txdw3; } ;
typedef enum ieee80211_protmode { ____Placeholder_ieee80211_protmode } ieee80211_protmode ;


 int VAR_0 ;


 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t VAR_6 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ,int ) ;
 size_t FUNC_6 (int ) ;
 int * VAR_7 ;
 size_t FUNC_7 (int ,size_t) ;

__attribute__((used)) static void
FUNC_8(struct rtwn_softc *VAR_8, struct r12a_tx_desc *VAR_9,
    enum ieee80211_protmode VAR_10, uint8_t VAR_11)
{
 struct ieee80211com *VAR_12 = &VAR_8->sc_ic;
 uint8_t VAR_13;

 switch (VAR_10) {
 case 129:
  VAR_9->txdw3 |= FUNC_4(VAR_1);
  break;
 case 128:
  VAR_9->txdw3 |= FUNC_4(VAR_2);
  break;
 default:
  break;
 }

 if (VAR_10 == 129 ||
     VAR_10 == 128) {
  if (VAR_11 >= FUNC_2(0))
   VAR_13 = FUNC_7(VAR_12->ic_rt, VAR_11);
  else
   VAR_13 = FUNC_5(VAR_12->ic_rt, VAR_7[VAR_11]);
  VAR_11 = FUNC_6(FUNC_0(VAR_13));

  VAR_9->txdw4 |= FUNC_4(FUNC_3(VAR_3, VAR_11));

  VAR_9->txdw4 |= FUNC_4(FUNC_3(VAR_4, 0xf));

  if (FUNC_1(VAR_11) && VAR_11 != VAR_6 &&
      (VAR_12->ic_flags & VAR_0))
   VAR_9->txdw5 |= FUNC_4(VAR_5);
 }
}
