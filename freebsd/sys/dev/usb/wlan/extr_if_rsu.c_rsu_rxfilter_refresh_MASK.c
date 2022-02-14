
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ieee80211com {scalar_t__ ic_opmode; scalar_t__ ic_promisc; } ;
struct rsu_softc {scalar_t__ sc_vap_is_running; struct ieee80211com sc_ic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct rsu_softc*) ;
 int FUNC_1 (struct rsu_softc*,int,int) ;
 int FUNC_2 (struct rsu_softc*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct rsu_softc *VAR_8)
{
 struct ieee80211com *VAR_9 = &VAR_8->sc_ic;
 uint32_t VAR_10, VAR_11;

 FUNC_0(VAR_8);


 VAR_10 = VAR_2 | VAR_1;
 VAR_11 = VAR_4;
 if (VAR_8->sc_vap_is_running)
  VAR_11 |= VAR_5;
 else
  VAR_10 |= VAR_3;

 if (VAR_9->ic_opmode == VAR_0) {
  uint16_t VAR_12;
  if (VAR_8->sc_vap_is_running)
   VAR_12 = 0;
  else
   VAR_12 = VAR_7;
  FUNC_2(VAR_8, VAR_6, VAR_12);
 }

 if (VAR_9->ic_promisc == 0 && VAR_9->ic_opmode != VAR_0)
  FUNC_1(VAR_8, VAR_10, VAR_11);
 else
  FUNC_1(VAR_8, VAR_11, VAR_10);
}
