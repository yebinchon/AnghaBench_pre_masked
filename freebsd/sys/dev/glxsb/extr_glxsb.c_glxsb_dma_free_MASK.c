
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxsb_softc {int sc_dmat; } ;
struct glxsb_dma_map {int dma_map; int dma_vaddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct glxsb_softc *VAR_0, struct glxsb_dma_map *VAR_1)
{

 FUNC_1(VAR_0->sc_dmat, VAR_1->dma_map);
 FUNC_2(VAR_0->sc_dmat, VAR_1->dma_vaddr, VAR_1->dma_map);
 FUNC_0(VAR_0->sc_dmat);
}
