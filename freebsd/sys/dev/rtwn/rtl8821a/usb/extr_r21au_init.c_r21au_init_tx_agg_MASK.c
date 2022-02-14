
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_usb_softc {int tx_agg_desc_num; } ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 struct rtwn_usb_softc* FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*,int ,int) ;

void
FUNC_3(struct rtwn_softc *VAR_1)
{
 struct rtwn_usb_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);

 FUNC_2(VAR_1, VAR_0, VAR_2->tx_agg_desc_num << 1);
}
