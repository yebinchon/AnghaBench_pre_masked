
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_dma_buffer {int * area; int addr; int bytes; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; } ;
struct snd_pcm {TYPE_1__* card; TYPE_2__* streams; } ;
struct TYPE_4__ {struct snd_pcm_substream* substream; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_0)
{
 struct snd_pcm_substream *VAR_1;
 struct snd_dma_buffer *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_1 = VAR_0->streams[VAR_3].substream;
  if (!VAR_1)
   continue;

  VAR_2 = &VAR_1->dma_buffer;
  if (!VAR_2->area)
   continue;

  FUNC_0(VAR_0->card->dev, VAR_2->bytes,
          VAR_2->area, VAR_2->addr);
  VAR_2->area = ((void*)0);
 }
}
