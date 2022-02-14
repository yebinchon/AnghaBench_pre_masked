
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_usb_softc {int uc_tx_pending; int uc_tx_inactive; int uc_tx_active; int uc_tx; } ;
struct rtwn_softc {int dummy; } ;


 struct rtwn_usb_softc* FUNC_0 (struct rtwn_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtwn_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_1)
{
 struct rtwn_usb_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_1, VAR_2->uc_tx, VAR_0);

 FUNC_1(&VAR_2->uc_tx_active);
 FUNC_1(&VAR_2->uc_tx_inactive);
 FUNC_1(&VAR_2->uc_tx_pending);
}
