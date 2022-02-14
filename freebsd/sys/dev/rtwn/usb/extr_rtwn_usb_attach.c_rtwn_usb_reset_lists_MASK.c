
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_usb_softc {int uc_tx_pending; int uc_tx_active; } ;
struct rtwn_softc {scalar_t__ qfullmsk; } ;
struct ieee80211vap {int dummy; } ;


 int FUNC_0 (struct rtwn_softc*) ;
 struct rtwn_usb_softc* FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_usb_softc*) ;
 int FUNC_3 (struct rtwn_usb_softc*,int *,struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_4(struct rtwn_softc *VAR_0, struct ieee80211vap *VAR_1)
{
 struct rtwn_usb_softc *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_0);

 FUNC_3(VAR_2, &VAR_2->uc_tx_active, VAR_1);
 FUNC_3(VAR_2, &VAR_2->uc_tx_pending, VAR_1);
 if (VAR_1 == ((void*)0)) {
  FUNC_2(VAR_2);
  VAR_0->qfullmsk = 0;
 }
}
