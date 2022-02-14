
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_curmode; } ;
struct run_softc {struct ieee80211com sc_ic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct run_softc *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;


 if (VAR_4->ic_curmode == VAR_1)
  FUNC_0(VAR_3, VAR_2, 0x003);
 else if (VAR_4->ic_curmode == VAR_0)
  FUNC_0(VAR_3, VAR_2, 0x150);
 else
  FUNC_0(VAR_3, VAR_2, 0x15f);
}
