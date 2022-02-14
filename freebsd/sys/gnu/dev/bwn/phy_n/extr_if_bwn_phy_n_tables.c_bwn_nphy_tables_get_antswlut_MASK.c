
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {int ic_curchan; } ;
struct bwn_softc {int sc_dev; struct ieee80211com sc_ic; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct bwn_softc*,char*,char const*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int *) ;

__attribute__((used)) static int FUNC_3(struct bwn_mac *VAR_2, uint8_t *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_2->mac_sc->sc_ic;
 struct bwn_softc *VAR_5 = VAR_2->mac_sc;
 const char *VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_4->ic_curchan))
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 VAR_7 = FUNC_2(VAR_5->sc_dev, VAR_6, VAR_3);
 if (VAR_7)
  FUNC_0(VAR_2->mac_sc, "NVRAM variable %s unreadable: %d",
      VAR_6, VAR_7);

 return (VAR_7);
}
