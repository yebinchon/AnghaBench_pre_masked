
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {struct r12a_softc* sc_priv; } ;
struct r12a_softc {int ac_usb_dma_size; int ac_usb_dma_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtwn_softc*,int ,int ,int ) ;
 int FUNC_1 (struct rtwn_softc*,int ,int) ;

void
FUNC_2(struct rtwn_softc *VAR_3)
{
 struct r12a_softc *VAR_4 = VAR_3->sc_priv;


 FUNC_1(VAR_3, VAR_0,
     VAR_4->ac_usb_dma_size | (VAR_4->ac_usb_dma_time << 8));
 FUNC_0(VAR_3, VAR_1, 0,
     VAR_2);
}
