
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wi_softc {int dummy; } ;
struct ieee80211com {scalar_t__ ic_opmode; scalar_t__ ic_promisc; struct wi_softc* ic_softc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wi_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct wi_softc*) ;
 int FUNC_2 (struct wi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_2)
{
 struct wi_softc *VAR_3 = VAR_2->ic_softc;

 FUNC_0(VAR_3);

 FUNC_2(VAR_3, VAR_1,
     (VAR_2->ic_opmode == VAR_0 ||
      (VAR_2->ic_promisc > 0)));
 FUNC_1(VAR_3);
}
