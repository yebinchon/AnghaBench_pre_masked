
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_usb_softc {int tx_agg_desc_num; } ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtwn_usb_softc* FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct rtwn_softc*,int ) ;
 int FUNC_3 (struct rtwn_softc*,int ,int ) ;

void
FUNC_4(struct rtwn_softc *VAR_2)
{
 struct rtwn_usb_softc *VAR_3 = FUNC_0(VAR_2);
 uint32_t VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 VAR_4 = FUNC_1(VAR_4, VAR_1, VAR_3->tx_agg_desc_num);
 FUNC_3(VAR_2, VAR_0, VAR_4);
}
