
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {int ic_flags; } ;
struct run_softc {struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct run_softc*,int ,int *) ;
 int FUNC_1 (struct run_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct run_softc *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 uint32_t VAR_5;

 FUNC_0(VAR_3, VAR_1, &VAR_5);
 if (VAR_4->ic_flags & VAR_0)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;
 FUNC_1(VAR_3, VAR_1, VAR_5);
}
