
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int dummy; } ;
struct ieee80211com {struct otus_softc* ic_softc; } ;


 int FUNC_0 (struct otus_softc*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211com *VAR_0)
{
 struct otus_softc *VAR_1 = VAR_0->ic_softc;

 (void) FUNC_0(VAR_1);
}
