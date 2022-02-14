
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_opmode; } ;
struct bwi_softc {struct ieee80211com sc_ic; } ;
struct bwi_mac {int mac_flags; int mac_rev; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwi_softc*,int ,int ) ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct bwi_mac*) ;
 int FUNC_4 (struct bwi_mac*) ;

__attribute__((used)) static void
FUNC_5(struct bwi_mac *VAR_5)
{
 struct bwi_softc *VAR_6 = VAR_5->mac_sc;
 struct ieee80211com *VAR_7 = &VAR_6->sc_ic;

 FUNC_2(VAR_5->mac_flags & VAR_0,
     ("mac_flags 0x%x", VAR_5->mac_flags));

 FUNC_1(VAR_6, VAR_3);

 FUNC_0(VAR_6, VAR_1, VAR_2);

 if (VAR_5->mac_rev < 3)
  FUNC_4(VAR_5);
 else if (VAR_7->ic_opmode != VAR_4)
  FUNC_3(VAR_5);

 VAR_5->mac_flags &= ~VAR_0;
}
