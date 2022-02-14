
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_private {size_t current_link; scalar_t__ dma_buf_next; scalar_t__ period_size; scalar_t__ dma_buf_end; scalar_t__ dma_buf_phys; TYPE_1__* substream; struct fsl_dma_link_descriptor* link; } ;
struct fsl_dma_link_descriptor {void* dest_addr; void* source_addr; } ;
struct TYPE_2__ {scalar_t__ stream; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fsl_dma_private *VAR_2)
{
 struct fsl_dma_link_descriptor *VAR_3 =
  &VAR_2->link[VAR_2->current_link];


 if (VAR_2->substream->stream == VAR_1)
  VAR_3->source_addr =
   FUNC_0(VAR_2->dma_buf_next);
 else
  VAR_3->dest_addr =
   FUNC_0(VAR_2->dma_buf_next);


 VAR_2->dma_buf_next += VAR_2->period_size;

 if (VAR_2->dma_buf_next >= VAR_2->dma_buf_end)
  VAR_2->dma_buf_next = VAR_2->dma_buf_phys;

 if (++VAR_2->current_link >= VAR_0)
  VAR_2->current_link = 0;
}
