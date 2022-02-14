
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_softc {int dummy; } ;
struct ieee80211com {struct rum_softc* ic_softc; } ;


 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct rum_softc*) ;
 int FUNC_3 (struct rum_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211com *VAR_1)
{
 struct rum_softc *VAR_2 = VAR_1->ic_softc;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2, VAR_0);
 FUNC_1(VAR_2);

}
