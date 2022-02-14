
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {int dummy; } ;
struct otus_softc {struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct otus_softc*) ;
 int FUNC_2 (struct otus_softc*,int ,int) ;
 int FUNC_3 (struct otus_softc*) ;

__attribute__((used)) static void
FUNC_4(struct otus_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;
 uint32_t VAR_3;

 FUNC_1(VAR_1);

 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(VAR_1, VAR_0, VAR_3 << 10);
 (void)FUNC_3(VAR_1);
}
