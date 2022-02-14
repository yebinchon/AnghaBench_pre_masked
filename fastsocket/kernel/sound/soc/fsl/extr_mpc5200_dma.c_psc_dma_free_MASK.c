
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* socdev; } ;
struct TYPE_6__ {scalar_t__ addr; int * area; } ;
struct snd_pcm_substream {TYPE_3__ dma_buffer; } ;
struct snd_pcm {TYPE_2__* streams; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_5__ {struct snd_pcm_substream* substream; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*,struct snd_pcm*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct snd_pcm_substream *VAR_2;
 int VAR_3;

 FUNC_0(VAR_1->socdev->dev, "psc_dma_free(pcm=%p)\n", VAR_0);

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_2 = VAR_0->streams[VAR_3].substream;
  if (VAR_2) {
   FUNC_1(&VAR_2->dma_buffer);
   VAR_2->dma_buffer.area = ((void*)0);
   VAR_2->dma_buffer.addr = 0;
  }
 }
}
