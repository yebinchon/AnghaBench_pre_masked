
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_usb_softc {int uc_rx_inactive; int uc_rx_active; scalar_t__ uc_rx_off; scalar_t__ uc_rx_stat_len; int uc_rx; } ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 struct rtwn_usb_softc* FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtwn_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_1)
{
 struct rtwn_usb_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_1, VAR_2->uc_rx, VAR_0);

 VAR_2->uc_rx_stat_len = 0;
 VAR_2->uc_rx_off = 0;

 FUNC_1(&VAR_2->uc_rx_active);
 FUNC_1(&VAR_2->uc_rx_inactive);
}
