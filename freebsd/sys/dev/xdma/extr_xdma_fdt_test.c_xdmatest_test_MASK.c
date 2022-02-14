
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int src_width; int dst_width; int block_len; int block_num; int dst_addr; int src_addr; int direction; int type; } ;
struct xdmatest_softc {int len; int* src; int * xchan; int dev; int dst_phys; int src_phys; TYPE_1__ req; scalar_t__* dst; int dst_dma_map; int dst_dma_tag; int src_dma_map; int src_dma_tag; int ih; int * xdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (int *,int ,struct xdmatest_softc*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct xdmatest_softc *VAR_4)
{
 int VAR_5;
 int VAR_6;


 VAR_4->xdma = FUNC_4(VAR_4->dev, "test");
 if (VAR_4->xdma == ((void*)0)) {
  FUNC_1(VAR_4->dev, "Can't find xDMA controller.\n");
  return (-1);
 }


 VAR_4->xchan = FUNC_3(VAR_4->xdma);
 if (VAR_4->xchan == ((void*)0)) {
  FUNC_1(VAR_4->dev, "Can't alloc virtual DMA channel.\n");
  return (-1);
 }


 VAR_5 = FUNC_6(VAR_4->xchan, VAR_3, VAR_4, &VAR_4->ih);
 if (VAR_5) {
  FUNC_1(VAR_4->dev, "Can't setup xDMA interrupt handler.\n");
  return (-1);
 }


 FUNC_0(VAR_4->src_dma_tag, VAR_4->src_dma_map, VAR_0);
 FUNC_0(VAR_4->dst_dma_tag, VAR_4->dst_dma_map, VAR_0);


 for (VAR_6 = 0; VAR_6 < VAR_4->len; VAR_6++) {
  VAR_4->src[VAR_6] = (VAR_6 & 0xff);
  VAR_4->dst[VAR_6] = 0;
 }

 VAR_4->req.type = VAR_2;
 VAR_4->req.direction = VAR_1;
 VAR_4->req.src_addr = VAR_4->src_phys;
 VAR_4->req.dst_addr = VAR_4->dst_phys;
 VAR_4->req.src_width = 4;
 VAR_4->req.dst_width = 4;
 VAR_4->req.block_len = VAR_4->len;
 VAR_4->req.block_num = 1;

 VAR_5 = FUNC_5(VAR_4->xchan, VAR_4->src_phys, VAR_4->dst_phys, VAR_4->len);
 if (VAR_5 != 0) {
  FUNC_1(VAR_4->dev, "Can't configure virtual channel.\n");
  return (-1);
 }


 FUNC_2(VAR_4->xchan);

 return (0);
}
