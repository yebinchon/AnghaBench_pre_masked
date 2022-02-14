
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
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct bwi_mac*) ;
 int FUNC_5 (struct bwi_mac*) ;

__attribute__((used)) static void
FUNC_6(struct bwi_mac *VAR_4)
{
 struct bwi_softc *VAR_5 = VAR_4->mac_sc;
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;

 FUNC_3((VAR_4->mac_flags & VAR_0) == 0,
     ("mac_flags 0x%x", VAR_4->mac_flags));

 if (VAR_4->mac_rev < 3)
  FUNC_5(VAR_4);
 else if (VAR_6->ic_opmode != VAR_3)
  FUNC_4(VAR_4);

 FUNC_1(VAR_5, VAR_1, VAR_2);


 FUNC_0(VAR_5, VAR_1);
 FUNC_2(10);

 VAR_4->mac_flags |= VAR_0;
}
