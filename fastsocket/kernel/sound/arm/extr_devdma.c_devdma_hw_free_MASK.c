
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct snd_dma_buffer {int addr; int area; int bytes; TYPE_1__ dev; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_dma_buffer* dma_buffer_p; int * dma_area; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct snd_dma_buffer*) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;

void FUNC_3(struct device *VAR_0, struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_dma_buffer *VAR_3 = VAR_2->dma_buffer_p;

 if (VAR_2->dma_area == ((void*)0))
  return;

 if (VAR_3 != &VAR_1->dma_buffer) {
  FUNC_0(VAR_3->dev.dev, VAR_3->bytes, VAR_3->area, VAR_3->addr);
  FUNC_1(VAR_2->dma_buffer_p);
 }

 FUNC_2(VAR_1, ((void*)0));
}
