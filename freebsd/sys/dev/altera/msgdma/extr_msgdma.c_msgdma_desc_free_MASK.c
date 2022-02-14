
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgdma_softc {int dummy; } ;
struct msgdma_desc {int dummy; } ;
struct msgdma_channel {int descs_num; struct msgdma_desc** descs_phys; struct msgdma_desc** dma_map; struct msgdma_desc** descs; int dma_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct msgdma_desc*) ;
 int FUNC_2 (int ,struct msgdma_desc*,struct msgdma_desc*) ;
 int FUNC_3 (struct msgdma_desc**,int ) ;

__attribute__((used)) static int
FUNC_4(struct msgdma_softc *VAR_1, struct msgdma_channel *VAR_2)
{
 struct msgdma_desc *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->descs_num;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_3 = VAR_2->descs[VAR_5];
  FUNC_1(VAR_2->dma_tag, VAR_2->dma_map[VAR_5]);
  FUNC_2(VAR_2->dma_tag, VAR_3, VAR_2->dma_map[VAR_5]);
 }

 FUNC_0(VAR_2->dma_tag);
 FUNC_3(VAR_2->descs, VAR_0);
 FUNC_3(VAR_2->dma_map, VAR_0);
 FUNC_3(VAR_2->descs_phys, VAR_0);

 return (0);
}
