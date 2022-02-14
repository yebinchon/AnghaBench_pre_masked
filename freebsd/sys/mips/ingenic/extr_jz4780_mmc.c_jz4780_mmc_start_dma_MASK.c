
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_mmc_softc {int sc_dma_ctl; int sc_dma_desc_phys; } ;


 int FUNC_0 (struct jz4780_mmc_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct jz4780_mmc_softc *VAR_2)
{


 FUNC_0(VAR_2, VAR_1, VAR_2->sc_dma_desc_phys);

 FUNC_0(VAR_2, VAR_0, VAR_2->sc_dma_ctl);
}
