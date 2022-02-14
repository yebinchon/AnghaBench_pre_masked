
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ paddr; scalar_t__ vaddr; } ;
struct pvscsi_softc {int hcb_cnt; int free_list; struct pvscsi_hcb* hcbs; int lock; TYPE_1__ sg_list_dma; TYPE_1__ sense_buffer_dma; int dev; int buffer_dmat; } ;
struct pvscsi_sg_list {int dummy; } ;
struct pvscsi_hcb {int callout; scalar_t__ sg_list_paddr; struct pvscsi_sg_list* sg_list; scalar_t__ sense_buffer_paddr; void* sense_buffer; int dma_map; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pvscsi_hcb*,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int VAR_1 ;
 int FUNC_5 (struct pvscsi_softc*,TYPE_1__*,int,int) ;
 int FUNC_6 (struct pvscsi_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct pvscsi_softc *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct pvscsi_hcb *VAR_5;

 VAR_3 = 0;

 VAR_4 = FUNC_5(VAR_2, &VAR_2->sg_list_dma,
     sizeof(struct pvscsi_sg_list) * VAR_2->hcb_cnt, 1);
 if (VAR_4) {
  FUNC_4(VAR_2->dev,
      "Error allocation sg list DMA memory, error %d\n", VAR_4);
  goto fail;
 }

 VAR_4 = FUNC_5(VAR_2, &VAR_2->sense_buffer_dma,
     VAR_0 * VAR_2->hcb_cnt, 1);
 if (VAR_4) {
  FUNC_4(VAR_2->dev,
      "Error allocation sg list DMA memory, error %d\n", VAR_4);
  goto fail;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->hcb_cnt; ++VAR_3) {
  VAR_5 = VAR_2->hcbs + VAR_3;

  VAR_4 = FUNC_2(VAR_2->buffer_dmat, 0, &VAR_5->dma_map);
  if (VAR_4) {
   FUNC_4(VAR_2->dev,
       "Error creating dma map for hcb %d, error %d\n",
       VAR_3, VAR_4);
   goto fail;
  }

  VAR_5->sense_buffer =
      (void *)((caddr_t)VAR_2->sense_buffer_dma.vaddr +
      VAR_0 * VAR_3);
  VAR_5->sense_buffer_paddr =
      VAR_2->sense_buffer_dma.paddr + VAR_0 * VAR_3;

  VAR_5->sg_list =
      (struct pvscsi_sg_list *)((caddr_t)VAR_2->sg_list_dma.vaddr +
      sizeof(struct pvscsi_sg_list) * VAR_3);
  VAR_5->sg_list_paddr =
      VAR_2->sg_list_dma.paddr + sizeof(struct pvscsi_sg_list) * VAR_3;

  FUNC_3(&VAR_5->callout, &VAR_2->lock, 0);
 }

 FUNC_0(&VAR_2->free_list);
 for (VAR_3 = (VAR_2->hcb_cnt - 1); VAR_3 >= 0; --VAR_3) {
  VAR_5 = VAR_2->hcbs + VAR_3;
  FUNC_1(&VAR_2->free_list, VAR_5, VAR_1);
 }

fail:
 if (VAR_4) {
  FUNC_6(VAR_2, VAR_3);
 }

 return (VAR_4);
}
