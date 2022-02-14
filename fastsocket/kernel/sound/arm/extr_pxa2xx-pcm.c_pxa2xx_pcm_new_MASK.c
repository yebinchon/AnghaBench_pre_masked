
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int private_free; struct pxa2xx_pcm_client* private_data; } ;
struct snd_card {TYPE_1__* dev; } ;
struct pxa2xx_pcm_client {scalar_t__ capture_params; scalar_t__ playback_params; } ;
struct TYPE_2__ {int coherent_dma_mask; int * dma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm*,int) ;
 int FUNC_1 (struct snd_card*,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int,int *) ;

int FUNC_3(struct snd_card *VAR_5, struct pxa2xx_pcm_client *VAR_6,
     struct snd_pcm **VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9 = VAR_6->playback_params ? 1 : 0;
 int VAR_10 = VAR_6->capture_params ? 1 : 0;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_5, "PXA2xx-PCM", 0, VAR_9, VAR_10, &VAR_8);
 if (VAR_11)
  goto out;

 VAR_8->private_data = VAR_6;
 VAR_8->private_free = VAR_3;

 if (!VAR_5->dev->dma_mask)
  VAR_5->dev->dma_mask = &VAR_2;
 if (!VAR_5->dev->coherent_dma_mask)
  VAR_5->dev->coherent_dma_mask = 0xffffffff;

 if (VAR_9) {
  int VAR_12 = VAR_1;
  FUNC_2(VAR_8, VAR_12, &VAR_4);
  VAR_11 = FUNC_0(VAR_8, VAR_12);
  if (VAR_11)
   goto out;
 }
 if (VAR_10) {
  int VAR_13 = VAR_0;
  FUNC_2(VAR_8, VAR_13, &VAR_4);
  VAR_11 = FUNC_0(VAR_8, VAR_13);
  if (VAR_11)
   goto out;
 }

 if (VAR_7)
  *VAR_7 = VAR_8;
 VAR_11 = 0;

 out:
 return VAR_11;
}
