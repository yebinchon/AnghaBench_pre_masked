
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fxp_softc {int dev; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int volatile) ;

__attribute__((used)) static void
FUNC_4(struct fxp_softc *VAR_3, volatile uint16_t *VAR_4,
    bus_dma_tag_t VAR_5, bus_dmamap_t VAR_6)
{
 int VAR_7;

 for (VAR_7 = 10000; VAR_7 > 0; VAR_7--) {
  FUNC_0(2);
  FUNC_1(VAR_5, VAR_6,
      VAR_0 | VAR_1);
  if ((FUNC_3(*VAR_4) & VAR_2) != 0)
   break;
 }
 if (VAR_7 == 0)
  FUNC_2(VAR_3->dev, "DMA timeout\n");
}
