
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {struct r92e_softc* sc_priv; } ;
struct r92e_softc {int ac_usb_dma_size; int ac_usb_dma_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r92e_softc* FUNC_0 (int,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_3)
{
 struct r92e_softc *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct r92e_softc), VAR_0, VAR_1 | VAR_2);

 VAR_4->ac_usb_dma_size = 0x06;
 VAR_4->ac_usb_dma_time = 0x20;

 VAR_3->sc_priv = VAR_4;
}
