
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; int type; } ;
struct snd_dma_buffer {size_t bytes; int * area; int * private_data; int addr; TYPE_1__ dev; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {size_t dma_bytes; struct snd_dma_buffer* dma_buffer_p; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct snd_pcm_substream*) ;
 int * FUNC_1 (struct device*,size_t,int *,int ) ;
 int FUNC_2 (struct snd_dma_buffer*) ;
 struct snd_dma_buffer* FUNC_3 (int,int ) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_dma_buffer*) ;

int FUNC_5(struct device *VAR_3, struct snd_pcm_substream *VAR_4, size_t VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct snd_dma_buffer *VAR_7 = VAR_6->dma_buffer_p;
 int VAR_8 = 0;

 if (VAR_7) {
  if (VAR_7->bytes >= VAR_5)
   goto out;
  FUNC_0(VAR_3, VAR_4);
 }

 if (VAR_4->dma_buffer.area != ((void*)0) && VAR_4->dma_buffer.bytes >= VAR_5) {
  VAR_7 = &VAR_4->dma_buffer;
 } else {
  VAR_7 = FUNC_3(sizeof(struct snd_dma_buffer), VAR_1);
  if (!VAR_7)
   goto nomem;

  VAR_7->dev.type = VAR_2;
  VAR_7->dev.dev = VAR_3;
  VAR_7->area = FUNC_1(VAR_3, VAR_5, &VAR_7->addr, VAR_1);
  VAR_7->bytes = VAR_5;
  VAR_7->private_data = ((void*)0);

  if (!VAR_7->area)
   goto free;
 }
 FUNC_4(VAR_4, VAR_7);
 VAR_8 = 1;
 out:
 VAR_6->dma_bytes = VAR_5;
 return VAR_8;

 free:
 FUNC_2(VAR_7);
 nomem:
 return -VAR_0;
}
