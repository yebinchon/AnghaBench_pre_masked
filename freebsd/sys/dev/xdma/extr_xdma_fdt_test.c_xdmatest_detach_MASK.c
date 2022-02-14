
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdmatest_softc {int dst_dma_tag; int dst_dma_map; int dst; int src_dma_tag; int src_dma_map; int src; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct xdmatest_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct xdmatest_softc *VAR_1;

 VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->src_dma_tag, VAR_1->src_dma_map);
 FUNC_2(VAR_1->src_dma_tag, VAR_1->src, VAR_1->src_dma_map);
 FUNC_0(VAR_1->src_dma_tag);

 FUNC_1(VAR_1->dst_dma_tag, VAR_1->dst_dma_map);
 FUNC_2(VAR_1->dst_dma_tag, VAR_1->dst, VAR_1->dst_dma_map);
 FUNC_0(VAR_1->dst_dma_tag);

 return (0);
}
