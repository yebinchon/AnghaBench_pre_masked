
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_mw {int * virt_addr; scalar_t__ buff_size; int dma_tag; int dma_map; } ;
struct ntb_transport_ctx {int dev; struct ntb_transport_mw* mw_vec; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ntb_transport_ctx *VAR_0, int VAR_1)
{
 struct ntb_transport_mw *VAR_2 = &VAR_0->mw_vec[VAR_1];

 if (VAR_2->virt_addr == ((void*)0))
  return;

 FUNC_3(VAR_0->dev, VAR_1);
 FUNC_1(VAR_2->dma_tag, VAR_2->dma_map);
 FUNC_2(VAR_2->dma_tag, VAR_2->virt_addr, VAR_2->dma_map);
 FUNC_0(VAR_2->dma_tag);
 VAR_2->buff_size = 0;
 VAR_2->virt_addr = ((void*)0);
}
