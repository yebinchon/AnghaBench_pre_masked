
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ural_softc {int dummy; } ;
struct ieee80211com {struct ural_softc* ic_softc; } ;


 int FUNC_0 (struct ural_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct ural_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct ural_softc*,int ) ;
 int FUNC_3 (struct ural_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211com *VAR_2)
{
 struct ural_softc *VAR_3 = VAR_2->ic_softc;

 FUNC_0(VAR_3);
 FUNC_3(VAR_3, VAR_0, 0);
 FUNC_2(VAR_3, VAR_1);
 FUNC_1(VAR_3);
}
