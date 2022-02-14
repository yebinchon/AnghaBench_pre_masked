
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * area; } ;
struct snd_pcm_substream {TYPE_1__ dma_buffer; scalar_t__ dma_buf_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0)
{
 if (VAR_0->dma_buffer.area == ((void*)0))
  return;
 if (VAR_0->dma_buf_id)
  FUNC_1(&VAR_0->dma_buffer, VAR_0->dma_buf_id);
 else
  FUNC_0(&VAR_0->dma_buffer);
 VAR_0->dma_buffer.area = ((void*)0);
}
